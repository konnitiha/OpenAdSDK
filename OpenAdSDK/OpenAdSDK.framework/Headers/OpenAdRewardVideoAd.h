//
//  OpenAdRewardVideoAd.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/22.
//

#import "OpenAdBaseAd.h"

#import "OpenAdBaseDelegate.h"
#import "OpenAdRewardVideoModel.h"

@class OpenAdRewardVideoAd;

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdRewardVideoDelegate <OpenAdBaseDelegate>

- (void)onAdDidDownLoadVideo;
- (void)onAdDidPlayFinish:(NSError *_Nullable)error;
- (void)onAdServerRewardDidSucceed:(OpenAdRewardVideoAd *)rewardedVideoAd verify:(BOOL)verify;
- (void)onAdServerRewardDidFail:(NSError *_Nullable)error;

@end


@interface OpenAdRewardVideoAd : OpenAdBaseAd

/// 广告代理
@property (nonatomic,weak) id <OpenAdRewardVideoDelegate> delegate;

/// 激励 model
@property(strong,nonatomic,readonly)OpenAdRewardVideoModel *rewardVideoModel;

///  广告是否准备好
@property (nonatomic, readonly) BOOL isAdReady;

/// 广告位 id
@property (nonatomic, readonly) NSString *slotID;

/// 跳转控制器
@property(nonatomic, weak,readonly) UIViewController *rootViewController;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
- (instancetype)initWithSlotID:(NSString *)slotID rewardVideoModel:(OpenAdRewardVideoModel *)model;

///加载广告
- (void)loadAd;

/// 显示广告
- (void)showRewardVideoWithViewController:(UIViewController *)viewControllerow;

@end

NS_ASSUME_NONNULL_END
