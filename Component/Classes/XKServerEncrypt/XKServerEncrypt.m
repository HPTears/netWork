//
//  XKServerEncrypt.m
//  XKSquare
//
//  Created by william on 2018/8/2.
//  Copyright © 2018年 xk. All rights reserved.
//

#import "XKServerEncrypt.h"
#import "XKEncrypt.h"

NSString *const DataKey            = @"c33367701511b4f6020ec61ded352059";
NSString *const signKey            = @"e10adc3949ba59abbe56e057f20f883e";

@implementation XKServerEncrypt
+ (NSString *)getEncryptServerDataWithDataDic:(NSDictionary *)dic Salt:(NSString *)saltStr{
    NSError *error;
    NSString *jsonString  = [[NSString alloc]initWithData: [NSJSONSerialization dataWithJSONObject:dic options:NSJSONWritingPrettyPrinted error:&error] encoding:NSUTF8StringEncoding];
    jsonString = [XKEncrypt do3DESEncryptStr:jsonString andKey:[XKEncrypt md5Encrypt:DataKey andSalt:saltStr]];
    return jsonString;
}


+ (NSString *)getDecodeServerDataWithDataString:(NSString *)dataStr Salt:(NSString *)saltStr{
    return [XKEncrypt do3DESDecEncryptStr:dataStr andKey:[XKEncrypt md5Encrypt:DataKey andSalt:saltStr]];
}


+ (NSString *)getEncryptSeverSighWithServiceType:(NSString *)TypeStr TimeStamp:(NSString *)timeStampStr data:(NSString *)dataStr  ServerVersion:(NSString *)versionStr Salt:(NSString *)SaltStr{
    return [XKEncrypt md5Encrypt:[NSString stringWithFormat:@"%@%@%@%@%@%@",TypeStr,timeStampStr,dataStr,versionStr,SaltStr,signKey] andSalt:nil];
}

@end
