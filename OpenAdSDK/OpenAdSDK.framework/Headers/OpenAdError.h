//
//  OpenAdError.h
//  Demo
//
//  Created by OpenAd on 2020/11/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 策略相关
typedef NS_ENUM(NSUInteger, OpenAdErrorCode) {
    OpenAdErrorCode_101    =    101,
    OpenAdErrorCode_102    =    102,
    OpenAdErrorCode_103    =    103,
    OpenAdErrorCode_104    =    104,
    OpenAdErrorCode_105    =    105,
    OpenAdErrorCode_110    =    110,
    OpenAdErrorCode_111    =    111,
    OpenAdErrorCode_112    =    112,
    OpenAdErrorCode_113    =    113,
    OpenAdErrorCode_114    =    114,
    OpenAdErrorCode_115    =    115,
    OpenAdErrorCode_116    =    116
};

@interface OpenAdError : NSObject

+ (instancetype)errorWithCode:(OpenAdErrorCode)code;

+ (instancetype)errorWithCode:(OpenAdErrorCode)code obj:(id)obj;

- (NSError *)toNSError;

@end

NS_ASSUME_NONNULL_END
