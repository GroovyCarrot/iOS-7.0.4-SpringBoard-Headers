/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, SBLockScreenBounceAnimator, SBLockScreenView, UIView, _UIDynamicValueAnimation;

@interface SBLockScreenSlideUpController : _ABAddressBookCopyLocalizedLabel
{
    BOOL _isInScreenOffMode;
    UIView *_slidingStatusBarView;
    SBLockScreenView *_lockScreenView;
    SBLockScreenBounceAnimator *_bounceAnimator;
    _UIDynamicValueAnimation *_dynamicAnimation;
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAssertion;
}

+ (id)lockScreenViewFakeStatusBar;
- (void)setDisableStatusBarAssertion:(id)fp8;
- (id)disableStatusBarAssertion;
- (id)bounceAnimator;
- (id)_newDynamicAnimationForGestureSucceeded:(BOOL)fp8 targetValue:(double)fp12 withInitialVelocity:(double)fp20;
- (id)_newBounceAnimatorWithGrabberView:(id)fp8;
- (void)abortDynamicAnimationForScreenOff;
- (void)setInScreenOffMode:(BOOL)fp8;
- (void)hideSlidingStatusBar;
- (void)finalizeGesture;
- (void)cleanupFromGesture;
- (void)prepareForSlideUpAnimation;
- (void)translateSlidingViewByY:(float)fp8;
- (void)gestureDidEnd:(BOOL)fp8;
- (void)gestureWillEndWithVelocity:(float)fp8;
- (void)setGrabberOnLockScreen:(id)fp8;
- (id)grabberView;
- (void)dealloc;
- (void)setLockScreenView:(id)fp8;
- (id)lockScreenView;

@end

