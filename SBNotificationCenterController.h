/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBBulletinWindowClient-Protocol.h"
#import "SBNotificationCenterViewControllerDelegate-Protocol.h"
#import "SBWidgetViewControllerHostDelegate-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSArray, SBApplication, SBChevronView, SBNotificationCenterSettings, SBNotificationCenterViewController, SBUnlockActionContext, UIView;

@interface SBNotificationCenterController : _ABAddressBookCopyLocalizedLabel <SBBulletinWindowClient, SBNotificationCenterViewControllerDelegate, SBWidgetViewControllerHostDelegate, _UISettingsKeyObserver>
{
    SBNotificationCenterViewController *_viewController;
    UIView *_coveredContentSnapshot;
    SBApplication *_coveredApplication;
    SBChevronView *_borrowedGrabberView;
    id _borrowedGrabberWillPresentBlock;
    id _borrowedGrabberHideBlock;
    id _borrowedGrabberCompletionBlock;
    NSArray *_dataProviders;
    id _keyboardNotificationObserverToken;
    SBUnlockActionContext *_unlockActionContext;
    int _presentationState;
    SBNotificationCenterSettings *_settings;
    struct {
        unsigned int isPresentingOrDismissing:1;
        unsigned int isGrabberEnabled:1;
    } _notificationCenterControllerFlags;
}

+ (double)transitionAnimationDuration;
+ (id)newDynamicAnimationForShow:(BOOL)fp8 targetValue:(double)fp12 withInitialValue:(double)fp20 velocity:(double)fp28 extraPull:(BOOL)fp36;
+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)fp8;
- (id)settings;
- (id)unlockActionContext;
- (id)viewController;
- (void)finishedScrollTest;
- (void)runScrollTest:(id)fp8 iterations:(int)fp12 delta:(int)fp16;
- (void)settings:(id)fp8 changedValueForKey:(id)fp12;
- (void)buddyCompleted:(id)fp8;
- (void)publishSectionInfoIfNecessary;
- (id)_widgetSections;
- (id)_sectionWithIdentifier:(id)fp8 forCategory:(int)fp12;
- (id)_sectionForWidgetBundle:(id)fp8 forCategory:(int)fp12;
- (id)_copyDefaultEnabledWidgetIDs;
- (void)widget:(id)fp8 requestsPresentationOfViewController:(id)fp12 presentationStyle:(int)fp16 context:(id)fp20 completion:(id)fp(null);
- (void)widget:(id)fp8 requestsLaunchOfURL:(id)fp12;
- (void)bulletinWindowDidRotateFromOrientation:(int)fp8;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)fp8 duration:(double)fp12;
- (void)bulletinWindowWillRotateToOrientation:(int)fp8 duration:(double)fp12;
- (void)invalidateUnlockActionContext;
- (BOOL)handleActionForBulletin:(id)fp8;
- (id)widgetViewControllerHostDelegate:(id)fp8;
- (BOOL)_handleActionOrRequestWithDefaultAction:(id)fp(null) lockedAction:(void)fp8;
- (void)biometricEventMonitorDidAuthenticate:(id)fp8;
- (void)_updateForChangeInMessagePrivacy;
- (void)reloadAllWidgets;
- (BOOL)isGrabberVisible;
- (void)hideGrabberAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)showGrabberAnimated:(BOOL)fp8;
- (BOOL)canShowHideGrabberView;
- (void)setGrabberEnabled:(BOOL)fp8;
- (void)_setGrabberEnabled:(BOOL)fp8;
- (BOOL)isGrabberEnabled;
- (void)unregisterSharedGrabberView;
- (void)registerSharedGrabberView:(id)fp8 withWillPresentBlock:(id)fp(null) hideBlock:(void)fp12 andCompletion:(id)fp(null);
- (void)dismissPresentedWidgetContentAnimated:(BOOL)fp8;
- (void)dismissAnimated:(BOOL)fp8 withStepper:(id)fp(null) completion:(void)fp12 fromCurrentState:(id)fp(null);
- (void)dismissAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)dismissAnimated:(BOOL)fp8;
- (void)presentAnimated:(BOOL)fp8 completion:(id)fp(null);
- (void)presentAnimated:(BOOL)fp8;
- (void)_present:(BOOL)fp8 withStandardAnimation:(BOOL)fp12 stepper:(id)fp(null) completion:(void)fp16 fromCurrentState:(id)fp(null);
- (void)_present:(BOOL)fp8 stepper:(id)fp(null);
- (void)cancelTransition;
- (void)endTransitionWithVelocity:(struct CGPoint)fp8 completion:(id)fp(null);
- (void)endTransitionWithVelocity:(struct CGPoint)fp8 additionalValueApplier:(id)fp(null) completion:(void)fp16;
- (void)updateTransitionWithTouchLocation:(struct CGPoint)fp8 velocity:(struct CGPoint)fp16;
- (void)beginDismissalWithTouchLocation:(struct CGPoint)fp8;
- (void)beginPresentationWithTouchLocation:(struct CGPoint)fp8;
- (void)prepareLayoutForPresentationFromBanner;
- (void)_cleanupAfterTransition:(BOOL)fp8;
- (void)_setupForDismissalWithTouchLocation:(struct CGPoint)fp8;
- (void)_setupForPresentationWithTouchLocation:(struct CGPoint)fp8;
- (void)_setupForViewPresentation;
- (void)_removeCoveredContentSnapshot;
- (void)_insertCoveredContentSnapshotIfNecessary:(id)fp8;
- (void)_invalidateCoveredContentSnapshot;
- (void)_updateCoveredContentSnapshot;
- (BOOL)_shouldSelectViewControllerAtTouchLocation;
- (BOOL)doesSectionWithIdentifierUpdateMessagePrivacyViaSectionParameters:(id)fp8;
- (BOOL)handleMenuButtonTap;
- (void)setBlursBackground:(BOOL)fp8;
- (BOOL)blursBackground;
- (BOOL)isPresentingWidgetContent;
- (BOOL)isNotificationsViewAvailableWhileLocked;
- (BOOL)isTodayViewAvailableWhileLocked;
- (BOOL)_isNotificationCenterViewAvailableWhileLockedWithProfileBlock:(id)fp(null) counterpartBlock:(void)fp8;
- (BOOL)_isNotificationCenterViewWithFeatureKeyAvailableWhileLocked:(id)fp8 isLockedDownByRestrictions:(char *)fp12;
- (BOOL)isAvailableWhileLocked;
- (BOOL)isVisible;
- (id)window;
- (void)dealloc;
- (id)init;

@end

