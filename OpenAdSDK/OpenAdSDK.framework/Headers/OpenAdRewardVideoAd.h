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

@optional

/// 视频下载完成
- (void)onAdDidDownLoadVideo;

/// 视频播放完成回调
/// - Parameter error: 错误信息(正常播放完成 error 为 nil,播放出错触发回调并携带错误信息)
- (void)onAdDidPlayFinish:(NSError *_Nullable)error;

/// 奖励验证成功回调
/// - Parameters:
///   - rewardedVideoAd: 激励 model
///   - verify: 验证状态
- (void)onAdServerRewardDidSucceed:(OpenAdRewardVideoAd *)rewardedVideoAd verify:(BOOL)verify;

/// 奖励验证失败回调
/// - Parameter error: 失败原因
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
