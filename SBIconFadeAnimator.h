/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIconAnimator.h"

@class UIView;

@interface SBIconFadeAnimator : SBIconAnimator
{
    UIView *_crossfadeView;
    BOOL _addedToWindow;
}

- (void)_applyAlphaForFraction:(float)fp8;
- (void)_animateToFraction:(float)fp8 afterDelay:(double)fp12 withSharedCompletion:(id)fp(null);
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)fp8;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithFolderController:(id)fp8 crossfadeView:(id)fp12;

@end
