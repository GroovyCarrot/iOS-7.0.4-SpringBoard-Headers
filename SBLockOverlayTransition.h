/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockOverlayTransition : _ABAddressBookCopyLocalizedLabel
{
    SBLockOverlayContext *_from;
    SBLockOverlayContext *_to;
    SBLockScreenViewController *_lockScreenVC;
}

- (id)_requestForContext:(id)fp8;
- (void)_hideLockContent;
- (void)performTransitionAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)dealloc;
- (id)initFromOverlay:(id)fp8 toOverlay:(id)fp12 inside:(id)fp16;

@end
