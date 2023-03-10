//
//  FingerDetectionLayerView.h
//  AppItFramework
//
//  Created by MCB-Air-036 on 22/03/20.
//  Copyright © 2020 idmission solutions pvt ltd . All rights reserved.
//

#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface FingerDetectionLayerView : UIView {
    int previewLayer_FingerSize;
}

@property(readwrite) BOOL captureLeftHand;
@property(nonatomic) BOOL isDebugEnable;
@property(readwrite) UIColor *backgroundColor;
@property(readwrite) UIColor *FingerlayerStrokColor;
@property(nonatomic) NSArray *roiFingerInfos;
@property(nonatomic) CGRect fingerAreaRect;

-(id)initWithFrame:(CGRect)frame fingerLayerCount:(int)finger_Layer_Count backGroundColor:(UIColor *)backGroundColor backGroundColorAlpha:(CGFloat)backGroundColorAlpha isDebugEnable:(BOOL)isDebugEnable;
-(void)setRoiFingerInfos:(NSArray*)RoiFingerInfos;
-(CGRect)getFingerAreaRect;

@end

NS_ASSUME_NONNULL_END
