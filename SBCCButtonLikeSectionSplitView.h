/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBControlCenterSectionView.h"

@class SBCCButtonLikeSectionView, SBControlCenterSeparatorView;

@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView
{
    SBControlCenterSeparatorView *_separatorView;
    float _separatorWidth;
    BOOL _leftHidden;
    BOOL _rightHidden;
    SBCCButtonLikeSectionView *_leftSection;
    SBCCButtonLikeSectionView *_rightSection;
}

- (id)rightSection;
- (id)leftSection;
- (void)layoutSubviews;
- (struct CGRect)_separatorFrame;
- (struct CGRect)_frameForSectionSlot:(int)fp8;
- (id)_viewForSectionSlot:(int)fp8;
- (void)_updateLabelParameters;
- (void)_updateSeparatorVisibility;
- (void)setRightSectionHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setLeftSectionHidden:(BOOL)fp8 animated:(BOOL)fp12;
- (void)_relayoutAnimated:(BOOL)fp8;
- (BOOL)_useLandscapeBehavior;
- (void)setRightSection:(id)fp8;
- (void)setLeftSection:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

