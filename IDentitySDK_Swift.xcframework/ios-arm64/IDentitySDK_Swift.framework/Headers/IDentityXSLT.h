//
//  IDentityXSLT.h
//  IDentitySample
//
//  Created by Stefan Kaczmarek on 9/6/21.
//

// derived from https://thedistance.co.uk/ios/xslt-on-ios/

#import <Foundation/Foundation.h>

#import "xsltInternals.h"
#import "transform.h"
#import "xsltutils.h"

NS_ASSUME_NONNULL_BEGIN

@interface IDentityXSLT : NSObject

+ (NSString *) transform:(NSString *)xml xsl:(NSString *)xsl;
+ (BOOL)isStyleSheetValid:(NSString *)xsl;

@end

NS_ASSUME_NONNULL_END
