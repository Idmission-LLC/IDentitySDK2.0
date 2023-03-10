//
//  RoiFingerInfo.h
//  AppItFramework
//
//  Created by Dipen Patel on 27/03/20.
//  Copyright © 2020 idmission solutions pvt ltd . All rights reserved.
//

#import <Foundation/Foundation.h>
#include <opencv2/opencv.hpp>
#include <vector>
#include <algorithm>
using namespace std;
using namespace cv;

@interface RoiFingerInfo : NSObject{
    
}

@property NSString *label;
@property CGRect fingerRectInFrame;
@property CGRect fingerRectInScreen;
@property float confidence;
@property float focus;
@property float startPosition;
@property(assign) cv::Mat roi;

-(id)initRoiFingerInfo:(NSString*)label fingerRectInFrame:(CGRect)fingerRectInFrame fingerRectInScreen:(CGRect)fingerRectInScreen confidence:(float)confidence focus:(float)focus startPosition:(float)startPosition roi:(cv::Mat)roi;

@end
