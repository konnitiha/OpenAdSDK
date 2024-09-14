//
//  OpenAdNativeVideoView.h
//  OpenAdSDK
//
//  Created by fyl on 2023/6/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//针对特定 adn 适配
@interface OpenAdNativeVideoView : UIView

@property(nonatomic,getter=isPlaying)BOOL playing;
- (void)play;
- (void)pause;
- (void)stop;

@end

NS_ASSUME_NONNULL_END
