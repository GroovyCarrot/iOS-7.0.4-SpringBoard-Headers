/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBIconView, SBIconViewMap;

@interface SBIconRotationContainer : _ABAddressBookCopyLocalizedLabel
{
    struct SBIconCoordinate _coordinate;
    SBIconViewMap *_viewMap;
    SBIconView *_startView;
    SBIconView *_endView;
    struct CGPoint _wallpaperRelativeImageCenter;
}

- (struct CGPoint)wallpaperRelativeImageCenter;
- (struct SBIconCoordinate)coordinate;
- (void)crossfadeWithDuration:(double)fp8;
- (void)prepareToCrossfade;
- (struct CGPoint)iconImageCenter;
- (void)setWallpaperRelativeImageCenter:(struct CGPoint)fp8;
- (id)endIcon;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 startIcon:(id)fp24 endIcon:(id)fp28 viewMap:(id)fp32 coordinate:(struct SBIconCoordinate)fp36;

@end

