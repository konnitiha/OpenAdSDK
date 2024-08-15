//
//  OpenAdCustomConfigAdapter.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/16.
//

#import <Foundation/Foundation.h>
#import "OpenAdPlatformInitConfig.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdCustomConfigAdapter <NSObject>

@required

/// adn初始化方法
/// @param initConfig 初始化配置，包括appid、appkey基本信息和部分用户传递配置
- (void)initializeAdapterWithConfiguration:(OpenAdPlatformInitConfig *_Nullable)initConfig;

/// adn的版本号
- (NSString *_Nonnull)networkSdkVersion;


@end

NS_ASSUME_NONNULL_END
