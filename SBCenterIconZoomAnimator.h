/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIconZoomAnimator.h"

#import "SBIconListLayoutDelegate-Protocol.h"

@class UIView;

@interface SBCenterIconZoomAnimator : SBIconZoomAnimator <SBIconListLayoutDelegate>
{
    UIView *_zoomView;
    float _iconZoomedZ;
    float _centerRow;
    float _centerCol;
    struct CGPoint _cameraPosition;
}

- (struct CGPoint)cameraPosition;
- (id)zoomView;
- (void)_calculateCentersAndCameraPosition;
- (id)_animationFactoryForDock;
- (id)_animationFactoryForIcon:(id)fp8;
- (void)_positionView:(id)fp8 forIcon:(id)fp12;
- (void)iconListViewLayoutInvalidated:(id)fp8;
- (void)iconListView:(id)fp8 wouldHaveMovedIcon:(id)fp12;
- (double)_iconZoomDelay;
- (void)_animateToFraction:(float)fp8 afterDelay:(double)fp12 withSharedCompletion:(id)fp(null);
- (unsigned int)_numberOfSignificantAnimations;
- (void)_cleanupAnimation;
- (void)_setAnimationFraction:(float)fp8;
- (void)_prepareAnimation;
- (void)dealloc;
- (id)initWithFolderController:(id)fp8;

@end

