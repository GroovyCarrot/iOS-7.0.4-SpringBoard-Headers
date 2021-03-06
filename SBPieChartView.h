/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray;

@interface SBPieChartView : _ABAddressBookCopyLocalizedLabel
{
    NSArray *_slices;
    float _valueTotal;
    float _radius;
    struct CGPoint _center;
    float _defaultRotation;
}

- (void)_drawSlice:(id)fp8 atValue:(float)fp12;
- (void)_rotateContext;
- (void)_updateMetrics;
- (void)drawRect:(struct CGRect)fp8;
- (void)setSlices:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

