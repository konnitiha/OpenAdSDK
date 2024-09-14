//
//  OpenAdError.h
//  Demo
//
//  Created by OpenAd on 2020/11/18.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


typedef NS_ENUM(NSUInteger, OpenAdErrorCode) {
    OpenAdErrorCode_10000    =    10000,
    OpenAdErrorCode_10001    =    10001,
    OpenAdErrorCode_10002    =    10002,
    OpenAdErrorCode_10003    =    10003,
    OpenAdErrorCode_10004    =    10004,
    OpenAdErrorCode_10005    =    10005,
    OpenAdErrorCode_20001    =    20001,
    OpenAdErrorCode_30000    =    30000,
    OpenAdErrorCode_30001    =    30001,
    OpenAdErrorCode_30002    =    30002,
    OpenAdErrorCode_30004    =    30004,
    OpenAdErrorCode_40005    =    40005,
    OpenAdErrorCode_40006    =    40006,
    OpenAdErrorCode_40007    =    40007,
    OpenAdErrorCode_50000    =    50000,
};

@interface OpenAdError : NSObject


+ (instancetype)errorWithCode:(OpenAdErrorCode)code;

+ (instancetype)errorWithCode:(OpenAdErrorCode)code obj:(id)obj;

- (NSError *)toNSError;

@end

NS_ASSUME_NONNULL_END
