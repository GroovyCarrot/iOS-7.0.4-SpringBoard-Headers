/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIMainScreenAnimationController.h"

@class UIView;

@interface SBUIStaticAnimationController : SBUIMainScreenAnimationController
{
    BOOL _relaunchExpected;
    BOOL _awaitingKeybagRefetch;
    BOOL _appWasActivating;
    UIView *_staticAppView;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (BOOL)_shouldDismissBanner;
- (void)_prepareAnimation;
- (BOOL)_animationShouldStart;
- (BOOL)_willAnimate;
- (id)app;
- (void)dealloc;
- (id)initWithApp:(id)fp8;

@end

