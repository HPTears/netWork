//
//  XKEncrypt.h
//  testProject
//
//  Created by william on 2018/7/24.
//  Copyright © 2018年 xk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XKEncrypt : NSObject

/**
 MD5加密

 @param inputKey 加密内容
 @param salt 盐
 @return 加密后内容
 */
+ (NSString *) md5Encrypt:(NSString *)inputKey andSalt:(NSString *)salt;

/**
 3DES字符串加密

 @param originalStr 加密内容
 @param key key
 @return 加密后内容
 */
+(NSString *)do3DESEncryptStr:(NSString *)originalStr andKey:(NSString *)key;

/**
 3DES字符串加密
 
 @param encryptStr 解密内容
 @param key key
 @return 加密后内容
 */
+(NSString*)do3DESDecEncryptStr:(NSString *)encryptStr andKey:(NSString *)key;

/**
 16进制3DES加密

 @param originalStr 加密内容
 @param key key
 @return 加密后内容
 */
+(NSString *)do3DESEncryptHex:(NSString *)originalStr andKey:(NSString *)key;


/**
 16进制解密

 @param encryptStr 解密内容
 @param key key
 @return 解密后内容
 */
+(NSString*)do3DESDecEncryptHex:(NSString *)encryptStr andKey:(NSString *)key;

@end
