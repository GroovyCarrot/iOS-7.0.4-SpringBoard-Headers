/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBBulletinViewControllerDelegate-Protocol.h"
#import "SBNotificationCenterWidgetHost-Protocol.h"
#import "SBSizeObservingViewDelegate-Protocol.h"
#import "SBWidgetViewControllerHostDelegate-Protocol.h"

@class BBObserver, NSArray, NSMutableArray, NSMutableDictionary, SBBulletinViewController;

@interface SBBulletinObserverViewController : _ABAddressBookCopyLocalizedLabel <SBSizeObservingViewDelegate, BBObserverDelegate, SBBulletinViewControllerDelegate, SBWidgetViewControllerHostDelegate, SBNotificationCenterWidgetHost>
{
    BBObserver *_observer;
    id _delegate;
    id <SBWidgetViewControllerHostDelegate> _widgetDelegate;
    NSMutableArray *_requestQueue;
    NSMutableDictionary *_enabledSectionInfosByID;
    NSMutableArray *_visibleSectionIDs;
    NSMutableDictionary *_bulletinIDsByFeed;
    SBBulletinViewController *_bulletinViewController;
    int _sectionOrderRule;
    int _supportedCategory;
    NSArray *_sectionOrder;
    NSMutableArray *_makeshiftSectionOrder;
    int _requestHandlingDisabledCount;
    struct {
        unsigned int isServerConnected:1;
        unsigned int isViewVisible:1;
        unsigned int isRePushingUpdates:1;
        unsigned int scrollsToTop:1;
        unsigned int isLayoutValid:1;
    } _bulletinObserverViewControllerFlags;
}

