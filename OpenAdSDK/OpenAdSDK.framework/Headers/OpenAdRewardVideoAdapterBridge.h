//
//  OpenAdRewardVideoAdapterBridge.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/22.
//

#import "OpenAdBaseAdapterBridge.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdRewardVideoAdapterBridge <OpenAdBaseAdapterBridge>

@required
/// 在广告加载完成时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param ext 回传信息
- (void)rewardVideoAd:(id _Nonnull)adapter didLoadWithExt:(NSDictionary *)ext;

/// 在广告加载失败时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
/// @param ext 回传信息
- (void)rewardVideoAd:(id _Nonnull)adapter didLoadFailWithError:(NSError *_Nullable)error ext:(NSDictionary *)ext;

- (void)rewardVideoAdDidDownloadVideo:(id _Nonnull)adapter;


/// 在广告即将展示时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)rewardVideoAdWillVisible:(id _Nonnull)adapter;


/// 在广告点击事件触发时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)rewardVideoAdDidClick:(id _Nonnull)adapter;


/// 在广告关闭时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)rewardVideoAdDidClose:(id _Nonnull)adapter;

- (void)rewardVideoAdDidPlayFinish:(id _Nonnull)adapter didFailWithError:(NSError *_Nullable)error;
- (void)rewardVideoAdServerRewardDidSucceed:(id _Nonnull)adapter verify:(BOOL)verify;
- (void)rewardVideoAdServerRewardDidFail:(id _Nonnull)adapter error:(NSError *_Nullable)error;
@end

NS_ASSUME_NONNULL_END
