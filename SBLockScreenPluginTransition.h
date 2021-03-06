/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBAwayViewPluginController, SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockScreenPluginTransition : _ABAddressBookCopyLocalizedLabel
{
    SBAwayViewPluginController *_fromController;
    SBAwayViewPluginController *_toController;
    SBLockScreenViewController *_lockScreenViewController;
    SBLockOverlayContext *_fromOverlay;
    SBLockOverlayContext *_toOverlay;
}

- (id)toOverlay;
- (id)toController;
- (id)fromOverlay;
- (id)fromController;
- (id)lockScreenViewController;
- (void)_addToView;
- (void)_removeFromView;
- (void)_removeViewFromHierarchy:(id)fp8;
- (void)beginTransition;
- (void)dealloc;
- (id)initWithContext:(id)fp8;

@end

