//
//  OpenAdBaseDelegate.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/14.
//

#import <Foundation/Foundation.h>

@class OpenAdInfo;

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdBaseDelegate <NSObject>

//子类如有替代回调,则只回调子类回调
@optional
/// 广告加载成功回调,子类如有加载成功实现,则不回调onAdLoadSuccess
- (void)onAdLoadSuccess;

/// 加载失败回调
/// - Parameter error: 错误信息,透传三方 error
- (void)onAdLoadFailed:(NSError *)error;

/// 广告展示回调
/// - Parameter info: 广告信息
- (void)onAdShowWithInfo:(OpenAdInfo *)info;

/// 广告点击回调
- (void)onAdClick;

/// 广告关闭回调
/// - Parameter dislikeReason: 关闭原因,预留
- (void)onAdCloseWithDislike:(NSString *)dislikeReason;

@end

NS_ASSUME_NONNULL_END
