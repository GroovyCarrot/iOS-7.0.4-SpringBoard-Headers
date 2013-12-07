/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBControlCenterObserver-Protocol.h"

@class SBControlCenterContentView, _UIBackdropView;

@interface SBControlCenterContentContainerView : _ABAddressBookCopyLocalizedLabel <SBControlCenterObserver>
{
    _UIBackdropView *_backdropView;
    SBControlCenterContentView *_contentView;
    float _contentHeight;
}

- (void)setContentHeight:(float)fp8;
- (float)contentHeight;
- (void)setContentView:(id)fp8;
- (id)contentView;
- (void)setBackdropView:(id)fp8;
- (id)backdropView;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

