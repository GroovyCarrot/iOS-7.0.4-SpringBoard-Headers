/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIAnimationAlertToPhoneBase.h"

@class SBDisableAppStatusBarAlphaChangesAssertion, UIView;

@interface SBUIAnimationFadeAlertToPhone : SBUIAnimationAlertToPhoneBase
{
    SBDisableAppStatusBarAlphaChangesAssertion *_disableStatusBarAlphaChangeAssertion;
    int _launchingOrientation;
    UIView *_fakeStatusBarViewContainer;
    BOOL _appIsTranslucent;
}

- (void)_removeFakeStatusBarIfNecessary;
- (void)_showFakeStatusBarIfNecessary;
- (void)_setupFakeStatusBarIfNecessary;
- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;

@end

