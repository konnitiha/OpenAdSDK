//
//  OpenAdMaterialMeta.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/29.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "OpenAdNativeVideoView.h"

typedef NS_ENUM(NSInteger, OpenAdInteractionType) {
    OpenAdInteractionTypeCustorm = 0,
    OpenAdInteractionTypeNO_INTERACTION = 1,  // pure ad display
    OpenAdInteractionTypeURL = 2,             // open the webpage using a browser
    OpenAdInteractionTypePage = 3,            // open the webpage within the app
    OpenAdInteractionTypeDownload = 4,        // download the app
    OpenAdInteractionTypePhone = 5,           // make a call
    OpenAdInteractionTypeMessage = 6,         // send messages
    OpenAdInteractionTypeEmail = 7,           // send email
    OpenAdInteractionTypeVideoAdDetail = 8,    // video ad details page
    OpenAdInteractionTypeMediationOthers  = 100 //聚合其他广告sdk返回的类型
};

typedef NS_ENUM(NSInteger, OpenAdNativeAdMode) {
    OpenAdNativeAdModeSmallImage = 2,
    OpenAdNativeAdModeLargeImage = 3,
    OpenAdNativeAdModeGroupImage = 4,
    OpenAdNativeVideoAdModeImage = 5, // video ad || rewarded video ad horizontal screen
    OpenAdNativeVideoAdModePortrait = 15, // rewarded video ad vertical screen
    OpenAdNativeAdModeImagePortrait = 16,
    OpenAdNativeAdModeSquareImage   = 33, //SquareImage
    OpenAdNativeAdModeSquareVideo   = 50, //SquareVideo
    OpenAdNativeAdModeUnionSplashVideo = 154, // Video splash
    OpenAdNativeAdModeLiveStream    = 166, // Live Stream Ad
    OpenAdNativeAdModeUnionVerticalImage = 173, // vertical picture
    OpenAdNativeAdModeUnionAtlas = 180, // atlas
    OpenAdNativeAdModeMediationUnknown = 1000 //聚合其他广告sdk未知
};
NS_ASSUME_NONNULL_BEGIN


//广告素材 各元素 存在为空的可能,接入方可添加非空判断,增加容错
@interface OpenAdMaterialMeta : NSObject

/// 广告交互类型
@property (nonatomic, assign) OpenAdInteractionType interactionType;

/// 媒体图片数组
@property (nonatomic, strong, nullable) NSArray<NSString *> *imageAry;

/// 广告 logo 图片
@property (nonatomic, copy, nullable) NSString *icon;

/// 广告 logo image
@property (nonatomic, strong, nullable) UIImage *iconImage;

/// 下载 app icon
@property (nonatomic, copy, nullable) NSString *downloadAppIcon;

/// 下载 app name
@property (nonatomic, copy, nullable) NSString *downloadAppName;

/// 广告标题
@property (nonatomic, copy, nullable) NSString *adTitle;

/// 广告副标题
@property (nonatomic, copy, nullable) NSString *adDescription;

/// 广告来源
@property (nonatomic, copy, nullable) NSString *aDsource;

///广告 字样图 图片
@property (nonatomic, copy, nullable) NSString *adLogoURLString;

/// CTA 文案
@property (nonatomic, copy, nullable) NSString *buttonText;

/// 广告样式类型
@property (nonatomic, assign) OpenAdNativeAdMode imageMode;

/// 评分
@property (nonatomic, assign) NSInteger score;

/// 评论数
@property (nonatomic, assign) NSInteger commentNum;

/// 下载 app 大小
@property (nonatomic, assign) NSInteger appSize;

/// 视频时长
@property (nonatomic, assign) NSInteger videoDuration;

/// 视频封面
@property (nonatomic, copy, nullable) NSString *videoCover;

/// 视频资源
@property (nonatomic, copy, nullable) NSString *videoUrl;

/// 媒体视图,三方 adn 提供,如没有媒体视图,则为 nil
@property (nonatomic, strong, nullable) OpenAdNativeVideoView *mediaView;

/// 视频宽
@property (nonatomic, assign) NSInteger videoResolutionWidth;

/// 视频高
@property (nonatomic, assign) NSInteger videoResolutionHeight;

/// 平台名称
@property (nonatomic, copy, nullable) NSString *adxName;



//以下字段为京东自渲染
/**
 @brief “京准通”logo
 @discussion 自渲染“京准通”logo
 logo imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoWidget;

/**
 @brief “京准通”logo文字
 @discussion 自渲染”京准通”logo文字
 logo text imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoTextWidget;

/**
 @brief 广告标识logo
 @discussion 自渲染广告标识logo
 logo ad imageView widget
*/
@property (strong, nonatomic, readonly, nullable) UIImageView *logoAdWidget;

/**
 @brief 京东logo
 @discussion 自渲染京东logo
 jd logo iamgeView widget
 */
@property (strong, nonatomic, readonly, nullable) UIImageView *jdLogoWidget;


@end

NS_ASSUME_NONNULL_END
