/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAlertManager, SBLockScreenViewController, SBUIFullscreenAlertAdapter, UIView;

@interface SBUIAnimationFadeLockscreenToAlert : SBUIMainScreenAnimationController
{
    SBLockScreenViewController *_lockScreenViewController;
    SBAlertManager *_alertManager;
    SBUIFullscreenAlertAdapter *_toAlert;
    UIView *_cameraSnapshotView;
    BOOL _animatingFromCamera;
    BOOL _alertViewIsAnimatingItself;
    BOOL _alertIsTransparent;
    BOOL _finishedPrimaryFadeAnimation;
    BOOL _needsLockScreenAlphaRestoredOnCompletion;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)_alertViewFinishedAnimatingItself;
- (void)_fadeAnimationFinished;
- (void)_evaluateTotalAnimationCompletion;
- (void)_animationFinished;
- (double)animationDuration;
- (void)dealloc;
- (id)initWithLockScreenController:(id)fp8 toAlert:(id)fp12 alertManager:(id)fp16;

@end

