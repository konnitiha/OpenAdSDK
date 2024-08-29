//
//  OpenAdBaseAd.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/14.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OpenAdInfo.h"
#import "OpenAdBidResult.h"
#import "OpenAdConst.h"


NS_ASSUME_NONNULL_BEGIN

@interface OpenAdBaseAd : NSObject

/// 控制器(在一次广告周期中 不可更改, 不然会引起未知错误)
//@property(nonatomic, weak) UIViewController *rootViewController;


///  单位:分
@property(assign,nonatomic,readonly)NSInteger ecpm;

///   场景 ID
@property(assign,nonatomic)NSInteger sceneID;

@end



NS_ASSUME_NONNULL_END
