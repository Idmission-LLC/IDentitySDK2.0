//
//  UIImage+Glare.h
//  IDentitySDK
//
//  Created by Stefan Kaczmarek on 6/14/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (Glare)

+ (UIImage *)getBWImage:(UIImage *)originalImage;
+ (BOOL)isLightCorrect:(UIImage*)uiimage;

@end

NS_ASSUME_NONNULL_END
