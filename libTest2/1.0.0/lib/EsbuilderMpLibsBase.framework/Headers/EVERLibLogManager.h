//
//  JYModuleConfig.h
//  JYModuleBase
//
//  Created by liyaoyao on 2017/12/29.
//

#import <Foundation/Foundation.h>


#define MB_IS_IPHONE_X (([[UIScreen mainScreen] bounds].size.height-812)?NO:YES)

// 当调用拍照时通过传参确定摄像头的方法,例 {"URL":"xxx","cameraPosition":"front"}
// 摄像头方向的key
#define MB_DEVICE_POSITION @"cameraPosition"
// 摄像头方向的value
#define MB_DEVICE_POSITION_BACK @"back"
#define MB_DEVICE_POSITION_FRONT @"front"

// OCR识别身份证正反面的key
#define MB_IDCARD_TYPE @"idCardType"
#define MB_IDCARD_TYPE_BACK  @"back"
#define MB_IDCARD_TYPE_FRONT @"front"

// 上传地址的key
#define MB_UPLOAD_URL @"URL"

// 调用通讯录选中联系人的信息
#define MB_ADDRESSBOOK_PERSON_NAME @"name"
#define MB_ADDRESSBOOK_PERSON_PHONENUMBER @"phoneNumber"
#define MB_ADDRESSBOOK_PERSON_COMPANY @"company"
#define MB_ADDRESSBOOK_PERSON_EMAIL @"email"

// 调用统一方法时的功能配置
// 查看上传结果的key
#define MB_UPLOAD_RESULT @"returnCode"

// 上传成功时returnCode 的value
#define MB_UPLOAD_SUCCESS @"000000"

// 上传状态的提示信息
#define MB_UPLOAD_PROMPT_INFO @"正在上传"
#define MB_UPLOAD_PROMPT_FAILED @"上传失败"
#define MB_UPLOAD_PROMPT_SUCCESS @"上传成功"
#define MB_UPLOAD_PROMPT_NET_ERROR @"网络异常,请稍后再试"


// log打印宏
#define EVERLibLogDebug(format, ...) MCLogDesc(EVERLibLogDebugFlagString,__PRETTY_FUNCTION__,__LINE__, format, ##__VA_ARGS__)
#define EVERLibLogError(format, ...) MCLogDesc(EVERLibLogErrorFlagString,__PRETTY_FUNCTION__,__LINE__, format, ##__VA_ARGS__)
#define EVERLibLogInfo(format, ...) MCLogDesc(EVERLibLogInfoFlagString,__PRETTY_FUNCTION__,__LINE__, format, ##__VA_ARGS__)
#define EVERLibLogWarning(format, ...) MCLogDesc(EVERLibLogWarningFlagString,__PRETTY_FUNCTION__,__LINE__, format, ##__VA_ARGS__)

// 拼接错误信息字符串
#define EVERLibLogErrorDesc(format, ...) LMLogDesc(EVERLibLogErrorFlagString,__PRETTY_FUNCTION__,__LINE__, format, ##__VA_ARGS__)

@interface EVERLibLogManager : NSObject

FOUNDATION_EXTERN  NSString * const EVERLibLogErrorFlagString;
FOUNDATION_EXTERN  NSString * const EVERLibLogWarningFlagString;
FOUNDATION_EXTERN  NSString * const EVERLibLogDebugFlagString;
FOUNDATION_EXTERN  NSString * const EVERLibLogInfoFlagString;

FOUNDATION_EXTERN void MCLogDesc(NSString *type, const char* function, NSUInteger line, NSString *format, ...);
FOUNDATION_EXTERN NSString * LMLogDesc(NSString *type,const char* function,NSUInteger line, NSString *format, ...);

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)shareManager;

/// 打印开关
+ (void)enableLog:(BOOL)enable;


@end
