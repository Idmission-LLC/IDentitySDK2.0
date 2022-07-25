//
//  UIImage+Rotation.h
//  IDentitySample
//
//  Created by Stefan Kaczmarek on 9/18/21.
//

#import <UIKit/UIKit.h>

// TODO: re-implement in Swift

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Rotation)

- (nullable UIImage *)rotatingWithImageOrientation:(UIImageOrientation)orientation;

@end

NS_ASSUME_NONNULL_END
