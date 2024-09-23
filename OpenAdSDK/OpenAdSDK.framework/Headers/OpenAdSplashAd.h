//
//  OpenAdSplashAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/14.
//

#import "OpenAdBaseAd.h"
#import "OpenAdBaseDelegate.h"
@class OpenAdSplashAd;

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdSplashDelegate <OpenAdBaseDelegate>
@optional
/// 广告加载成功回调
/// - Parameter splashAd: 广告对象
- (void)onSplashAdLoadSuccess:(OpenAdSplashAd *)splashAd;

/// 加载失败回调
/// - Parameter splashAd: 广告对象
/// - Parameter error: 错误信息,透传三方 error
- (void)onSplashAdLoadFailed:(OpenAdSplashAd *)splashAd error:(NSError *)error;

/// 广告展示回调
/// - Parameter splashAd: 广告对象
/// - Parameter info: 广告信息
- (void)onSplashAdShow:(OpenAdSplashAd *)splashAd withInfo:(OpenAdInfo *)info;

/// 广告点击回调
/// - Parameter splashAd: 广告对象
- (void)onSplashAdClick:(OpenAdSplashAd *)splashAd;

/// 广告关闭回调
/// - Parameter splashAd: 广告对象
/// - Parameter dislikeReason: 关闭原因,预留
- (void)onSplashAdClose:(OpenAdSplashAd *)splashAd withDislike:(NSString *)dislikeReason;
@end


@interface OpenAdSplashAd : OpenAdBaseAd

/// 开屏广告代理
@property (nonatomic,weak) id <OpenAdSplashDelegate> delegate;

/// 广告是否可用
@property (nonatomic, readonly) BOOL isAdReady;

/// 广告位 id
@property (nonatomic, readonly) NSString *slotID;

/// 跳过之间,部分 ADN 支持(京媒)
@property(assign,nonatomic)NSInteger skipTime;

/// 开屏广告底部视图,部分第三方支持 最大高度不超过屏幕高度的 25%
@property(strong,nonatomic)UIView *bottomView;

/// 用于广告跳转的ViewController
@property(nonatomic, weak) UIViewController *rootViewController;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
- (instancetype)initWithSlotID:(NSString *)slotID;

///加载广告
- (void)loadAd;

/// 显示广告
- (void)showSplashWithWindow:(UIWindow *)window;



@end
NS_ASSUME_NONNULL_END
