//
//  OpenAdBaseAdapter.h
//  OpenAdSDK
//
//  Created by CLOOOUD on 2021/10/12.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "OpenAdConst.h"

@class OpenAdBidResult;
@class OpenAdWaterFallItem;
NS_ASSUME_NONNULL_BEGIN

@interface OpenAdBaseAdapter : NSObject


/// 初始化广告
/// - Parameters:
///   - waterFallItem: 平台信息
///   - extraDic: 扩展信息
- (instancetype)initWithWaterFallItem:(OpenAdWaterFallItem *)waterFallItem extra:(NSDictionary *)extraDic;

/// 收到竞价结果
/// - Parameter result: 竞价结果
- (void)didReceiveBidResult:(OpenAdBidResult *)result;

/// 加载广告
- (void)loadAd;

/// 展示开屏广告
/// - Parameter window: 主 window
- (void)showAdInWindow:(UIWindow *)window;

/// 展示插屏/激励视频 广告
/// - Parameter rootViewController: 跳转控制器
- (void)showAdInViewController:(UIViewController *)rootViewController;

/// 销毁 广告
- (void)destoryAd;

/// 销毁 adapter
- (void)deallocAdapter;

/// 是否可用
- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END
