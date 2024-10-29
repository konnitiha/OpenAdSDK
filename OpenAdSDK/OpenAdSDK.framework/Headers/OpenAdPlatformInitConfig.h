//
//  OpenAdPlatformInitConfig.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenAdPlatformInitConfig : NSObject

/// 用户自定义配置
@property (nonatomic, strong, readonly) NSDictionary *userConfig;

/// appID
@property (nonatomic, copy, readonly) NSString *appID;

/// appKey
@property (nonatomic, copy, readonly) NSString *appKey;

/// adn的标识
@property (nonatomic, copy, readonly) NSString *name;

/// 是否可用状态
@property (nonatomic, assign, readonly) BOOL valid;

/// 是否是自定义adapter，白名单用户权限
@property (nonatomic, assign, readonly) BOOL custom;

/// 个性化广告推荐 0-不限制，1-限制，默认为0。
@property (nonatomic, strong,readonly) NSNumber *limitPersonalAds;

/// 禁止CAID  0-不禁止，1-禁止，默认为0。 只适用于百度
@property (nonatomic, strong) NSNumber *forbiddenCAID;

/// 禁止程序化广告  0-不禁止，1-禁止，默认为0。 只适用于ks
@property (nonatomic, strong) NSNumber *limitProgrammaticAds;

/// 是否禁止IDFA：0-不禁止，1-禁止，默认为0。只适用于GDT。
@property (nonatomic, strong, nullable) NSNumber *forbiddenIDFA;

/// 禁止地理位置：0-不禁止，1-禁止，默认为0。
@property (nonatomic, strong) NSNumber *forbiddenLocation;

/// 禁止采集设备信息:0-不禁止，1-禁止，默认为0。
@property (nonatomic, strong) NSNumber *forbiddenDeviceInfo;

/// 禁止摇一摇 :0-不禁止，1-禁止，默认为0。
@property(nonatomic,strong)NSNumber *forbiddenShake;

/// 禁止 IDFA情况下,用户传入自定义字符串,透传三方广告平台
@property(copy,nonatomic)NSString *customIDFA;

/// 自定义adapter初始化的配置类名，该类对象遵循OpenAdMCustomConfigAdapter协议
@property (nonatomic, copy, readonly) NSString *customAdnClassName;

/// 自定义adapter banner广告的配置类名，该类对象遵循OpenAdMCustomBannerAdapter协议
@property (nonatomic, copy, readonly) NSString *customBannerAdapterClassName;

/// 自定义adapter 插屏广告的配置类名，该类对象遵循OpenAdMCustomInterstitialAdapter协议
@property (nonatomic, copy, readonly) NSString *customInterstitialAdapterClassName;

/// 自定义adapter 激励视频广告的配置类名，该类对象遵循OpenAdMCustomRewardedVideoAdapter协议
@property (nonatomic, copy, readonly) NSString *customRewardedVideoAdapterClassName;

/// 自定义adapter 全屏广告的配置类名，该类对象遵循OpenAdMCustomFullscreenVideoAdapter协议
@property (nonatomic, copy, readonly) NSString *customFullscreenVideoAdapterClassName;

/// 自定义adapter 开屏广告的配置类名，该类对象遵循OpenAdMCustomSplashAdapter协议
@property (nonatomic, copy, readonly) NSString *customSplashAdapterClassName;

/// 自定义adapter native广告的配置类名，该类对象遵循OpenAdMCustomNativeAdapter协议
@property (nonatomic, copy, readonly) NSString *customNativeAdapterClassName;


//透传adx
/// optional
/*
 当前手机上的安装app列表,一个字符串数组
 */
@property(nonatomic,strong)NSArray<NSString *> *appList;

/// optional
/*
 CAID 数组对象 数组元素为 dic 格式如下:
 @[@{
 @"caid":@"Caid id",
 @"version":@"Caid version"
 }];
 */
@property(nonatomic,strong)NSArray *CAIDList;


@end

NS_ASSUME_NONNULL_END
