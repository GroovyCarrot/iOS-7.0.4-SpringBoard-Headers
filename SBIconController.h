/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "BBObserverDelegate-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "SBApplicationRestrictionObserver-Protocol.h"
#import "SBFolderControllerDelegate-Protocol.h"
#import "SBIconModelApplicationDataSource-Protocol.h"
#import "SBIconModelDelegate-Protocol.h"
#import "SBIconViewDelegate-Protocol.h"
#import "SBIconViewMapDelegate-Protocol.h"
#import "SBSearchGestureObserver-Protocol.h"

@class BBObserver, NSIndexPath, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>, NSSet, NSTimer, SBFolder, SBIcon, SBIconColorSettings, SBIconContentView, SBIconModel, SBLeafIcon, SBRootFolderController, UITouch, _UILegibilitySettings;

@interface SBIconController : _ABAddressBookCopyLocalizedLabel <BBObserverDelegate, MCProfileConnectionObserver, SBApplicationRestrictionObserver, SBFolderControllerDelegate, SBSearchGestureObserver, SBIconViewDelegate, SBIconModelDelegate, SBIconViewMapDelegate, SBIconModelApplicationDataSource>
{
    NSSet *_visibleTags;
    NSSet *_hiddenTags;
    SBIconModel *_iconModel;
    SBIconContentView *_contentView;
    BOOL _needsRelayout;
    BOOL _sendITunesNotification;
    BBObserver *_bbObserver;
    NSMutableSet *_displayIDsWithBadgingDisabled;
    SBRootFolderController *_rootFolderController;
    SBFolder *_closingFolder;
    SBFolder *_folderToOpenWhenScrollingEnds;
    BOOL _rotating;
    int _orientation;
    SBIcon *_launchingIcon;
    SBIcon *_highlightedIcon;
    SBLeafIcon *_iconToReveal;
    SBIcon *_grabbedIcon;
    SBIcon *_recipientIcon;
    NSMutableArray *_droppedIconsAnimatingIntoPlace;
    NSMutableArray *_droppedIconsInToOrOutOfFolder;
    unsigned int _numberOfDroppedIconsAnimatingIntoOrOutOfFolder;
    SBIcon *_lastTouchedIcon;
    BOOL _isEditing;
    BOOL _animatingFolder;
    BOOL _grabbedIconIsDraggedOutOfFolderView;
    SBFolder *_grabbedIconSourceFolder;
    BOOL _allowsUninstall;
    float _iconAlpha;
    float _oldScrollOffset;
    UITouch *_lastTouch;
    NSTimer *_folderSpringloadTimer;
    BOOL _keyboardIsRotating;
    BOOL _isAnimatingFolderCreation;
    BOOL _isAnimatingForUnscatter;
    NSObject<OS_dispatch_queue> *_folderIconLoadingBackgroundQueue;
    unsigned int _maxIconViewsInHierarchy;
    unsigned int _maxNewsstandItemViewsInHierarchy;
    SBIconColorSettings *_iconColorSettings;
    BOOL _showingSearch;
    _UILegibilitySettings *_legibilitySettings;
    NSIndexPath *_indexPathToResetTo;
}

