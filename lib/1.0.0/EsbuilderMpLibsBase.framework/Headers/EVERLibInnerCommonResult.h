//
//  JYLibInnerCommonResult.h
//  test2222
//
//  Created by liyaoyao on 2018/1/23.
//  Copyright © 2018年 ever. All rights reserved.
//

#import <Foundation/Foundation.h>

@class EVERLibInnerCommonResult;
typedef void(^EVERLibInnerResultBlock)(EVERLibInnerCommonResult *result);

typedef NSString * const EVERLibInnerResultInfoKey;

extern EVERLibInnerResultInfoKey const EVERLibInnerResultKey;
extern EVERLibInnerResultInfoKey const EVERLibInnerResultDescriptionKey;

@interface EVERLibInnerCommonResult : NSObject

@property (nonatomic, strong) NSDictionary <EVERLibInnerResultInfoKey, id>*resultDict;
@property (nonatomic, strong) NSError *error;
@property (nonatomic, copy) NSString *resultDescription;

+ (instancetype)result:(NSDictionary *)result error:(NSError *)error;
- (instancetype)initWithResultDict:(NSDictionary *)result error:(NSError *)error;

- (id)getValue:(NSString *)key;

@end
