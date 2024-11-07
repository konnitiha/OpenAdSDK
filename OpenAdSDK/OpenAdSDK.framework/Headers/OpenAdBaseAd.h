//
//  OpenAdBaseAd.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OpenAdInfo.h"
#import "OpenAdBidResult.h"
#import "OpenAdConst.h"
#import "OpenAdError.h"


NS_ASSUME_NONNULL_BEGIN

@interface OpenAdBaseAd : NSObject

/// 控制器(在一次广告周期中 不可更改, 不然会引起未知错误)
//@property(nonatomic, weak) UIViewController *rootViewController;

///  单位:分
@property(assign,nonatomic,readonly)NSInteger ecpm;

///  场景 ID
@property(assign,nonatomic)NSInteger sceneID;

/// 请求 ID
@property(copy,nonatomic)NSString *reqId;


/**
 AdnChannel  见OpenAdConst.h
 @{
 @"winPrice":@"1500",
 @"winAdnChannel",@"1",
 @"secondPrice":@"1200",
 @"secondAdnChannel",@"2"
 }
 */
- (void)win:(nullable NSDictionary*)ext;
- (void)loss:(nullable NSDictionary*)ext;

@end



NS_ASSUME_NONNULL_END
