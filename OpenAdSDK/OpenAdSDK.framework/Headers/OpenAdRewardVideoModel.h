//
//  OpenAdRewardVideoModel.h
//  OpenAdSDK
//
//  Created by fyl on 2024/5/22.
//

#import <Foundation/Foundation.h>

//透传 csj
typedef NS_ENUM(NSInteger, OpenAdRewardType) {
    OpenAdRewardType_Default            = 0,       // 基础奖励 (满足观看时长、互动抵时长等)
    OpenAdRewardType_Interact           = 1,       // 进阶奖励-互动
    OpenAdRewardType_VideoComplete      = 2,       // 进阶奖励-超过30s的视频播放完成
};
NS_ASSUME_NONNULL_BEGIN
__attribute__((objc_subclassing_restricted))
@interface OpenAdRewardVideoModel : NSObject

@property (nonatomic, copy, nullable) NSString *userId;

@property (nonatomic, copy, nullable) NSString *rewardName;

@property (nonatomic, assign) NSInteger rewardAmount;

@property (nonatomic, assign) OpenAdRewardType rewardType;

//对应第三方 custom 或者 extra
@property (nonatomic, copy) NSString *extra;

@end
NS_ASSUME_NONNULL_END
