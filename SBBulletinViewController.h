/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface SBBulletinViewController : _ABAddressBookCopyLocalizedLabel
{
    id <SBBulletinViewControllerDelegate> _delegate;
    NSMutableArray *_orderedSections;
    NSMutableDictionary *_sectionIDsToBulletins;
    NSMutableSet *_pendingReusableViewIDs;
    BOOL _tableViewNeedsReload;
    id _owedWillAppearBlock;
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int decidesHighlight:1;
        unsigned int interestedInSelection:1;
    } _bulletinViewControllerDelegateFlags;
}

+ (id)reusableViewIdentifierForInfo:(id)fp8;
- (id)delegate;
- (void)tableView:(id)fp8 didEndDisplayingCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (void)tableView:(id)fp8 willDisplayCell:(id)fp12 forRowAtIndexPath:(id)fp16;
- (float)tableView:(id)fp8 heightForHeaderInSection:(int)fp12;
- (id)tableView:(id)fp8 viewForHeaderInSection:(int)fp12;
- (float)tableView:(id)fp8 heightForRowAtIndexPath:(id)fp12;
- (void)tableView:(id)fp8 didSelectRowAtIndexPath:(id)fp12;
- (BOOL)tableView:(id)fp8 shouldHighlightRowAtIndexPath:(id)fp12;
- (id)tableView:(id)fp8 cellForRowAtIndexPath:(id)fp12;
- (int)tableView:(id)fp8 numberOfRowsInSection:(int)fp12;
- (int)numberOfSectionsInTableView:(id)fp8;
- (void)invalidateCachedLayoutData;
- (void)invalidateSectionAndRowViewHeights;
- (id)viewForBulletin:(id)fp8 inSection:(id)fp12;
- (id)indexPathForBulletin:(id)fp8 inSection:(id)fp12;
- (void)reloadBulletins:(id)fp8 inSection:(id)fp12;
- (void)replaceWithBulletin:(id)fp8 bulletin:(id)fp12 inSection:(id)fp16;
- (void)moveBulletin:(id)fp8 inSection:(id)fp12 beforeBulletin:(id)fp16 inSection:(id)fp20;
- (void)removeBulletin:(id)fp8 inSection:(id)fp12;
- (void)addBulletin:(id)fp8 inSection:(id)fp12;
- (void)insertBulletin:(id)fp8 beforeBulletin:(id)fp12 inSection:(id)fp16;
- (void)replaceWithSection:(id)fp8 section:(id)fp12;
- (void)reloadSections:(id)fp8;
- (void)moveSection:(id)fp8 beforeSection:(id)fp12;
- (void)removeSection:(id)fp8;
- (void)insertSection:(id)fp8 beforeSection:(id)fp12;
- (void)_performReplacementOperation:(id)fp8;
- (void)_performMoveOperation:(id)fp8;
- (void)_performRemovalOperation:(id)fp8;
- (void)_performInsertionOperation:(id)fp8;
- (BOOL)_replaceWithBulletin:(id)fp8 bulletin:(id)fp12 inSection:(id)fp16;
- (BOOL)_moveBulletin:(id)fp8 fromSection:(id)fp12 toIndex:(unsigned int)fp16 inSection:(id)fp20;
- (BOOL)_removeBulletin:(id)fp8 fromSection:(id)fp12;
- (BOOL)_insertBulletin:(id)fp8 atIndex:(unsigned int)fp12 inSection:(id)fp16;
- (void)_removeChildWidgetBulletinIfPossible:(id)fp8;
- (void)_addChildWidgetBulletinIfPossible:(id)fp8;
- (BOOL)_replaceWithSection:(id)fp8 section:(id)fp12;
- (BOOL)_moveSection:(id)fp8 toIndex:(unsigned int)fp12;
- (BOOL)_insertSection:(id)fp8 atIndex:(unsigned int)fp12;
- (BOOL)_removeSection:(id)fp8;
- (void)setTableViewFrame:(struct CGRect)fp8;
- (struct CGRect)tableViewFrame;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)_reloadOrInvalidateTableViewData;
- (void)_reloadTableViewDataIfNecessary;
- (void)setTableViewNeedsReload;
- (BOOL)widgetViewControllerEndAppearanceTransitionIfNecessary:(id)fp8;
- (BOOL)widgetViewController:(id)fp8 beginAppearanceTransitionIfNecessary:(BOOL)fp12 animated:(BOOL)fp16;
- (void)_invokeBlockWithAllVisibleWidgets:(id)fp(null);
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (id)_viewIfLoaded;
- (void)viewDidLoad;
- (void)_updateEnhancedContrastSettings:(id)fp8;
- (void)_registerOrQueueNewReusableViewIdentifierForInfo:(id)fp8;
- (void)setDelegate:(id)fp8;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

