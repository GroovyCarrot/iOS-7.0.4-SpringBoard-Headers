/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBAppSliderIconControllerDelegate <NSObject>
- (void)sliderIconScrollerDidEndScrolling:(id)fp8;
- (unsigned int)sliderIconScroller:(id)fp8 settledIndexForNormalizedOffset:(inout float *)fp12 andXVelocity:(float)fp16;
- (void)sliderIconScrollerBeganPanning:(id)fp8;
- (void)sliderIconScroller:(id)fp8 activate:(id)fp12;
- (void)sliderIconScroller:(id)fp8 contentOffsetChanged:(float)fp12;
@end

