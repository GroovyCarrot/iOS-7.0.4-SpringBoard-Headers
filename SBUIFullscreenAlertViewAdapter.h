/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertViewAdapter.h"

@interface SBUIFullscreenAlertViewAdapter : SBAlertViewAdapter
{
    BOOL _revealedContentBeneathForDismiss;
    BOOL _animatingOut;
}

- (void)setAlert:(id)fp8;
- (void)setShouldAnimateIn:(BOOL)fp8;
- (void)dismiss;
- (void)updateSpringBoardInPreparationForTransparentDismiss;
- (void)viewAnimatedOut;
- (BOOL)isAnimatingOut;
- (BOOL)shouldAnimateIconsIn;
- (void)alertDisplayWillBecomeVisible;
- (BOOL)isReadyToBeRemovedFromView;
- (id)alert;

@end

