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


- (instancetype)initWithWaterFallItem:(OpenAdWaterFallItem *)waterFallItem extra:(NSDictionary *)extraDic;
- (void)didReceiveBidResult:(OpenAdBidResult *)result;

- (void)loadAd;
- (void)showAdInWindow:(UIWindow *)window;
- (void)showAdInViewController:(UIViewController *)rootViewController;
- (void)destoryAd;
- (void)deallocAdapter;

- (BOOL)isReady;

@end

NS_ASSUME_NONNULL_END
