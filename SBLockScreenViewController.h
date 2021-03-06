/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockScreenViewControllerBase.h"

#import "SBLockScreenBatteryChargingViewControllerDelegate-Protocol.h"
#import "SBLockScreenCameraControllerDelegate-Protocol.h"
#import "SBLockScreenInfoOverlayDelegate-Protocol.h"
#import "SBLockScreenNotificationListDelegate-Protocol.h"
#import "SBLockScreenPluginControllerDelegate-Protocol.h"
#import "SBLockScreenTimerViewControllerDelegate-Protocol.h"
#import "SBLockScreenViewDelegate-Protocol.h"
#import "SBUIPasscodeLockViewDelegate_Internal-Protocol.h"
#import "SBWallpaperObserver-Protocol.h"

@class MPUSystemMediaControlsViewController, NSMutableArray, SBLockOverlayContext, SBLockScreenBatteryChargingViewController, SBLockScreenBuddyViewController, SBLockScreenCameraController, SBLockScreenDateViewController, SBLockScreenDeviceBlockViewController, SBLockScreenEmergencyCallViewController, SBLockScreenFullscreenBulletinViewController, SBLockScreenInfoOverlayViewController, SBLockScreenLegalViewController, SBLockScreenModalAlertViewController, SBLockScreenNotificationListController, SBLockScreenNowPlayingPluginController, SBLockScreenPluginController, SBLockScreenResetRestoreViewController, SBLockScreenSystemAlertFullscreenViewController, SBLockScreenTemperatureWarningViewController, SBLockScreenTimerViewController;

@interface SBLockScreenViewController : SBLockScreenViewControllerBase <SBLockScreenViewDelegate, SBLockScreenTimerViewControllerDelegate, SBLockScreenNotificationListDelegate, SBUIPasscodeLockViewDelegate_Internal, SBLockScreenBatteryChargingViewControllerDelegate, SBLockScreenInfoOverlayDelegate, SBWallpaperObserver, SBLockScreenCameraControllerDelegate, SBLockScreenPluginControllerDelegate>
{
    BOOL _isInScreenOffMode;
    SBLockScreenDeviceBlockViewController *_blockedController;
    SBLockScreenDateViewController *_dateViewController;
    SBLockScreenLegalViewController *_legalViewController;
    SBLockScreenTimerViewController *_timerViewController;
    SBLockScreenNotificationListController *_notificationController;
    SBLockScreenCameraController *_cameraController;
    MPUSystemMediaControlsViewController *_mediaControlsViewController;
    BOOL _ignoreFirstMediaToggle;
    SBLockScreenModalAlertViewController *_modalAlertController;
    SBLockScreenSystemAlertFullscreenViewController *_fullscreenSystemAlertController;
    NSMutableArray *_pendingFullscreenSystemAlerts;
    SBLockScreenBatteryChargingViewController *_chargingViewController;
    BOOL _attemptingPasscodeUnlock;
    BOOL _chargingViewControllerVisible;
    BOOL _wasAutoUnlocked;
    BOOL _forcePasscodeWhileInCall;
    BOOL _isHidingPasscodeWhileInCall;
    SBLockScreenPluginController *_pluginController;
    SBLockScreenNowPlayingPluginController *_nowPlayingController;
    SBLockScreenBuddyViewController *_buddyController;
    SBLockOverlayContext *_buddyOverlayContext;
    NSMutableArray *_prioritizedOverlays;
    SBLockOverlayContext *_fullScreenOverlayContext;
    SBLockOverlayContext *_blockedOverlayContext;
    SBLockScreenFullscreenBulletinViewController *_fullscreenBulletinController;
    SBLockOverlayContext *_fullScreenBulletinOverlayContext;
    SBLockScreenInfoOverlayViewController *_infoOverlayController;
    SBLockOverlayContext *_infoOverlayContext;
    SBLockScreenTemperatureWarningViewController *_thermalWarningController;
    SBLockOverlayContext *_thermalWarningContext;
    SBLockScreenResetRestoreViewController *_resetRestoreViewController;
    SBLockOverlayContext *_resetRestoreOverlayContext;
    SBLockScreenEmergencyCallViewController *_emergencyCallController;
    BOOL _suppressWallpaperAlphaChangeOnScroll;
}

