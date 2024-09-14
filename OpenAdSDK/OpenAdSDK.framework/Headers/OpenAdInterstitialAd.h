//
//  OpenAdInterstitialAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/16.
//

#import "OpenAdBaseAd.h"

#import "OpenAdBaseDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdInterstitialDelegate <OpenAdBaseDelegate>

@end


@interface OpenAdInterstitialAd : OpenAdBaseAd

/// 广告代理
@property (nonatomic,weak) id <OpenAdInterstitialDelegate> delegate;
/// 广告是否可用
@property (nonatomic, readonly) BOOL isAdReady;

/// 广告位 id
@property (nonatomic, readonly) NSString *slotID;

/// 用于广告跳转的ViewController
@property(nonatomic, weak,readonly) UIViewController *rootViewController;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
- (instancetype)initWithSlotID:(NSString *)slotID;

///加载广告
- (void)loadAd;

/// 显示广告
- (void)showInterstitialWithViewController:(UIViewController *)viewController;

/// 预加载广告,只加载非竞价代码位
/// - Parameter slotId: 广告位 id
+ (void)preloadAdWithSlotId:(NSString *)slotId;

@end

NS_ASSUME_NONNULL_END
