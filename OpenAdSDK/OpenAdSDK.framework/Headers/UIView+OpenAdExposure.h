//
//  UIView+OpenAdExposure.h
//  OpenAdAPIAd
//
//  Created by fyl on 2023/4/28.
//

#import <UIKit/UIKit.h>


static NSInteger kOpenAdEffectiveExposureTime = 0; //默认的有效曝光时间300ms
static NSInteger kOpenAdEffectiveExposureRatio = 50;  //默认的有效曝光比例


@interface UIView (OpenAdExposure)

/**
     UIView 曝光时的操作（可用于统计）
 */
@property (nonatomic, copy, setter=openAd_setExposuerBlock:) void(^openAd_exposureBlock)(UIView *);

@property (nonatomic, copy, setter=openAd_setEndExposuerBlock:) void(^openAd_endExposureBlock)(UIView *);

@property (nonatomic, assign, setter=openAd_setRepeatExposure:) BOOL openAd_repeatExposure;
@property (nonatomic, assign, setter=openAd_setIsExposing:) BOOL openAd_isExposing;
/**
    UIView 曝光补偿（原来的曝光区域+这里的补偿，CGRectMake(x-.width, y-.heigh, w+2*.widht, h+2*.heigh)）
    时机：最好在设置曝光操作（openAd_setExposuerBlock:）前设置 -- 默认时CGSizeZero
 */
@property (nonatomic, assign, setter=openAd_setECompensationSize:) CGSize openAd_ECompensationSize;

/// 设置为YES时，忽略进行曝光的操作，NO就正常曝光，默认NO
@property (nonatomic, assign, setter=openAd_setIgnoreExposure:) BOOL openAd_ignoreExposure;

/// 设置为YES时，忽略进行曝光的操作，NO就正常曝光，默认NO
/// 当superView的openAd_ignoreExposure为YES时，openAd_ignoreExposureFromSuperView就会跟随变为YES
@property (nonatomic, assign, setter=openAd_setIgnoreExposureFromSuperView:) BOOL openAd_ignoreExposureFromSuperView;

/// 有效曝光时长，只有曝光时长大于openAd_EffectiveExposureTime才算有效曝光, 单位是毫秒
/// 默认是300毫秒（kOpenAdEffectiveExposureTime）
@property (nonatomic, assign, setter=openAd_setEffectiveExposureTime:) NSInteger openAd_EffectiveExposureTime;

/// 有效曝光比例，只有曝光面积大于openAd_EffectiveExposureRatio时才算曝光（0～100），小于0就等于0，只要有曝光即可，大于100就等于100，要全部曝光
/// 默认是0，即露出就算曝光（kOpenAdEffectiveExposureRatio）
@property (nonatomic, assign, setter=openAd_setEffectiveExposureRatio:) NSInteger openAd_EffectiveExposureRatio;

@end


