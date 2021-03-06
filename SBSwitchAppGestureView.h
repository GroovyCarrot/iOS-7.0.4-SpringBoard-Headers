/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBApplication, SBStretchTransformer, UIView;

@interface SBSwitchAppGestureView : _ABAddressBookCopyLocalizedLabel
{
    int m_orientation;
    SBApplication *m_startingApp;
    SBApplication *m_endingApp;
    SBApplication *m_leftwardApp;
    SBApplication *m_rightwardApp;
    int m_startingViewOrientation;
    int m_leftwardViewOrientation;
    int m_rightwardViewOrientation;
    UIView *m_startingView;
    UIView *m_leftwardView;
    UIView *m_rightwardView;
    float m_pageWidth;
    float m_percentage;
    float m_contentOffset;
    SBStretchTransformer *m_stretchTransformer;
    BOOL m_finishingPaging;
    BOOL m_underflowing;
    BOOL m_overflowing;
    id m_completion;
}

- (void)setCompletion:(id)fp(null);
- (id)completion;
- (void)setOverflowing:(BOOL)fp8;
- (BOOL)overflowing;
- (void)setUnderflowing:(BOOL)fp8;
- (BOOL)underflowing;
- (void)setStretchTransformer:(id)fp8;
- (id)stretchTransformer;
- (void)setContentOffset:(float)fp8;
- (float)contentOffset;
- (void)setPercentage:(float)fp8;
- (float)percentage;
- (void)setPageWidth:(float)fp8;
- (float)pageWidth;
- (void)setRightwardViewOrientation:(int)fp8;
- (int)rightwardViewOrientation;
- (void)setLeftwardViewOrientation:(int)fp8;
- (int)leftwardViewOrientation;
- (void)setStartingViewOrientation:(int)fp8;
- (int)startingViewOrientation;
- (void)setRightwardView:(id)fp8;
- (id)rightwardView;
- (void)setLeftwardView:(id)fp8;
- (id)leftwardView;
- (void)setStartingView:(id)fp8;
- (id)startingView;
- (void)setRightwardApp:(id)fp8;
- (id)rightwardApp;
- (void)setLeftwardApp:(id)fp8;
- (id)leftwardApp;
- (void)setEndingApp:(id)fp8;
- (id)endingApp;
- (void)setStartingApp:(id)fp8;
- (id)startingApp;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (BOOL)pagingRightward;
- (BOOL)pagingLeftward;
- (BOOL)isPagingOverflowPercentage:(float)fp8;
- (BOOL)isPagingUnderflowPercentage:(float)fp8;
- (void)stretchTransformerAnimationDidStop:(BOOL)fp8;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)moveToContentOffset:(float)fp8 percentage:(float)fp12 animated:(BOOL)fp16;
- (void)moveToApp:(id)fp8 animated:(BOOL)fp12;
- (void)moveToApp:(id)fp8;
- (float)opacityForPercentage:(float)fp8;
- (float)scaleForPercentage:(float)fp8;
- (float)percentageForApp:(id)fp8;
- (float)contentOffsetForApp:(id)fp8;
- (void)finishBackwardToStartWithCompletion:(id)fp(null);
- (void)finishForwardToEndWithPercentage:(float)fp8 completion:(id)fp(null);
- (void)updatePaging:(float)fp8;
- (void)beginPaging;
- (id)viewForApp:(id)fp8;
- (void)transformGestureViewContainer:(id)fp8;
- (void)dealloc;
- (id)initWithInterfaceOrientation:(int)fp8 startingApp:(id)fp12 leftwardApp:(id)fp16 rightwardApp:(id)fp20;

@end

