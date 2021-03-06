/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBUIStarkScreenAnimationController.h"

@class SBAlert, UIView;

@interface SBUIStarkAnimationSlideDownApp : SBUIStarkScreenAnimationController
{
    UIView *_viewToAnimate;
    UIView *_activatingContextHostView;
    UIView *_deactivatingContextHostView;
    UIView *_deactivatingDimmingView;
    SBAlert *_alertImpersonator;
}

- (void)_cleanupAnimation;
- (void)_startAnimation;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithActivatingApp:(id)fp8 alertImpersonator:(id)fp12 deactivatingApp:(id)fp16 starkScreenController:(id)fp20;

@end

