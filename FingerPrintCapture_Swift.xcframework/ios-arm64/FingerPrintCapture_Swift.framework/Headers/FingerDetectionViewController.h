//
//  FingerDetectionViewController.h
//  AppItFramework
//
//  Created by Dipen Patel on 18/07/19.
//  Copyright © 2019 idmission solutions pvt ltd . All rights reserved.
//

#import <UIKit/UIKit.h>
#import "VideoCaptureFingerprintViewController.h"

@interface FingerDetectionViewController : VideoCaptureFingerprintViewController

@property(nonatomic, strong) NSString *responseStatus;
@property(nonatomic, strong)id delegate;
@property(nonatomic) NSMutableDictionary *resultDictionary;
@property(nonatomic) NSString *moveCloser, *moveAway, *incorrectHand, *holdSteady, *capturingDetail, *fingerTooClose, *fingerTooFar;
@property(nonatomic) NSInteger minIndexThrshold, minMiddleThrshold, minRingThrshold, minBabyThrshold;
@property(nonatomic) NSInteger maxIndexThrshold, maxMiddleThrshold, maxRingThrshold, maxBabyThrshold;
@property(nonatomic) float cameraZoom;
@property(nonatomic) BOOL isCaptureLeftHand, isDebugEnabled;
@property(nonatomic) BOOL captureIndexFinger, captureMiddleFinger, captureRingFinger, captureBabyFinger;
@property(nonatomic) BOOL keepIndexFinger, keepMiddleFinger, keepRingFinger, keepBaby;
    
@end
