/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSDate, SBLockScreenTimerDialView, UILabel, _UILegibilityLabel;

@interface SBLockScreenTimerView : _ABAddressBookCopyLocalizedLabel
{
    NSDate *_endDate;
    SBLockScreenTimerDialView *_timerDial;
    UILabel *_layoutLabel;
    _UILegibilityLabel *_timerLabel;
}

+ (float)interItemSpacing;
+ (id)_timerFont;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)layoutSubviews;
- (float)baselineOffsetFromBottom;
- (void)setTimerHidden:(BOOL)fp8;
- (void)updateTimerLabel;
- (void)setEndDate:(id)fp8;
- (void)setLegibilitySettings:(id)fp8 textStrength:(float)fp12 dialStrength:(float)fp16;
- (id)_newTimerDialForSettings:(id)fp8 strength:(float)fp12;
- (id)_newLegibilityLabelForSettings:(id)fp8 strength:(float)fp12;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

