//
//  OpenAdLog.h
//  Example
//
//  Created by OpenAd on 2019/11/5.
//  Copyright © 2019 OpenAd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OpenAdConst.h"

@class OpenAdLog;

#define OPENAD_DEBUG_LOG(format,...)  [OpenAdLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__] level:OpenAdLogLevel_Debug]

#define OpenAdLog(format,...)  [OpenAdLog customLogWithFunction:__FUNCTION__ lineNumber:__LINE__ formatString:[NSString stringWithFormat:format, ##__VA_ARGS__]]

NS_ASSUME_NONNULL_BEGIN


@interface OpenAdLog : NSObject

// 日志输出方法
+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString level:(OpenAdLogLevel)level;

+ (void)customLogWithFunction:(const char *)function lineNumber:(int)lineNumber formatString:(NSString *)formatString;



@end

NS_ASSUME_NONNULL_END
