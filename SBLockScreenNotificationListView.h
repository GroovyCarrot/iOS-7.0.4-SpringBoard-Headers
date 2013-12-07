/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CADisplayLink, NSMutableDictionary, NSTimer, SBLockScreenNotificationTableView, UIView;

@interface SBLockScreenNotificationListView : _ABAddressBookCopyLocalizedLabel <UITableViewDataSource, UITableViewDelegate>
{
    SBLockScreenNotificationTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_tableFooterView;
    UIView *_topPocketView;
    UIView *_bottomPocketView;
    UIView *_containerView;
    id <SBLockScreenNotificationViewDelegate> _delegate;
    id <SBLockScreenNotificationModel> _model;
    CADisplayLink *_displayLink;
    float _currentTextAlpha;
    double _fadeStartTimestamp;
    NSTimer *_oldTextDisabledTimer;
    unsigned int _indexOfNewItem;
    BOOL _notificationCellIsScrollingToPasscode;
    float _notificationScrollDecelerationRatio;
    NSMutableDictionary *_heightForListItemCache;
    float _totalContentHeight;
    float _startingScrollOffset;
    float _lastDistanceScrolled;
    BOOL _updateCellsToVisibleOnPluginWillDisable;
}

- (BOOL)updateCellsToVisibleOnPluginWillDisable;
- (id)model;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)_cellTextFadeTimerFired:(id)fp8;
- (void)_textDisabledTimerFired:(id)fp8;
- (void)_clearTextFadeTimer;
- (void)_clearTextDisabledTimer;
- (void)_resetAllFadeTimers;
- (void)_disableExistingContent;
- (struct UIEdgeInsets)_contentViewInsets;
- (BOOL)_disableIdleTimer:(BOOL)fp8;
- (void)_pluginWillDisable:(id)fp8;
- (void)setUpdateCellsToVisibleOnPluginWillDisable:(BOOL)fp8;
- (void)updateForRemovalOfItems;
- (void)updateForRemovalOfItemAtIndex:(unsigned int)fp8 removedItem:(id)fp12;
- (void)_postludeForUpdateForRemoval:(BOOL)fp8;
- (void)updateForModificationOfItemWithOldIndex:(unsigned int)fp8 andNewIndex:(unsigned int)fp12;
- (void)updateForAdditionOfItemAtIndex:(unsigned int)fp8 allowHighlightOnInsert:(BOOL)fp12;
- (int)_rowAnimationForDelete;
- (int)_rowAnimationForInsert;
- (void)scrollViewDidScroll:(id)fp8;
- (void)scrollViewDidEndDragging:(id)fp8 willDecelerate:(BOOL)fp12;
- (void)scrollViewDidEndDecelerating:(id)fp8;
- (void)_scrollingEndedInScrollView:(id)fp8;
- (void)scrollViewWillBeginDragging:(id)fp8;
- (void)_setNonSelectedCellsToVisible:(BOOL)fp8 withSelectedCell:(id)fp12;
- (void)tableView:(id)fp8 didEndDisplayingCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 canEditRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (void)_setContentForTableCell:(id)fp8 withItem:(id)fp12 atIndexPath:(id)fp16;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (void)lockScreenDidEndScrollingOnPage:(int)fp8;
- (void)scrollToTopOfListAnimated:(BOOL)fp8;
- (void)setModel:(id)fp8;
- (void)setInScreenOffMode:(BOOL)fp8;
- (void)_updateTotalContentHeight;
- (void)_updateBottomShadowVisibility;
- (id)_tableFooterView;
- (id)_tableHeaderView;
- (void)layoutSubviews;
- (void)prepareForRemoval;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)_pocketLineColor;

@end
