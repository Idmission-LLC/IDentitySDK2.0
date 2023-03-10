//
//  Header.h
//  appit-ios
//
//  Created by Pranjal Lamba on 07/11/17.
//  Copyright © 2017 IDMission. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface VideoCaptureFingerprintViewController : UIViewController<AVCaptureVideoDataOutputSampleBufferDelegate>
{
    
}

@property (nonatomic, readonly) AVCaptureSession *captureSession;
@property (nonatomic, readonly) AVCaptureDevice *captureDevice;
@property (nonatomic, readonly) AVCaptureVideoDataOutput *videoOutput;
@property (nonatomic, readonly) AVCaptureVideoPreviewLayer *videoPreviewLayer;
@property (nonatomic, readonly) AVCaptureStillImageOutput *avCaptureStillImageOutput;

@property (nonatomic, assign) int camera;
@property (nonatomic, assign) NSString *qualityPreset;
@property (nonatomic, assign) BOOL captureGrayscale;

@property (nonatomic, assign) BOOL showDebugInfo;
@property (nonatomic, assign) BOOL torchOn;
@property (nonatomic, assign) BOOL drawMatOnPreview;
@property (nonatomic, assign) BOOL landscapeMode;
@property (nonatomic, assign) BOOL processHighDefinitionImage;


- (CGAffineTransform)affineTransformForVideoFrame:(CGRect)videoFrame orientation:(AVCaptureVideoOrientation)videoOrientation;

@end
