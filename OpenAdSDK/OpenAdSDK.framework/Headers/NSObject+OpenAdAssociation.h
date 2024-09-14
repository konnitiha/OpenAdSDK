//
//  NSObject+OpenAdAssociation.h
//  OpenAdSDK
//
//  Created by fyl on 2023/5/15.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface NSObject (OpenAdAssociation)

- (void)openAd_setAssociatedObject:(id)object forKey:(NSString *)key;
- (id)openAd_associatedObjectForKey:(NSString *)key;

@end

NS_ASSUME_NONNULL_END
