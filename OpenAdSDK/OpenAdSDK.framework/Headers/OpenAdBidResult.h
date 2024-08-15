//
//  OpenAdBidResult.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OpenAdBidResult : NSObject

/// 竞价结果
@property (nonatomic, assign, readonly) BOOL win;

/// 竞胜价
@property (nonatomic, assign, readonly) NSInteger winnerPrice;

/// 第二名价格,如有
@property (nonatomic, assign, readonly) NSInteger secondPrice;


/// 竞胜平台 tag
@property (nonatomic, assign, readonly) NSInteger winnerAdnTag;

/// 第二平台 tag
@property (nonatomic, assign, readonly) NSInteger secondAdnTag;

/// 竞价原始数据
@property (nonatomic, strong, readonly) id originNativeAdData;

@end

NS_ASSUME_NONNULL_END
