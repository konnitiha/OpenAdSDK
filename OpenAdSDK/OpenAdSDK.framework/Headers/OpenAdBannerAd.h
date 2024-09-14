//
//  OpenAdBannerAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/21.
//

#import "OpenAdBaseAd.h"
#import "OpenAdBaseDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdBannerDelegate <OpenAdBaseDelegate>

/// 取代(void)onAdLoadSuccess;
/// - Parameter bannerView:  bannerview
- (void)onAdLoadSuccess:(UIView *)bannerView;

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

///加载广告
- (void)loadAd;


@end

NS_ASSUME_NONNULL_END