+ (id)allCategories;
- (void)setWidgetDelegate:(id)fp8;
- (id)widgetDelegate;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)bulletinViewController;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)_invokeBlockWithAllWidgets:(id)fp(null);
- (void)widget:(id)fp8 didUpdatePreferredSize:(struct CGSize)fp12;
- (void)widget:(id)fp8 requestsPresentationOfViewController:(id)fp12 presentationStyle:(int)fp16 context:(id)fp20 completion:(id)fp(null);
- (void)widget:(id)fp8 requestsLaunchOfURL:(id)fp12;
- (void)observer:(id)fp8 noteServerConnectionStateChanged:(BOOL)fp12;
- (void)observer:(id)fp8 noteInvalidatedBulletinIDs:(id)fp12;
- (struct CGSize)observer:(id)fp8 composedAttachmentSizeForType:(int)fp12 thumbnailWidth:(float)fp16 height:(float)fp20 key:(id)fp24;
- (id)observer:(id)fp8 composedAttachmentImageForType:(int)fp12 thumbnailData:(id)fp16 key:(id)fp20;
- (id)observer:(id)fp8 thumbnailSizeConstraintsForAttachmentType:(int)fp12;
- (BOOL)observerShouldFetchAttachmentSizeBeforeBulletinDelivery:(id)fp8;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)fp8;
- (void)observer:(id)fp8 noteSectionParametersChanged:(id)fp12 forSectionID:(id)fp16;
- (void)observer:(id)fp8 updateSectionInfo:(id)fp12 inCategory:(int)fp16;
- (void)observer:(id)fp8 updateSectionOrder:(id)fp12 forCategory:(int)fp16;
- (void)observer:(id)fp8 updateSectionOrderRule:(int)fp12;
- (void)observer:(id)fp8 removeBulletin:(id)fp12;
- (void)observer:(id)fp8 modifyBulletin:(id)fp12 forFeed:(unsigned int)fp16;
- (void)observer:(id)fp8 addBulletin:(id)fp12 forFeed:(unsigned int)fp16;
- (void)_clearQueues;
- (void)_enqueueInQueue:(id)fp8 orProcessRequest:(id)fp(null);
- (BOOL)_canEnqueueRequestsInQueue:(id)fp8;
- (void)_dequeueAndProcessItemsInQueues;
- (BOOL)_dequeueAndProcessNextItemInQueues;
- (BOOL)_dequeueAndProcessNextItemInQueue:(id)fp8;
- (BOOL)_canProcessRequestsInQueue:(id)fp8;
- (BOOL)_isServerConnected;
- (void)_updateSection:(id)fp8 forCategory:(int)fp12;
- (void)_setSectionOrder:(id)fp8 forCategory:(int)fp12;
- (void)_setSectionOrderRule:(int)fp8;
- (void)_sortAndCommitReloadOfSectionsInCategory:(int)fp8;
- (void)sortVisibleSectionsForCategory:(int)fp8;
- (void)clearSection:(id)fp8;
- (void)removeAndDisableSection:(id)fp8;
- (void)removeSection:(id)fp8;
- (void)_addSection:(id)fp8 toCategory:(int)fp12 widget:(id)fp16;
- (void)_setSection:(id)fp8 enabled:(BOOL)fp12;
- (void)_loadSection:(id)fp8;
- (void)_insertSectionIfNecessary:(id)fp8 commit:(BOOL)fp12;
- (void)_updateMakeshiftSectionOrderIfNecessary:(id)fp8;
- (id)_bulletinAfterBulletin:(id)fp8 inSection:(id)fp12;
- (id)firstSection;
- (id)sectionAfterSection:(id)fp8;
- (int)supportedCategory;
- (id)sectionWithIdentifier:(id)fp8;
- (id)_enabledSectionWithIdentifier:(id)fp8;
- (unsigned int)indexOfSectionWithIdentifier:(id)fp8;
- (id)sectionIdentifierAtIndex:(unsigned int)fp8;
- (unsigned int)_numberOfVisibleSections;
- (unsigned int)indexOfBulletin:(id)fp8 inSection:(id)fp12;
- (id)_bulletinWithIdentifier:(id)fp8 inSection:(id)fp12;
- (id)bulletinAtIndex:(unsigned int)fp8 inSection:(id)fp12;
- (unsigned int)_numberOfBulletinsInSection:(id)fp8;
- (void)replaceBulletin:(id)fp8 inSection:(id)fp12;
- (void)removeBulletin:(id)fp8 fromSection:(id)fp12;
- (void)addBulletin:(id)fp8 toSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)_setSection:(id)fp8 visible:(BOOL)fp12;
- (BOOL)_isSectionVisible:(id)fp8;
- (BOOL)_isBulletin:(id)fp8 associatedWithSection:(id)fp12;
- (BOOL)_isBulletin:(id)fp8 associatedWithSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)_disassociateBulletin:(id)fp8 fromSection:(id)fp12;
- (void)willDisassociateBulletin:(id)fp8 fromSection:(id)fp12;
- (id)_reassociateBulletin:(id)fp8 withSection:(id)fp12;
- (void)_associateBulletin:(id)fp8 withSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)didAssociateBulletin:(id)fp8 withSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)willAssociateBulletin:(id)fp8 withSection:(id)fp12 forFeed:(unsigned int)fp16;
- (unsigned int)_feedsForBulletinID:(id)fp8;
- (void)_removeBulletinIDFromAllFeeds:(id)fp8;
- (void)_addBulletinID:(id)fp8 toSetForFeeds:(unsigned int)fp12;
- (void)_addBulletinID:(id)fp8 toSetForFeed:(unsigned int)fp12;
- (id)infoForSection:(id)fp8;
- (id)infoForWidgetSection:(id)fp8;
- (id)infoForBulletinSection:(id)fp8;
- (id)infoForWidget:(id)fp8 inSection:(id)fp12;
- (id)infoForBulletin:(id)fp8 inSection:(id)fp12;
- (id)_widgetForSection:(id)fp8 inCategory:(int)fp12;
- (int)widgetIdiomForCategory:(int)fp8;
- (void)pushUpdatesAgainForFeeds:(unsigned int)fp8;
- (void)pushUpdatesAgainForSectionWithIdentifier:(id)fp8 feeds:(unsigned int)fp12;
- (BOOL)isRePushingUpdates;
- (void)updateSection:(id)fp8 withParameters:(id)fp12;
- (void)updateSection:(id)fp8 withInfo:(id)fp12;
- (void)commitMoveOfBulletin:(id)fp8 inSection:(id)fp12 beforeBulletin:(id)fp16 inSection:(id)fp20;
- (void)commitReplacementWithBulletin:(id)fp8 ofBulletin:(id)fp12 inSection:(id)fp16;
- (void)commitRemovalOfBulletin:(id)fp8 fromSection:(id)fp12;
- (void)commitInsertionOfBulletin:(id)fp8 beforeBulletin:(id)fp12 inSection:(id)fp16 forFeed:(unsigned int)fp20;
- (void)commitReloadOfSections:(id)fp8;
- (void)commitReplacementWithSection:(id)fp8 ofSection:(id)fp12;
- (void)commitMoveOfSection:(id)fp8 beforeSection:(id)fp12;
- (void)commitRemovalOfSection:(id)fp8;
- (void)commitInsertionOfSection:(id)fp8 beforeSection:(id)fp12;
- (BOOL)bulletinViewController:(id)fp8 didSelectBulletin:(id)fp12 inSection:(id)fp16;
- (BOOL)bulletinViewController:(id)fp8 shouldHighlightBulletin:(id)fp12 inSection:(id)fp16;
- (int)bulletinViewController:(id)fp8 replacementAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (int)bulletinViewController:(id)fp8 removalAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (int)bulletinViewController:(id)fp8 insertionAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (void)viewWillLayoutSubviews;
- (void)sizeObservingView:(id)fp8 didChangeSize:(struct CGSize)fp12;
- (void)invalidateContentLayout;
- (struct UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)fp8;
- (int)layoutMode;
- (void)viewDidLoad;
- (void)loadView;
- (void)_insertBulletinViewControllerView;
- (int)sectionOrderRule;
- (void)setScrollsToTop:(BOOL)fp8;
- (BOOL)scrollsToTop;
- (void)setRequestHandlingEnabled:(BOOL)fp8;
- (BOOL)isRequestHandlingEnabled;
- (id)observer;
- (void)dealloc;
- (id)initWithObserverFeed:(unsigned int)fp8;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

