/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBIconImageView.h"

#import "SBFolderIconObserver-Protocol.h"
#import "SBIconBlurryBackgroundViewObserver-Protocol.h"

@class NSMutableArray, SBFloatyFolderView, SBFolderIconBackgroundView, UIView, _SBIconGridWrapperView;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver>
{
    SBFolderIconBackgroundView *_backgroundView;
    UIView *_pageGridContainer;
    _SBIconGridWrapperView *_leftWrapperView;
    _SBIconGridWrapperView *_rightWrapperView;
    NSMutableArray *_pageElements;
    unsigned int _currentPageIndex;
    SBFloatyFolderView *_crossfadeFolderView;
    UIView *_crossfadeScalingView;
    BOOL _animating;
}

- (void)_showRightMinigrid;
- (void)_showLeftMinigrid;
- (void)_setPageElements:(id)fp8;
- (void)_setupGridViewsInDefaultConfiguration;
- (id)_currentPageElement;
- (id)_folderIcon;
- (struct CGSize)_interiorGridSizeClipRect;
- (struct CGSize)_interPageSpacing;
- (Class)_iconGridImageClass;
- (void)_performScrollingMovingToLeft:(BOOL)fp8 movingToRight:(BOOL)fp12 targetPageIndex:(unsigned int)fp16 targetPageScrollRow:(unsigned int)fp20 newLeftElement:(id)fp24 newRightElement:(id)fp28 animated:(BOOL)fp32;
- (void)_updateRasterization;
- (void)_setAnimating:(BOOL)fp8;
- (void)blurryBackgroundViewDidChangeWhetherBlurring:(id)fp8;
- (void)folderIcon:(id)fp8 didUpdateGridImage:(id)fp12 forListIndex:(unsigned int)fp16 forContainedIconImageUpdate:(id)fp20;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)setFloatyFolderCrossfadeFraction:(float)fp8;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)fp8 allowFolderInteraction:(BOOL)fp12;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)fp8;
- (void)setWallpaperRelativeCenter:(struct CGPoint)fp8;
- (void)setBackgroundScale:(float)fp8;
- (id)backgroundView;
- (void)setBackgroundAndIconGridImageAlpha:(float)fp8;
- (void)setIconGridImageAlpha:(float)fp8;
- (struct CGRect)frameForMiniIconAtIndexPath:(id)fp8;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned int)fp8;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned int)fp8;
- (unsigned int)lastVisibleMiniIconIndex;
- (unsigned int)centerVisibleMiniIconIndex;
- (unsigned int)firstVisibleMiniIconIndex;
- (unsigned int)visibleMiniIconListIndex;
- (unsigned int)visibleMiniIconCount;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)scrollToTopOfPage:(unsigned int)fp8 animated:(BOOL)fp12;
- (void)scrollToFirstGapAnimated:(BOOL)fp8;
- (void)scrollToTopOfFirstPageAnimated:(BOOL)fp8;
- (void)layoutSubviews;
- (id)snapshot;
- (void)prepareForReuse;
- (void)updateImageAnimated:(BOOL)fp8;
- (id)darkeningOverlayImage;
- (id)_generateSquareContentsImage;
- (id)contentsImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

