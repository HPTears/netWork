//
//  XKHttpErrror.h
//  XKSquare
//
//  Created by 刘晓霖 on 2018/9/18.
//  Copyright © 2018年 xk. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XKHttpErrror : NSObject
@property (nonatomic, assign)NSInteger code;
@property (nonatomic, copy)NSString *message;

@end
