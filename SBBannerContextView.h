/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBUIBannerView-Protocol.h"

@class SBBannerViewCallbackManager, SBUIBannerContext, UIImageView, UIView, UIView<SBUIBannerView>, _UIBackdropView;

@interface SBBannerContextView : _ABAddressBookCopyLocalizedLabel <SBUIBannerView>
{
    struct UIEdgeInsets _clippingInsets;
    UIView *_clippingView;
    SBUIBannerContext *_context;
    UIView<SBUIBannerView> *_contentView;
    SBBannerViewCallbackManager *_callbacks;
    SBBannerViewCallbackManager *_wrapperCallbacks;
    _UIBackdropView *_backdropView;
    UIImageView *_backgroundImageView;
    struct {
        unsigned int providesDefaultGrabberColor:1;
        unsigned int supportsGrabberColor:1;
    } _contentViewFlags;
}

+ (id)defaultGrabberColor;
- (id)bannerContext;
- (void)layoutSubviews;
- (struct CGRect)_frameInClippingViewForFrame:(struct CGRect)fp8;
- (void)noteDidDismissWithReason:(int)fp8;
- (void)noteWillDismissWithReason:(int)fp8;
- (void)noteDidAppear;
- (void)noteWillAppear;
- (void)setGrabberColor:(id)fp8;
- (id)grabberColor;
- (id)defaultGrabberColor;
- (void)setBannerContext:(id)fp8 withReplaceReason:(int)fp12;
- (struct CGRect)_contentFrame;
- (void)setBackgroundImage:(id)fp8;
- (id)backgroundImage;
- (id)backdrop;
- (void)setClippingInsets:(struct UIEdgeInsets)fp8;
- (struct UIEdgeInsets)clippingInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end
