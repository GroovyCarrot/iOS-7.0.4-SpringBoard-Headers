/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, SBFakeStatusBarView, SBLockScreenViewControllerBase, UIView;

@interface SBLockScreenClippedSlideController : _ABAddressBookCopyLocalizedLabel
{
    SBLockScreenViewControllerBase *_lockscreenVC;
    UIView *_clippingView;
    UIView *_viewToClip;
    UIView *_statusBarContainer;
    BOOL _wantsFakeStatusBar;
    BOOL _shouldSlideLockScreenView;
    BOOL _cleanupManually;
    BOOL _needsCleanup;
    BOOL _hidesSpringBoardStatusBarInitially;
    SBFakeStatusBarView *_fakeStatusBar;
    SBDisableAppStatusBarAlphaChangesAssertion *_statusBarAssertion;
}

- (void)setHidesSpringBoardStatusBarInitially:(BOOL)fp8;
- (BOOL)hidesSpringBoardStatusBarInitially;
- (void)setShouldSlideLockScreenView:(BOOL)fp8;
- (BOOL)shouldSlideLockScreenView;
- (void)setWantsFakeStatusBar:(BOOL)fp8;
- (BOOL)wantsFakeStatusBar;
- (void)setCleanupManually:(BOOL)fp8;
- (BOOL)cleanupManually;
- (id)viewToClip;
- (void)_cleanup;
- (void)_setupAndAddFakeStatusBarIfNecessary;
- (void)cleanupIfNecessary;
- (void)performTransition:(int)fp8 duration:(double)fp12 delay:(double)fp20 completion:(id)fp(null);
- (void)performTransition:(int)fp8 withAnimator:(id)fp(null);
- (id)_completionForTransition:(SEL)fp4;
- (id)_stepperForTransition:(SEL)fp4;
- (void)setViewToClip:(id)fp8;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)fp8;

@end
