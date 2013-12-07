/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray;

@interface SBModeControlManager : _ABAddressBookCopyLocalizedLabel
{
    NSArray *_views;
}

+ (id)_segmentedControlForUse:(int)fp8 graphicsQuaility:(int)fp12;
+ (void)_configureSegmentedControlForLabelUse:(id)fp8;
+ (void)_configureSegmentedControlForButtonUse:(id)fp8;
+ (void)_configureSegmentedControl:(id)fp8 forGraphicsQuaility:(int)fp12;
- (id)views;
- (void)setTintColor:(id)fp8 forUse:(int)fp12;
- (void)removeAllSegments;
- (void)insertSegmentWithTitle:(id)fp8 atIndex:(unsigned int)fp12 animated:(BOOL)fp16;
- (void)addTarget:(id)fp8 action:(SEL)fp12;
- (void)setSelectedSegmentIndex:(int)fp8;
- (int)selectedSegmentIndex;
- (unsigned int)numberOfSegments;
- (id)_segmentedControlForUse:(int)fp8;
- (void)setFrame:(struct CGRect)fp8;
- (void)dealloc;
- (id)initWithGraphicsQuality:(int)fp8;

@end

