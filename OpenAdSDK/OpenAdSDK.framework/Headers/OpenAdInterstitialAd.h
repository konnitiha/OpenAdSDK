//
//  OpenAdInterstitialAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/16.
//

#import "OpenAdBaseAd.h"
#import "OpenAdBaseDelegate.h"

@class OpenAdInterstitialAd;

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdInterstitialDelegate <OpenAdBaseDelegate>

@optional
/// 广告加载成功回调
/// - Parameter interstitialAd: 广告对象
- (void)onInterstitialAdLoadSuccess:(OpenAdInterstitialAd *)interstitialAd;

/// 加载失败回调
/// - Parameters:
///   - interstitialAd: 广告对象
///   - error: 错误信息
- (void)onInterstitialAdLoadFailed:(OpenAdInterstitialAd *)interstitialAd error:(NSError *)error;

/// 广告展示回调
/// - Parameter info: 广告信息
- (void)onInterstitialAdShow:(OpenAdInterstitialAd *)interstitialAd withInfo:(OpenAdInfo *)info;

/// 广告点击回调
- (void)onInterstitialAdClick:(OpenAdInterstitialAd *)interstitialAd;

/// 广告关闭回调
/// - Parameter dislikeReason: 关闭原因,预留
- (void)onInterstitialAdClose:(OpenAdInterstitialAd *)interstitialAd withDislike:(NSString *)dislikeReason;


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
+ (void)preloadAdWithSlotId:(NSString *)slotId ext:(nullable NSDictionary *)ext;

@end

NS_ASSUME_NONNULL_END
