//
//  OpenAdBannerAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/21.
//

#import "OpenAdBaseAd.h"
#import "OpenAdBaseDelegate.h"

@class OpenAdBannerAd;

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdBannerDelegate <OpenAdBaseDelegate>
@optional
/// 加载成功回调
/// - Parameters:
///   - bannerAd: 广告对象
///   - bannerView: 广告视图
- (void)onBannerAdLoadSuccess:(OpenAdBannerAd *)bannerAd bannerView:(UIView *)bannerView;

/// 加载失败回调
/// - bannerAd: 广告对象
/// - Parameter error: 错误信息,透传三方 error
- (void)onBannerAdLoadFailed:(OpenAdBannerAd *)bannerAd error:(NSError *)error;

/// 广告展示回调
/// - bannerAd: 广告对象
/// - Parameter info: 广告信息
- (void)onBannerAdShow:(OpenAdBannerAd *)bannerAd withInfo:(OpenAdInfo *)info;

/// 广告点击回调
/// - bannerAd: 广告对象
- (void)onBannerAdClick:(OpenAdBannerAd *)bannerAd;

/// 广告关闭回调
/// - bannerAd: 广告对象
/// - Parameter dislikeReason: 关闭原因,预留
- (void)onBannerAdClose:(OpenAdBannerAd *)bannerAd withDislike:(NSString *)dislikeReason;


/// 详情页关闭
/// - Parameter bannerAd: 广告对象
- (void)onBannerAdDidCloseOtherController:(OpenAdBannerAd *)bannerAd;

@end

@interface OpenAdBannerAd : OpenAdBaseAd

/// 开屏广告代理
@property (nonatomic,weak) id <OpenAdBannerDelegate> delegate;

/// 广告是否准备好
@property (nonatomic, assign,readonly) BOOL isAdReady;

/// 广告位 id
@property (nonatomic, strong,readonly) NSString *slotID;

/// banner 期望size
@property(assign,nonatomic,readonly)CGSize adSize;

/// 广告视图
@property (nonatomic, strong,readonly)UIView *bannerView;

//跳转控制器
@property(nonatomic, weak,readonly) UIViewController *rootViewController;


/// 初始化广告对象
/// - Parameter slotID: 广告位 id
/// - Parameter rootViewController: 跳转控制器
/// - Parameter adSize: 广告期望尺寸
- (instancetype)initWithSlotID:(NSString *)slotID rootViewController:(UIViewController *)rootViewController adSize:(CGSize)adSize;

/// 初始化自动轮播广告对象
/// - Parameter slotID: 广告位 id
/// - Parameter rootViewController: 跳转控制器
/// - Parameter adSize: 广告期望尺寸
/// - Parameter autoSwitchInterval: 自动轮播间隔[30-120]
- (instancetype)initWithSlotID:(NSString *)slotID rootViewController:(UIViewController *)rootViewController adSize:(CGSize)adSize autoSwitchInterval:(int)autoSwitchInterval;

///加载广告
- (void)loadAd;


@end

NS_ASSUME_NONNULL_END
