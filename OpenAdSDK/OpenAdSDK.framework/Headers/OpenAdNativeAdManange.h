//
//  OpenAdNativeAdManange.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/27.
//

#import "OpenAdBaseAd.h"
#import "OpenAdNativeAd.h"
#import "OpenAdBaseDelegate.h"

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdNativeAdManangeDelegate <OpenAdBaseDelegate>

@optional

/// 广告加载成功
/// - Parameter nativeAdDataArray: OpenAdNativeAd 数组
- (void)onAdLoadSuccess:(NSArray<OpenAdNativeAd *> *_Nullable)nativeAdDataArray;

/// 广告展示回调
/// - Parameter nativeAd: OpenAdNativeAd
- (void)onAdShow:(OpenAdNativeAd *)nativeAd;

/// 广告点击回调
/// - Parameter nativeAd: OpenAdNativeAd
- (void)onAdClick:(OpenAdNativeAd *)nativeAd;

/// 广告关闭回调(自渲染广告不会回调)
/// - Parameters:
///   - nativeAd: OpenAdNativeAd
///   - dislikeReason: 关闭原因
- (void)onAdClosed:(OpenAdNativeAd *)nativeAd WithDislike:(NSString *)dislikeReason;

@end

@interface OpenAdNativeAdManange : OpenAdBaseAd
/// 广告代理
@property (nonatomic,weak) id <OpenAdNativeAdManangeDelegate> delegate;

/// 广告位 id
@property (nonatomic, strong,readonly) NSString *slotID;

/// 期望广告尺寸
@property(assign,nonatomic,readonly)CGSize adSize;

/// 跳转控制器
@property(nonatomic, weak,readonly) UIViewController *rootViewController;

/// 视频是否静音,默认 NO
@property(assign,nonatomic)BOOL muteIfCan;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
/// - Parameter rootViewController: 跳转控制器
/// - Parameter adSize: 期望广告尺寸
- (instancetype)initWithSlotID:(NSString *)slotID rootViewController:(UIViewController *)rootViewController adSize:(CGSize)adSize;

///加载广告 count:1-3
- (void)loadAdWithCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
