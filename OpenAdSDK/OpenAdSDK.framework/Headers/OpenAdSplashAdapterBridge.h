//
//  OpenAdSplashAdapterBridge.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/14.
//

#import "OpenAdBaseAdapterBridge.h"
NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdSplashAdapterBridge <OpenAdBaseAdapterBridge>

@required

/// 在广告加载完成时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param ext 回传信息
- (void)splashAd:(id _Nonnull)adapter didLoadWithExt:(NSDictionary *)ext;

/// 在广告加载失败时调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
/// @param ext 回传信息
- (void)splashAd:(id _Nonnull)adapter didLoadFailWithError:(NSError *_Nullable)error ext:(NSDictionary *)ext;


/// 在广告即将展示时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdWillVisible:(id _Nonnull)adapter;

/// 广告展示失败的时候调用该方法，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
- (void)splashAdDidShowFailed:(id )adapter error:(NSError *)error;

/// 在广告点击事件触发时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdDidClick:(id _Nonnull)adapter;

/// 在广告被点击跳过时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdDidClickSkip:(id _Nonnull)adapter;

/// 在广告关闭时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdDidClose:(id _Nonnull)adapter;


/// 在广告即将展示详情页或者app store时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdWillPresentFullScreenModal:(id _Nonnull)adapter;

/// 在广告关闭详情页或者app store时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdWillDismissFullScreenModal:(id _Nonnull)adapter;

/// 在模板广告渲染成功时调用，非模板广告无需调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdDidRenderSuccess:(id _Nonnull)adapter;

/// 在广告渲染失败时调用，非模板广告无需调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 错误信息
- (void)splashAd:(id _Nonnull)adapter didRenderFailedWithError:(NSError *)error;

/// 在广告倒计时结束时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
- (void)splashAdDidCountDownToZero:(id _Nonnull)adapter;

/// 在广告视频播放完成或者出错时调用，直接调用即可，无需做响应判断
/// @param adapter 当前适配器
/// @param error 播放错误
- (void)splashAd:(id _Nonnull)adapter didPlayFinishWithError:(NSError *)error;

/// 广告点击跳转使用的控制器
- (UIViewController *)viewControllerForPresentingModalView;


@end

NS_ASSUME_NONNULL_END
