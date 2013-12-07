/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray, NSMutableArray, NSMutableSet, SBIcon, SBIconListModel, SBIconViewMap, UIView;

@interface SBIconListView : _ABAddressBookCopyLocalizedLabel
{
    SBIconListModel *_model;
    SBIconViewMap *_viewMap;
    int _orientation;
    float _statusBarHeight;
    SBIcon *_bouncedIcon;
    NSMutableArray *_removedIcons;
    NSArray *_rotationContainers;
    unsigned int _needsLayout:1;
    unsigned int _rotating:1;
    UIView *_fadeView;
    BOOL _purged;
    NSMutableSet *_notShownIconViews;
    BOOL _isEditing;
    id <SBIconListLayoutDelegate> _layoutDelegate;
    struct CGRect _wallpaperRelativeFrame;
}

+ (unsigned int)maxVisibleIcons;
+ (unsigned int)maxIcons;
+ (unsigned int)iconColumnsForInterfaceOrientation:(int)fp8;
+ (unsigned int)maxVisibleIconRowsInterfaceOrientation:(int)fp8;
+ (unsigned int)iconRowsForInterfaceOrientation:(int)fp8;
+ (int)rotationAnchor;
- (id)layoutDelegate;
- (struct CGRect)wallpaperRelativeFrame;
- (void)setStatusBarHeight:(float)fp8;
- (float)statusBarHeight;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (void)setPurged:(BOOL)fp8;
- (BOOL)purged;
- (void)setEditing:(BOOL)fp8;
- (BOOL)isEditing;
- (void)_sendLayoutDelegateLayoutInvalidated;
- (void)_sendLayoutDelegateWouldHaveMovedIcon:(id)fp8;
- (void)cleanupAfterRotation;
- (void)performRotationWithDuration:(double)fp8;
- (void)prepareToRotateToInterfaceOrientation:(int)fp8;
- (unsigned int)rowAtPoint:(struct CGPoint)fp8;
- (unsigned int)columnAtPoint:(struct CGPoint)fp8;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)fp8;
- (float)verticalIconPadding;
- (float)horizontalIconPadding;
- (float)horizontalBumpForColumn:(unsigned int)fp8;
- (float)sideIconInset;
- (float)bottomIconInset;
- (float)topIconInset;
- (id)bouncedIcon;
- (void)setBouncedIcon:(id)fp8;
- (BOOL)isDock;
- (void)enumerateIconViewsUsingBlock:(id)fp(null);
- (void)enumerateIconsUsingBlock:(id)fp(null);
- (void)_updateEditingStateForIcons:(id)fp8 animated:(BOOL)fp12;
- (void)updateEditingStateAnimated:(BOOL)fp8;
- (void)showIconImagesFromColumn:(int)fp8 toColumn:(int)fp12 totalColumns:(int)fp16 allowAnimations:(BOOL)fp20;
- (void)showAllIcons;
- (id)iconAtPoint:(struct CGPoint)fp8 index:(unsigned int *)fp16 proposedOrder:(int *)fp20 grabbedIcon:(id)fp24;
- (id)iconAtPoint:(struct CGPoint)fp8 index:(unsigned int *)fp16;
- (void)layoutIconsIfNeeded:(double)fp8 domino:(BOOL)fp16;
- (void)layoutIconsNow;
- (void)setIconsNeedLayout;
- (void)setFrame:(struct CGRect)fp8;
- (unsigned int)indexOfIcon:(id)fp8;
- (struct SBIconCoordinate)coordinateForIconAtIndex:(unsigned int)fp8;
- (struct SBIconCoordinate)coordinateForIcon:(id)fp8;
- (id)viewForIcon:(id)fp8;
- (struct CGPoint)centerForIconCoordinate:(struct SBIconCoordinate)fp8;
- (struct CGPoint)centerForIcon:(id)fp8;
- (struct CGPoint)originForIcon:(id)fp8;
- (struct CGPoint)originForIconAtIndex:(unsigned int)fp8;
- (struct CGSize)defaultIconSize;
- (void)removeAllIconAnimations;
- (void)setAlphaForAllIcons:(float)fp8;
- (void)removeIcon:(id)fp8;
- (void)removeIconAtIndex:(unsigned int)fp8;
- (id)removedIcons;
- (id)insertIcon:(id)fp8 atIndex:(unsigned int)fp12 moveNow:(BOOL)fp16;
- (id)insertIcon:(id)fp8 atIndex:(unsigned int)fp12 moveNow:(BOOL)fp16 pop:(BOOL)fp20;
- (id)placeIcon:(id)fp8 atIndex:(unsigned int)fp12 moveNow:(BOOL)fp16 pop:(BOOL)fp20;
- (void)_layoutIcon:(id)fp8 atIndex:(unsigned int)fp12 createViewNow:(BOOL)fp16 pop:(BOOL)fp20;
- (void)_popIconView:(id)fp8;
- (unsigned int)firstFreeSlotOrLastSlotIndexForType:(int)fp8;
- (unsigned int)firstFreeSlotOrLastSlotIndex;
- (unsigned int)firstFreeSlotIndexForType:(int)fp8;
- (unsigned int)firstFreeSlotIndex;
- (BOOL)containsIcon:(id)fp8;
- (BOOL)isFull;
- (BOOL)isEmpty;
- (id)visibleIcons;
- (id)icons;
- (BOOL)compactIcons:(BOOL)fp8;
- (unsigned int)rowForIcon:(id)fp8;
- (id)description;
- (struct SBIconCoordinate)iconCoordinateForIndex:(unsigned int)fp8 forOrientation:(int)fp12;
- (unsigned int)indexForCoordinate:(struct SBIconCoordinate)fp8 forOrientation:(int)fp16;
- (int)iconLocation;
- (unsigned int)iconRowsForSpacingCalculation;
- (unsigned int)iconsInRowForSpacingCalculation;
- (unsigned int)iconColumnsForCurrentOrientation;
- (unsigned int)iconRowsForCurrentOrientation;
- (struct CGPoint)_wallpaperRelativeIconCenterForIconView:(id)fp8;
- (struct CGPoint)_wallpaperRelativeIconCenterForIconImageCenter:(struct CGPoint)fp8;
- (void)setWallpaperRelativeFrame:(struct CGRect)fp8;
- (void)setLayoutDelegate:(id)fp8;
- (Class)baseIconViewClass;
- (id)viewMap;
- (id)model;
- (void)setModel:(id)fp8;
- (void)dealloc;
- (id)initWithModel:(id)fp8 orientation:(int)fp12 viewMap:(id)fp16;
- (id)init;
- (Class)modelClass;

@end

