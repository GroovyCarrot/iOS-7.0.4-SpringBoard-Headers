/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLiveIconImageView.h"

@class CALayer;

@interface SBClockApplicationIconImageView : SBLiveIconImageView
{
    CALayer *_seconds;
    CALayer *_minutes;
    CALayer *_hours;
    CALayer *_blackDot;
    CALayer *_redDot;
}

+ (void)_iconEditingStateChanged:(id)fp8;
+ (void)_handleTimeChange:(id)fp8;
+ (void)_timerFired:(id)fp8;
+ (void)initialize;
- (void)_timerFiredWithComponents:(id)fp8 flags:(unsigned int)fp12;
- (void)_updateUnanimated;
- (void)_updateUnanimatedWithComponents:(id)fp8;
- (void)dealloc;
- (void)_setAnimating:(BOOL)fp8;
- (void)updateAnimatingState;
- (id)_generateSquareContentsImage;
- (id)contentsImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)fp8;

@end

