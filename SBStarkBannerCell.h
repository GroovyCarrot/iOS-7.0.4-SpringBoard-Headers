/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBCollectionViewCell.h"

#import "SBUIBannerView-Protocol.h"

@class SBBannerContextView, UIView;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView>
{
    SBBannerContextView *_contextView;
    UIView *_darkeningOverlayView;
}

- (id)bannerContext;
- (void)prepareForReuse;
- (void)_didSetHighlighted:(BOOL)fp8;
- (void)noteDidDismiss;
- (void)noteWillDismissWithReason:(int)fp8;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setBannerContext:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