- (id)pluginController;
- (id)_wallpaperLegibilitySettings;
- (id)_pluginLegibilitySettings;
- (id)_overlayLegibilitySettings;
- (id)_notificationListLegibilitySettings;
- (id)_effectiveLegibilitySettings;
- (void)_updateLegibility;
- (id)legibilitySettings;
- (void)_cameraControllerDidHide:(id)fp8;
- (void)_cameraControllerDidShow:(id)fp8;
- (id)cameraParentViewController;
- (void)wallpaperDidChangeForVariant:(int)fp8;
- (void)wallpaperLegibilitySettingsDidChange:(id)fp8 forVariant:(int)fp12;
- (void)_buddyDidFinish:(id)fp8;
- (void)_removeBuddyBackground;
- (void)_addOrRemoveBuddyBackgroundIfNecessary;
- (void)biometricEventMonitorDidAuthenticate:(id)fp8;
- (void)_updateGrabbersForIdentityManagerAuthentication;
- (void)_updateMediaControlsForScreenMode;
- (void)_mediaControlsDidHideOrShow:(id)fp8;
- (void)setShowingMediaControls:(BOOL)fp8;
- (BOOL)isShowingMediaControls;
- (void)_setMediaControlsVisible:(BOOL)fp8;
- (void)_toggleMediaControls;
- (id)_notificationController;
- (void)pluginController:(id)fp8 activePluginDidChange:(id)fp12;
- (void)_setNowPlayingControllerEnabled:(BOOL)fp8;
- (void)_removeActivePluginView;
- (void)_resetActivePlugin;
- (struct CGRect)defaultContentRegionForPluginController:(id)fp8 withOrientation:(int)fp12;
- (void)disableLockScreenBundleWithName:(id)fp8 deactivationContext:(id)fp12;
- (void)enableLockScreenBundleWithName:(id)fp8 activationContext:(id)fp12;
- (id)activeLockScreenPluginController;
- (BOOL)isLockScreenPluginViewVisible;
- (void)deactivateCardItem:(id)fp8;
- (void)updateCardItem:(id)fp8;
- (void)activateCardItem:(id)fp8 animated:(BOOL)fp12;
- (id)allPendingAlertItems;
- (BOOL)hasSuperModalAlertItems;
- (id)dequeueAllPendingSuperModalAlertItems;
- (id)currentAlertItem;
- (void)cleanupAlertItemsForDeactivation;
- (void)deactivateAlertItem:(id)fp8;
- (BOOL)activateAlertItem:(id)fp8;
- (void)pendOrDeactivateFullscreenSystemAlert:(id)fp8;
- (BOOL)wantsToHandleAlert:(id)fp8;
- (BOOL)canHandleAlerts;
- (BOOL)shouldPendAlertItemsWhileActive;
- (void)chargingViewControllerFadedOutContent:(id)fp8;
- (void)_cleanupBatteryChargingViewWithAnimationDuration:(double)fp8;
- (void)_fadeViewsForChargingViewVisible:(BOOL)fp8;
- (void)_acStatusChanged:(id)fp8;
- (void)_updateBatteryChargingViewAnimated:(BOOL)fp8;
- (void)dismissFullscreenBulletinAlertWithItem:(id)fp8;
- (void)modifyFullscreenBulletinAlertWithItem:(id)fp8;
- (void)presentFullscreenBulletinAlertWithItem:(id)fp8;
- (void)_removeFullscreenBulletinViewAnimated:(BOOL)fp8;
- (void)_addFullscreenBulletinViewWithItem:(id)fp8;
- (id)lockScreenScrollView;
- (void)notificationListBecomingVisible:(BOOL)fp8;
- (void)attemptToUnlockUIFromNotification;
- (void)_dismissNotificationCenterToRevealPasscode;
- (void)bannerEnablementChanged;
- (void)timerControllerDidStopTimer:(id)fp8;
- (void)timerControllerDidStartTimer:(id)fp8;
- (void)_updateDateTimerStatusBarAndLockSlider;
- (BOOL)_shouldShowDate;
- (float)_effectiveVisibleStatusBarAlpha;
- (id)_effectiveCustomSlideToUnlockText;
- (float)_effectiveOpacityForVisibleDateView;
- (BOOL)isMakingEmergencyCall;
- (void)emergencyDialerExitedWithError:(id)fp8;
- (void)exitEmergencyDialerAnimated:(BOOL)fp8;
- (void)_destroyEmergencyDialerAnimated:(BOOL)fp8;
- (void)launchEmergencyDialer;
- (void)_adjustIdleTimerForEmergencyDialerActive:(BOOL)fp8;
- (void)passcodeLockViewKeypadKeyUp:(id)fp8;
- (void)passcodeLockViewKeypadKeyDown:(id)fp8;
- (void)passcodeLockViewEmergencyCallButtonPressed:(id)fp8;
- (void)passcodeLockViewCancelButtonPressed:(id)fp8;
- (void)passcodeLockViewPasscodeEnteredViaMesa:(id)fp8;
- (void)passcodeLockViewPasscodeEntered:(id)fp8;
- (void)passcodeLockViewPasscodeDidChange:(id)fp8;
- (void)_endTimedPasscodeHysteresis;
- (void)_beginTimedPasscodeHysteresis;
- (void)_togglePasscodeEmergencyCallButtonIfNecessary;
- (BOOL)__shouldHidePasscodeForActiveCall;
- (void)_evaluateLockUIForActiveCalls;
- (BOOL)isHidingPasscodeViewDuringCall;
- (void)_passcodeStateChanged;
- (BOOL)_wantsToAnimateFromPasscodeLockOnFailedPasscodeAttemptAndBlocked;
- (BOOL)isPasscodeLockVisible;
- (void)setPasscodeLockVisible:(BOOL)fp8 animated:(BOOL)fp12 withUnlockSource:(int)fp16 andOptions:(id)fp20;
- (void)setPasscodeLockVisible:(BOOL)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)_callCountChanged:(id)fp8;
- (void)_callInfoChanged:(id)fp8;
- (void)_handlePasscodePolicyChanged;
- (void)_handlePasscodeLockStateChanged;
- (void)_handleBacklightLevelChanged:(id)fp8;
- (void)_handleBacklightFadeEnded;
- (void)_handleDisplayTurnedOn;
- (void)_handleDisplayWillUndim;
- (void)_handleDisplayTurnedOff;
- (void)noteResetRestoreStateUpdated;
- (void)noteDeviceBlockedStatusUpdated;
- (void)_unsupportedChargingAccessoryStateChanged:(id)fp8;
- (void)infoOverlayWantsDismissal;
- (void)_removeInfoOverlayViewAnimated:(BOOL)fp8;
- (void)_addInfoOverlayViewWithTitle:(id)fp8;
- (void)overlay:(id)fp8 wantsStyleChange:(unsigned int)fp12;
- (void)removeOverlay:(id)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)addOverlay:(id)fp8 animated:(BOOL)fp12 completion:(id)fp(null);
- (void)__transitionOverlayAnimated:(BOOL)fp8 from:(id)fp12 to:(id)fp16 completion:(id)fp(null);
- (void)_removeAllOverlays;
- (BOOL)_shouldDismissSwitcherOnActivation;
- (BOOL)hasTranslucentBackground;
- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)suppressesControlCenter;
- (BOOL)suppressesNotificationCenter;
- (BOOL)suppressesBanners;
- (BOOL)handleHeadsetButtonPressed:(BOOL)fp8;
- (BOOL)handleVolumeDownButtonPressed;
- (BOOL)handleVolumeUpButtonPressed;
- (BOOL)handleLockButtonPressed;
- (BOOL)handleMenuButtonHeld;
- (BOOL)handleMenuButtonTap;
- (BOOL)handleMenuButtonDoubleTap;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)allowsStackingOfAlert:(id)fp8;
- (int)statusBarStyleOverridesToCancel;
- (int)statusBarStyle;
- (void)alertDisplayWillBecomeVisible;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)_notificationCenterDidPresent:(id)fp8;
- (void)_notificationCenterWillPresent:(id)fp8;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)displayDidDisappear;
- (void)deactivate;
- (void)activate;
- (BOOL)allowSystemGestureAtLocation:(struct CGPoint)fp8;
- (void)shakeSlideToUnlockTextWithCustomText:(id)fp8;
- (void)prepareForMesaUnlockWithCompletion:(id)fp(null);
- (BOOL)lockScreenBulletinControllerIsActive;
- (BOOL)lockScreenIsShowingBulletins;
- (BOOL)wantsToShowStatusBarTime;
- (BOOL)shouldShowLockStatusBarTime;
- (BOOL)_isFadeInAnimationInProgress;
- (void)_startFadeInAnimationForBatteryView:(BOOL)fp8;
- (void)startLockScreenFadeInAnimationForSource:(int)fp8;
- (void)noteExitingLostMode;
- (void)prepareToEnterLostMode;
- (BOOL)isShowingOverheatUI;
- (void)prepareToReturnToCameraFromCall;
- (void)cancelReturnToCameraAfterCall;
- (BOOL)shouldReturnToCameraAfterCall;
- (void)handlePhoneAppExitedIfNecessary;
- (void)noteStartingPhoneCallWhileUILocked;
- (void)dismissCameraImmediately;
- (void)activateCameraAnimated:(BOOL)fp8;
- (BOOL)cameraIsVisible;
- (BOOL)cameraIsActive;
- (void)finishUIUnlockFromSource:(int)fp8;
- (void)prepareForUIUnlock;
- (void)prepareForExternalUIUnlock;
- (BOOL)canBeDeactivatedForUIUnlockFromSource:(int)fp8;
- (BOOL)wantsPasscodeLockForUIUnlockFromSource:(int)fp8 withOptions:(id)fp12;
- (id)_effectiveUnlockActionContext;
- (id)currentUnlockActionContext;
- (void)setForcesPasscodeViewDuringCall:(BOOL)fp8;
- (void)setInScreenOffMode:(BOOL)fp8;
- (void)_updateGrabbersForScreenOffMode;
- (BOOL)isInScreenOffMode;
- (BOOL)isLockScreenVisible;
- (id)effectiveCustomSlideToUnlockText;
- (BOOL)lockScreenViewPhonePluginIsActive;
- (void)lockScreenView:(id)fp8 didEndScrollingOnPage:(int)fp12;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)fp8 percentScrolledVelocity:(float)fp12 targetScrollPercentage:(float)fp16;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(float)fp8 tracking:(BOOL)fp12;
- (void)lockScreenViewDidBeginScrolling:(id)fp8;
- (void)lockScreenView:(id)fp8 didScrollToPage:(int)fp12;
- (BOOL)_disableIdleTimer:(BOOL)fp8;
- (BOOL)wasAutoUnlocked;
- (void)_removeMediaControls;
- (void)_addMediaControls;
- (id)_cameraView;
- (id)viewToAnimateForAlertTransition;
- (void)_removeBatteryChargingView;
- (void)_addBatteryChargingView;
- (void)_removeFullscreenSystemAlertViewAnimated:(BOOL)fp8;
- (void)_addFullscreenSystemAlertViewForSystemNotification:(id)fp8 withTitle:(id)fp12 andSubtitle:(id)fp16;
- (void)_removeNotificationView;
- (void)_addNotificationView;
- (void)_removeModalAlertView;
- (void)_addModalAlertView;
- (void)_removeTimerView;
- (void)_addTimerView;
- (void)_addTimerViewIfNecessary;
- (void)_removeLegalView;
- (void)_addLegalView;
- (void)_removeDateView;
- (void)_addDateView;
- (void)_addRemoveOrChangePasscodeViewIfNecessary;
- (void)_removeRestoreView:(BOOL)fp8;
- (void)_addOrRemoveResetRestoreViewIfNecessary:(BOOL)fp8;
- (id)_currentTextForResetOrRestoreState;
- (void)_removeThermalTrapView:(BOOL)fp8;
- (void)_addOrRemoveThermalTrapViewIfNecessary:(BOOL)fp8;
- (void)_removeBlockedView:(BOOL)fp8;
- (void)_addOrRemoveBlockedViewIfNecessary:(BOOL)fp8;
- (void)_addCameraGrabberIfNecessary;
- (id)_lockScreenViewCreatingIfNecessary;
- (id)lockScreenView;
- (void)_releaseLockScreenView;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

