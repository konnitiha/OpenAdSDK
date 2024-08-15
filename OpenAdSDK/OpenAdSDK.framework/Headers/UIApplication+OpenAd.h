//
//  UIWindow+Adv.h
//  BayesSDK
//
//  Created by OpenAd on 2020/1/9.
//  Copyright © 2020 fyl. All rights reserved.
//

#import <UIKit/UIKit.h>

#define OPENAD_FIX_CATEGORY_BUG(name) @interface OPENAD_FIX_CATEGORY_BUG_##name: NSObject @end \
                                  @implementation OPENAD_FIX_CATEGORY_BUG_##name @end
NS_ASSUME_NONNULL_BEGIN


@interface UIApplication (OpenAd)
// 获取当前的Window
- (nullable UIWindow *)openAd_getCurrentWindow;

@end



NS_ASSUME_NONNULL_END
