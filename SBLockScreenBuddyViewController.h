/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockScreenBuddyViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, NSTimer, SBActivationInfoViewController, SBLockScreenViewController;

@interface SBLockScreenBuddyViewController : SBLockOverlayViewController <SBLockScreenBuddyViewDelegate>
{
    NSMutableArray *_currentStringsOrdering;
    BOOL _needsTransitionFromFakeLogoToWelcomeStrings;
    BOOL _cyclingLabels;
    BOOL _viewVisible;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    BOOL _showingBootLogo;
    BOOL _startsWithBlackBackground;
    BOOL _hasResultsFromWifiScan;
    BOOL _shouldResetOrderingOnNextCycle;
    SBLockScreenViewController *_lockScreenViewController;
    NSDictionary *_localizedStrings;
    NSArray *_stringsOrdering;
    unsigned int _currentStringIndex;
    NSTimer *_stringCycleTimer;
    SBActivationInfoViewController *_activationInfoViewController;
    NSString *_telephonyPrimaryLanguage;
    NSString *_wifiPrimaryLanguage;
}

- (void)setShouldResetOrderingOnNextCycle:(BOOL)fp8;
- (BOOL)shouldResetOrderingOnNextCycle;
- (void)setHasResultsFromWifiScan:(BOOL)fp8;
- (BOOL)hasResultsFromWifiScan;
- (void)setWifiPrimaryLanguage:(id)fp8;
- (id)wifiPrimaryLanguage;
- (void)setTelephonyPrimaryLanguage:(id)fp8;
- (id)telephonyPrimaryLanguage;
- (void)setStartsWithBlackBackground:(BOOL)fp8;
- (BOOL)startsWithBlackBackground;
- (void)setShowingBootLogo:(BOOL)fp8;
- (BOOL)isShowingBootLogo;
- (void)setActivationInfoViewController:(id)fp8;
- (id)activationInfoViewController;
- (void)setStringCycleTimer:(id)fp8;
- (id)stringCycleTimer;
- (void)setCurrentStringIndex:(unsigned int)fp8;
- (unsigned int)currentStringIndex;
- (void)setStringsOrdering:(id)fp8;
- (id)stringsOrdering;
- (void)setLocalizedStrings:(id)fp8;
- (id)localizedStrings;
- (void)setLockScreenViewController:(id)fp8;
- (id)lockScreenViewController;
- (void)handleTapGestureFromView:(id)fp8;
- (void)buddyView:(id)fp8 didChangeToStyle:(unsigned int)fp12;
- (void)_closeWifiConnection;
- (void)_wifiScanComplete:(struct __CFArray *)fp8 error:(BOOL)fp12;
- (void)_startWifiScan;
- (void)_didHideBootSetupLogo:(id)fp8;
- (void)_didShowBootSetupLogo:(id)fp8;
- (void)_toggleShowsIMEIandICCID:(id)fp8;
- (void)_cycleTimerDidFire:(id)fp8;
- (void)_updateDisplayedStrings;
- (void)_resetDisplayedLocalizedStringsImmediately:(BOOL)fp8;
- (void)_startCyclingLocalizedStringsWithDelay:(double)fp8;
- (void)_startCyclingLocalizedStrings;
- (void)_updateWifiPrimaryLanguageFromGuessedCountries:(id)fp8;
- (void)_fetchLanguageFromTelephony;
- (id)_importantLanguageIdentifiers;
- (id)_currentLanguageIdentifier;
- (id)_currentStringsDictionary;
- (void)_transitionFromFakeBootLogoToWelcomeStrings;
- (void)_noteLogoVisible:(BOOL)fp8;
- (void)_removeAllHiddenReasons;
- (void)viewDidDisappear:(BOOL)fp8;
- (void)viewWillDisappear:(BOOL)fp8;
- (void)viewDidAppear:(BOOL)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (id)buddyView;
- (void)loadView;
- (void)stopCyclingLocalizedStrings;
- (void)setInScreenOffMode:(BOOL)fp8;
- (id)slideToUnlockText;
- (void)dealloc;
- (id)initWithLockScreenViewController:(id)fp8;

@end

