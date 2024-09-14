//
//  OpenAdBaseAdapterBridge.h
//  OpenAdSDK
//
//  Created by fyl on 2024/9/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol OpenAdBaseAdapterBridge <NSObject>


/// 上报
/// - Parameters:
///   - adapter:  adapter
///   - data: 数据
- (void)reportMaterial:(id _Nonnull)adapter data:(id )data;

@end

NS_ASSUME_NONNULL_END
