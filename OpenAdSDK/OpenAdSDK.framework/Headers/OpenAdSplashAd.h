//
//  OpenAdSplashAd.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/14.
//

#import "OpenAdBaseAd.h"
#import "OpenAdBaseDelegate.h"

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdSplashDelegate <OpenAdBaseDelegate>
//见 OpenAdBaseDelegate
@end


@interface OpenAdSplashAd : OpenAdBaseAd

/// 开屏广告代理
@property (nonatomic,weak) id <OpenAdSplashDelegate> delegate;

/// 广告是否可用
@property (nonatomic, readonly) BOOL isAdReady;

/// 广告位 id
@property (nonatomic, readonly) NSString *slotID;

/// 开屏广告底部视图,部分第三方支持
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