+ (id)sharedInstance;
- (id)legibilitySettings;
- (void)searchGesture:(id)fp8 changedPercentComplete:(float)fp12;
- (void)setLegibilitySettings:(id)fp8;
- (void)folderControllerDidEndScrolling:(id)fp8;
- (void)folderControllerShouldBeginEditing:(id)fp8;
- (void)folderControllerShouldClose:(id)fp8;
- (void)folderController:(id)fp8 draggedIconShouldDropFromListView:(id)fp12;
- (BOOL)folderController:(id)fp8 draggedIconMightDropFromListView:(id)fp12;
- (BOOL)folderController:(id)fp8 draggedIconDidMoveFromListView:(id)fp12 toListView:(id)fp16;
- (BOOL)folderController:(id)fp8 draggedIconDidPauseAtLocation:(struct CGPoint)fp12 inListView:(id)fp20;
- (id)_debugStringForIconOrder:(int)fp8;
- (void)applicationRestrictionController:(id)fp8 didUpdateVisibleTags:(id)fp12 hiddenTags:(id)fp16;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)fp8 userInfo:(id)fp12;
- (id)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (id)defaultIconState;
- (int)appVisibilityOverrideForBundleIdentifier:(id)fp8;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)fp8 hiding:(id *)fp12;
- (id)allApplications;
- (void)observer:(id)fp8 noteServerConnectionStateChanged:(BOOL)fp12;
- (void)observer:(id)fp8 updateSectionInfo:(id)fp12;
- (void)_updateDisabledBadgesSetWithSections:(id)fp8;
- (BOOL)_badgesAreDisabledForSectionInfo:(id)fp8;
- (BOOL)iconViewDisplaysCloseBox:(id)fp8;
- (BOOL)iconViewDisplaysBadges:(id)fp8;
- (BOOL)iconAllowsBadging:(id)fp8;
- (void)iconCloseBoxTapped:(id)fp8;
- (BOOL)icon:(id)fp8 canReceiveGrabbedIcon:(id)fp12;
- (void)iconTapped:(id)fp8;
- (BOOL)iconShouldAllowTap:(id)fp8;
- (void)icon:(id)fp8 touchMoved:(id)fp12;
- (void)iconTouchBegan:(id)fp8;
- (void)icon:(id)fp8 touchEnded:(BOOL)fp12;
- (void)iconHandleLongPress:(id)fp8;
- (int)viewMap:(id)fp8 locationForIcon:(id)fp12;
- (unsigned int)viewMap:(id)fp8 maxRecycledIconViewsOfClass:(Class)fp12;
- (unsigned int)viewMap:(id)fp8 numberOfViewsToPrepareOfClass:(Class)fp12;
- (id)viewMapShouldPrepareViewsOfClasses:(id)fp8;
- (void)didDeleteIconState:(id)fp8;
- (void)didSaveIconState:(id)fp8;
- (BOOL)canSaveIconState:(id)fp8;
- (void)noteIconStateChangedExternally;
- (BOOL)importIconState:(id)fp8;
- (void)_selectIconModel:(BOOL)fp8;
- (void)_installedAppsDidChange:(id)fp8;
- (void)_iconModelDidLayout:(id)fp8;
- (void)_iconModelWillLayout:(id)fp8;
- (void)_iconModelDidReloadIcons:(id)fp8;
- (void)_iconModelWillReloadIcons:(id)fp8;
- (BOOL)relayout;
- (BOOL)dismissSpotlightIfNecessary;
- (void)_lockScreenUIWillLock:(id)fp8;
- (void)_noteUserIsInteractingWithIcons;
- (BOOL)isIconVisiblyRepresented:(id)fp8;
- (BOOL)_iconListIndexIsValid:(int)fp8;
- (void)layoutIconLists:(float)fp8 domino:(BOOL)fp12 forceRelayout:(BOOL)fp16;
- (void)compactIconsInIconListsInFolder:(id)fp8 moveNow:(BOOL)fp12 limitToIconList:(id)fp16;
- (void)compactRootIconLists;
- (void)compactFolders:(id)fp8;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)folderSpringloadTimerFired;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)fp8;
- (void)_resetFolderSpringloadTimer;
- (void)_cancelFolderSpringloadTimer;
- (id)recipientIcon;
- (void)setLastTouchedIcon:(id)fp8;
- (id)lastTouchedIcon;
- (void)setRecipientIcon:(id)fp8 duration:(double)fp12;
- (id)grabbedIcon;
- (void)_iconDropDidFinish:(id)fp8;
- (void)setGrabbedIcon:(id)fp8;
- (void)_dropIcon:(id)fp8 withInsertionPath:(id)fp12;
- (void)fixupBouncedIconsInFolder:(id)fp8 startingWithIndex:(int)fp12;
- (void)setLastTouch:(id)fp8;
- (void)noteViewCovered;
- (void)restoreScrollingAndRotationAfterUngrab;
- (void)moveIconFromWindow:(id)fp8 toIconList:(id)fp12;
- (void)_moveIconToContentView:(id)fp8;
- (void)_keyboardWillHide:(id)fp8;
- (void)_keyboardWillShow:(id)fp8;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)fp8;
- (void)iconWasTapped:(id)fp8;
- (void)clearHighlightedIcon;
- (void)_launchIcon:(id)fp8;
- (void)_precacheFolderImages:(id)fp8 location:(int)fp12;
- (void)removeAllIconAnimations;
- (BOOL)isAnimatingForUnscatter;
- (void)unscatterAnimated:(BOOL)fp8 afterDelay:(double)fp12 withCompletion:(id)fp(null);
- (void)scatterAnimated:(BOOL)fp8 withCompletion:(id)fp(null);
- (void)setIdleModeText:(id)fp8;
- (void)updateNumberOfRowsWithDuration:(double)fp8;
- (void)uninstallIcon:(id)fp8 animate:(BOOL)fp12;
- (void)uninstallIcon:(id)fp8;
- (BOOL)canUninstallIcon:(id)fp8;
- (BOOL)allowsUninstall;
- (void)uninstallIconAnimationCompletedForIcon:(id)fp8;
- (void)removeIcon:(id)fp8 compactFolder:(BOOL)fp12;
- (void)removeIcon:(id)fp8 andCompactFolder:(BOOL)fp12 folderRef:(id *)fp16;
- (id)insertIcon:(id)fp8 intoListView:(id)fp12 iconIndex:(int)fp16 moveNow:(BOOL)fp20;
- (id)insertIcon:(id)fp8 intoListView:(id)fp12 iconIndex:(int)fp16 moveNow:(BOOL)fp20 pop:(BOOL)fp24;
- (id)insertIcon:(id)fp8 atIndexPath:(id)fp12 moveNow:(BOOL)fp16;
- (id)insertIcon:(id)fp8 atIndexPath:(id)fp12 moveNow:(BOOL)fp16 pop:(BOOL)fp20;
- (id)placeIcon:(id)fp8 atIndexPath:(id)fp12 moveNow:(BOOL)fp16 layoutNow:(BOOL)fp20 pop:(BOOL)fp24;
- (void)scrollToIconToRevealAnimated:(BOOL)fp8;
- (void)finishInstallingIconAnimated:(BOOL)fp8;
- (void)setIconToReveal:(id)fp8 revealingPrevious:(BOOL)fp12;
- (id)iconToReveal;
- (void)replaceIconAtPath:(id)fp8 withIcon:(id)fp12 saveState:(BOOL)fp16;
- (void)addNewIconToDesignatedLocation:(id)fp8 animate:(BOOL)fp12 scrollToList:(BOOL)fp16 saveIconState:(BOOL)fp20;
- (void)addNewIconsToDesignatedLocations:(id)fp8 saveIconState:(BOOL)fp12;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (int)orientation;
- (void)handleHomeButtonTap;
- (BOOL)scrollToIconListAtIndex:(int)fp8 animate:(BOOL)fp12;
- (void)scrollToIconListContainingIcon:(id)fp8 animate:(BOOL)fp12;
- (BOOL)_shouldLockItemsInStoreDemoMode;
- (BOOL)_iconCanBeGrabbed:(id)fp8;
- (id)currentFolderIconList;
- (id)dockListView;
- (id)currentRootIconList;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (void)updateCurrentIconListIndexAndVisibility:(BOOL)fp8;
- (void)updateCurrentIconListIndexAndVisibility;
- (BOOL)isFolderScrolling;
- (BOOL)isScrolling;
- (void)showCarrierDebuggingAlertIfNeeded;
- (void)showInfoAlertIfNeeded:(BOOL)fp8;
- (void)showSpotlightAlertIfNecessary;
- (void)_iconVisibilityChanged:(id)fp8;
- (void)_resetRootIconLists;
- (void)_prepareToResetRootIconLists;
- (id)folderIconListAtIndex:(unsigned int)fp8;
- (id)rootIconListAtIndex:(int)fp8;
- (int)currentFolderIconListIndex;
- (int)currentIconListIndex;
- (id)_currentFolderController;
- (id)_openFolderController;
- (id)_rootFolderController;
- (id)rootFolder;
- (id)contentView;
- (void)dealloc;
- (id)model;
- (id)init;
- (void)_runScrollFolderTest:(int)fp8;
- (void)_runFolderCloseTest;
- (void)_runFolderOpenTest;
- (unsigned int)_folderRowsForFolder:(id)fp8;
- (unsigned int)_folderRowsForFolder:(id)fp8 inOrientation:(int)fp12;
- (struct CGRect)_contentViewRelativeFrameForIcon:(id)fp8;
- (void)shiftFolderViewsForKeyboardAppearing:(BOOL)fp8 keyboardHeight:(float)fp12;
- (id)_proposedFolderNameForGrabbedIcon:(id)fp8 recipientIcon:(id)fp12;
- (void)_snapshotFadeDidStop:(id)fp8 finished:(id)fp12 snapshot:(id)fp16;
- (void)_addToFolderAnimation:(id)fp8 didFinish:(id)fp12 context:(id)fp16;
- (void)_compactRootListsAfterFolderCloseWithAnimation:(BOOL)fp8;
- (void)_cleanupForClosingFolderAnimated:(BOOL)fp8;
- (void)_folderDidFinishOpenClose:(BOOL)fp8 animated:(BOOL)fp12;
- (void)_animateFolder:(id)fp8 open:(BOOL)fp12 animated:(BOOL)fp16 withCompletion:(id)fp(null);
- (void)replaceFolderIcon:(id)fp8 byContainedIcon:(id)fp12 animated:(BOOL)fp16;
- (void)animateIcons:(id)fp8 intoFolderIcon:(id)fp12 openFolderOnFinish:(BOOL)fp16 complete:(id)fp(null);
- (BOOL)isDroppingIcon:(id)fp8;
- (BOOL)isDroppingIconsInOrOutOfFolder;
- (void)_moveDroppedIconsToLocation:(int)fp8;
- (void)_dropIconOutOfClosingFolder:(id)fp8 withInsertionPath:(id)fp12;
- (void)_dropIconIntoOpenFolder:(id)fp8 withInsertionPath:(id)fp12;
- (id)createNewFolderFromRecipientIcon:(id)fp8 grabbedIcon:(id)fp12;
- (void)_closeFolderController:(id)fp8 animated:(BOOL)fp12 withCompletion:(id)fp(null);
- (void)closeFolderAnimated:(BOOL)fp8;
- (void)closeFolderAnimated:(BOOL)fp8 withCompletion:(id)fp(null);
- (void)openFolder:(id)fp8 animated:(BOOL)fp12;
- (BOOL)isNewsstandOpen;
- (id)openFolder;
- (BOOL)hasOpenFolder;
- (BOOL)hasAnimatingFolder;
- (void)_setAnimatingFolderCreation:(BOOL)fp8;
- (void)_setFolderToOpenAfterScrolling:(id)fp8;
- (void)_setHasAnimatingFolder:(BOOL)fp8;
- (void)_noteFolderAnimationStateDidChange;
- (id)iconListViewAtIndex:(unsigned int)fp8 inFolder:(id)fp12 createIfNecessary:(BOOL)fp16;
- (void)getListView:(id *)fp8 folder:(id *)fp12 relativePath:(id *)fp16 forIndexPath:(id)fp20 createIfNecessary:(BOOL)fp24;

@end

