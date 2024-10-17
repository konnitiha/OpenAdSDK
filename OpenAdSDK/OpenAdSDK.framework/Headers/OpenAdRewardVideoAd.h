//
//  OpenAdRewardVideoAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/22.
//

#import "OpenAdBaseAd.h"

#import "OpenAdBaseDelegate.h"
#import "OpenAdRewardVideoModel.h"


@class OpenAdRewardVideoAd;

NS_ASSUME_NONNULL_BEGIN


@protocol OpenAdRewardVideoDelegate <OpenAdBaseDelegate>

@optional
/// 广告加载成功回调
/// - Parameter rewardVideoAd: 广告对象
- (void)onRewardVideoAdLoadSuccess:(OpenAdRewardVideoAd *)rewardVideoAd;

/// 加载失败回调
/// - Parameters:
///   - rewardVideoAd: 广告对象
///   - error: 错误信息
- (void)onRewardVideoAdLoadFailed:(OpenAdRewardVideoAd *)rewardVideoAd error:(NSError *)error;

/// 视频下载完成
/// - Parameter rewardVideoAd: 广告对象
- (void)onRewardVideoAdDidDownLoadVideo:(OpenAdRewardVideoAd *)rewardVideoAd;

/// 视频播放完成回调
/// - Parameters:
///   - rewardVideoAd: 广告对象
///   - error: 错误信息(正常播放完成 error 为 nil,播放出错触发回调并携带错误信息)
- (void)onRewardVideoAdDidPlayFinish:(OpenAdRewardVideoAd *)rewardVideoAd error:(NSError *_Nullable)error;


/// 广告展示回调
/// - Parameter rewardVideoAd: 广告对象
/// - Parameter info: 广告信息
- (void)onRewardVideoAdShow:(OpenAdRewardVideoAd *)rewardVideoAd withInfo:(OpenAdInfo *)info;

/// 广告点击回调
/// - Parameter rewardVideoAd: 广告对象
- (void)onRewardVideoAdClick:(OpenAdRewardVideoAd *)rewardVideoAd;

/// 广告关闭回调
/// - Parameter rewardVideoAd: 广告对象
/// - Parameter dislikeReason: 关闭原因,预留
- (void)onRewardVideoAdClose:(OpenAdRewardVideoAd *)rewardVideoAd withDislike:(NSString *)dislikeReason;


/// 奖励验证成功回调
/// - Parameters:
///   - rewardedVideoAd: 广告对象
///   - verify: 验证状态
- (void)onRewardVideoAdRewardDidSucceed:(OpenAdRewardVideoAd *)rewardedVideoAd;

/// 奖励验证失败回调
/// - Parameters:
///   - rewardVideoAd: 广告对象
///   - error: 失败原因
- (void)onRewardVideoAdRewardDidFail:(OpenAdRewardVideoAd *)rewardVideoAd error:(NSError *_Nullable)error;


/// 详情页关闭
/// - Parameter rewardVideoAd: 广告对象
- (void)onRewardVideoAdDidCloseOtherController:(OpenAdRewardVideoAd *)rewardVideoAd;

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

/// 视频是否静音,默认 NO
@property(assign,nonatomic)BOOL muteIfCan;

/// 初始化广告对象
/// - Parameter slotID: 广告位 id
- (instancetype)initWithSlotID:(NSString *)slotID rewardVideoModel:(OpenAdRewardVideoModel *)model;

///加载广告
- (void)loadAd;

/// 显示广告
- (void)showRewardVideoWithViewController:(UIViewController *)viewControllerow;


/// 预加载广告,只加载非竞价代码位
/// - Parameter slotId: 广告位 id
/// - Parameter ext: 扩展信息 OpenAdConst.h
+ (void)preloadAdWithSlotId:(NSString *)slotId ext:(nullable NSDictionary *)ext;

@end

NS_ASSUME_NONNULL_END
