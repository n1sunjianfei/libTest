//
//  EVERLibCommonProtocol.h
//  test2222
//
//  Created by liyaoyao on 2018/1/19.
//  Copyright © 2018年 ever. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EVERLibInnerCommonResult.h"

/// 调用方法时传入的参数
static NSString * EVERLibsInvokeMethodParameters = @"parameters";
/// 从调用方法传入的字典参数中获取结果回调block用的key值
static NSString * EVERLibsCompletionBlockKey = @"completionBlock";

@class EVERLibInnerCommonResult;

@protocol EVERLibCommonProtocol <NSObject>

@property (nonatomic, strong) NSDictionary *paramDict;
@property (nonatomic, copy) void (^completionBlock)(EVERLibInnerCommonResult *result);
/// 初始化，并调用功能的方法,其他库应实现此方法
+ (id)start:(NSDictionary *)param;

@end
