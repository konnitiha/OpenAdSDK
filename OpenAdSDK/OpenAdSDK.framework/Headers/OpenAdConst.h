//
//  OpenAdConst.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/21.
//

#import <Foundation/Foundation.h>

#define OPENAD_FIX_CATEGORY_BUG(name) @interface OPENAD_FIX_CATEGORY_BUG_##name: NSObject @end \
                                  @implementation OPENAD_FIX_CATEGORY_BUG_##name @end


FOUNDATION_EXPORT NSString *kOpenAdExtraDicRootViewControllerKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicSplashBottomViewKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicSplashSkipTimeKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicAdSizeKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicTimeoutKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicAutoSwitchIntervalKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicMuteKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicRewardVideoModelKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicRewardVideoAdMuteKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicNativeAdLoadCountKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicNativeAdMuteKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicCustomWindowKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicShakeEnableKey;
FOUNDATION_EXPORT NSString *kOpenAdExtraDicShakeLevelKey;


typedef NS_ENUM(NSInteger,OpenAdLogLevel) {
    OpenAdLogLevel_None  = 0, // 不打印
    OpenAdLogLevel_Debug,
};


typedef NS_ENUM(NSInteger,OpenAdADNChannel) {
    OpenAdADNChannel_Unknown  = 0,
    OpenAdADNChannel_Csj = 1,
    OpenAdADNChannel_Gdt = 2,
    OpenAdADNChannel_OpenAdx  = 3,
    OpenAdADNChannel_Kuaishou = 4,
    OpenAdADNChannel_Tanx = 5,
    OpenAdADNChannel_Baidu = 6,
    OpenAdADNChannel_Jd = 7,
    OpenAdADNChannel_IFYL = 9,
    OpenAdADNChannel_QuMeng = 10,
    
};

// MARK: ======================= SDK =======================
extern NSString *const OpenAdSDKVersion;

extern NSString *const OpenAdSdkTypeAdName;
extern NSString *const OpenAdSdkTypeAdNameSplash;
extern NSString *const OpenAdSdkTypeAdNameBanner;
extern NSString *const OpenAdSdkTypeAdNameInterstitial;
extern NSString *const OpenAdSdkTypeAdNameFullScreenVideo;
extern NSString *const OpenAdSdkTypeAdNameNativeExpress;
extern NSString *const OpenAdSdkTypeAdNameRewardVideo;



