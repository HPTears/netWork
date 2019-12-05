//
//  XKServerEncrypt.h
//  XKSquare
//
//  Created by william on 2018/8/2.
//  Copyright © 2018年 xk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XKServerEncrypt : NSObject

/**
 直接根据规则对字典进行数据加密
 
 @param dic 加密数据
 @param saltStr 盐值
 @return 返回加密后数据
 */
+ (NSString *)getEncryptServerDataWithDataDic:(NSDictionary *)dic Salt:(NSString *)saltStr;


/**
 解密服务器返回数据
 
 @param dataStr 加密字符串
 @param saltStr 盐值
 @return 解密字符串
 */
+ (NSString *)getDecodeServerDataWithDataString:(NSString *)dataStr Salt:(NSString *)saltStr;

/**
 获取服务器加密签名
 
 @param TypeStr 服务类型
 @param timeStampStr 时间戳
 @param dataStr 传输数据Json字符串
 @param versionStr 服务版本号
 @param SaltStr 盐值
 @return 返回加密后sigh
 */
+ (NSString *)getEncryptSeverSighWithServiceType:(NSString *)TypeStr TimeStamp:(NSString *)timeStampStr data:(NSString *)dataStr  ServerVersion:(NSString *)versionStr Salt:(NSString *)SaltStr;

@end
