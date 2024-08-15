//
//  OpenAdInfo.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenAdInfo : NSObject


/// 第三方网络ID
@property(assign,nonatomic)NSInteger networkFirmId;

/// 第三方广告位ID
@property(strong,nonatomic)NSString *adSourceId;

/// 价格（分）
@property(assign,nonatomic)NSInteger ecpm;

@end

NS_ASSUME_NONNULL_END
