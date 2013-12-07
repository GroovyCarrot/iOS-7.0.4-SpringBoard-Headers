/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBUIUserAgent-Protocol.h"

@class SBBulletinAlertHandlerRegistry;

@interface SBUserAgent : _ABAddressBookCopyLocalizedLabel <SBUIUserAgent>
{
    SBBulletinAlertHandlerRegistry *_modalAlertRegistry;
}

+ (id)sharedUserAgent;
- (void)disableLockScreenBundleNamed:(id)fp8 deactivationContext:(id)fp12;
- (void)enableLockScreenBundleNamed:(id)fp8 activationContext:(id)fp12;
- (id)localizedDisplayNameForDisplayID:(id)fp8;
- (void)setWallpaperTunnelActive:(BOOL)fp8 forFullscreenAlertController:(id)fp12;
- (BOOL)isUsingLegacyStyle;
- (void)activateRemoteAlertService:(id)fp8 options:(id)fp12;
- (void)activateStarkRemoteAlertService:(id)fp8 ofType:(id)fp12;
- (void)setMinimumBacklightLevel:(float)fp8 animated:(BOOL)fp12;
- (BOOL)isSBUILoggingEnabled;
- (void)removeActiveInterfaceOrientationObserver:(id)fp8;
- (void)addActiveInterfaceOrientationObserver:(id)fp8;
- (void)activateModalBulletinAlert:(id)fp8;
- (id)modalBulletinAlertHandlerRegistry;
- (void)stopRinging;
- (void)playRingtoneAtPath:(id)fp8 vibrationPattern:(id)fp12;
- (void)playRingtoneAtPath:(id)fp8;
- (int)networkUsageTypeForAppWithDisplayID:(id)fp8;
- (void)setIdleText:(id)fp8;
- (void)setBadgeNumberOrString:(id)fp8 forApplicationWithID:(id)fp12;
- (void)notifyOnNextUserEvent;
- (BOOL)isIdleTimerDisabledForReason:(id)fp8;
- (void)setIdleTimerDisabled:(BOOL)fp8 forReason:(id)fp12;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)fp8 andDimScreen:(BOOL)fp12;
- (void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)fp8;
- (void)lockAndDimDevice;
- (void)undimScreen;
- (void)dimScreen:(BOOL)fp8;
- (void)updateLockScreenInterfaceIfNecessary;
- (struct CGRect)defaultContentRegionForAwayViewPlugin:(id)fp8 withOrientation:(int)fp12;
- (BOOL)launchFromAwayViewPluginWithURL:(id)fp8 bundleID:(id)fp12 allowUnlock:(BOOL)fp16 animate:(BOOL)fp20;
- (BOOL)canLaunchFromAwayViewPluginWithURL:(id)fp8 bundleID:(id)fp12;
- (BOOL)launchFromPushOrLocalBulletin:(id)fp8 origin:(int)fp12;
- (BOOL)launchFromBulletinWithURL:(id)fp8 bundleID:(id)fp12 allowUnlock:(BOOL)fp16 animate:(BOOL)fp20 launchOrigin:(int)fp24;
- (BOOL)canLaunchFromBulletinWithURL:(id)fp8 bundleID:(id)fp12;
- (BOOL)_launchFromSource:(int)fp8 withURL:(id)fp12 bundleID:(id)fp16 allowUnlock:(BOOL)fp20 animate:(BOOL)fp24;
- (BOOL)launchFromSource:(int)fp8 withURL:(id)fp12 bundleID:(id)fp16 allowUnlock:(BOOL)fp20;
- (BOOL)launchApplicationFromSource:(int)fp8 withURL:(id)fp12 options:(id)fp16;
- (BOOL)launchApplicationFromSource:(int)fp8 withDisplayID:(id)fp12 options:(id)fp16;
- (BOOL)canLaunchFromSource:(int)fp8 withURL:(id)fp12 bundleID:(id)fp16;
- (BOOL)_openApplication:(id)fp8 withURL:(id)fp12 fromSource:(int)fp16 animated:(BOOL)fp20 options:(id)fp24;
- (void)_cleanupFromBannerLaunch;
- (id)_safeValue:(id)fp8 forKey:(id)fp12 ofType:(Class)fp16;
- (BOOL)openURL:(id)fp8 allowUnlock:(BOOL)fp12 animated:(BOOL)fp16;
- (void)openURL:(id)fp8 animateIn:(BOOL)fp12 scale:(float)fp16 start:(double)fp20 duration:(float)fp28 animateOut:(BOOL)fp32;
- (void)prepareToAnswerCall;
- (BOOL)launchDisplayWithURL:(id)fp8 forCall:(BOOL)fp12 sender:(id)fp16;
- (void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)fp8;
- (BOOL)lockScreenIsShowing;
- (BOOL)deviceIsTethered;
- (BOOL)deviceIsBlocked;
- (BOOL)deviceIsPasscodeLockedRemotely;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsLocked;
- (BOOL)canUserLaunchIcon;
- (BOOL)alertIsActive;
- (BOOL)springBoardIsActive;
- (BOOL)applicationInstalledForDisplayID:(id)fp8;
- (id)topSuspendedEventsOnlyDisplayID;
- (id)foregroundDisplayID;
- (id)foregroundApplicationDisplayID;
- (int)activeInterfaceOrientation;
- (void)updateInterfaceOrientationIfNecessary;
- (void)dealloc;
- (id)init;

@end

