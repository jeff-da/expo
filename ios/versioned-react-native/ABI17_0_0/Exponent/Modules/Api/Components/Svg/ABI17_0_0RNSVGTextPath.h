/**
 * Copyright (c) 2015-present, Horcrux.
 * All rights reserved.
 *
 * This source code is licensed under the MIT-style license found in the
 * LICENSE file in the root directory of this source tree.
 */

#import <Foundation/Foundation.h>
#import <CoreText/CoreText.h>
#import "ABI17_0_0RNSVGText.h"
#import "ABI17_0_0RNSVGBezierTransformer.h"

@interface ABI17_0_0RNSVGTextPath : ABI17_0_0RNSVGText

@property (nonatomic, strong) NSString *href;
@property (nonatomic, strong) NSString *startOffset;

- (ABI17_0_0RNSVGBezierTransformer *)getBezierTransformer;

@end
