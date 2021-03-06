/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, PCPersistentTimer, SBPasscodeLockAssertionManager, SBPasscodeLockDisableAssertion, SecureBackup;

@interface SBDeviceLockController : _ABAddressBookCopyLocalizedLabel
{
    int _lockState;
    double _lastLockDate;
    BOOL _isPermanentlyBlocked;
    BOOL _isBlockedForThermalCondition;
    double _deviceLockUnblockTime;
    PCPersistentTimer *_deviceLockUnblockTimer;
    SBPasscodeLockAssertionManager *_assertionManager;
    SBPasscodeLockDisableAssertion *_transientPasscodeCheckingAssertion;
    BOOL _okToSendNotifications;
    SecureBackup *_secureBackupHelper;
    NSString *_lastIncorrectPasscodeAttempt;
}

+ (id)_sharedControllerIfExists;
+ (id)sharedController;
+ (id)_sharedControllerCreateIfNecessary:(BOOL)fp8;
- (id)description;
- (void)_uncachePasscodeIfNecessary;
- (void)_cachePassword:(id)fp8;
- (BOOL)shouldAllowUnlockToApplication:(id)fp8;
- (void)_removeDeviceLockDisableAssertion:(id)fp8;
- (void)_addDeviceLockDisableAssertion:(id)fp8;
- (BOOL)attemptDeviceUnlockWithPassword:(id)fp8 appRequested:(BOOL)fp12;
- (void)_notifyOfFirstUnlock;
- (void)_setLockState:(int)fp8;
- (void)_enablePasscodeLockImmediately:(BOOL)fp8;
- (void)enablePasscodeLockImmediately;
- (void)_updateDeviceLockedState;
- (BOOL)_shouldLockDeviceNow;
- (BOOL)isPasscodeLockedOrBlocked;
- (BOOL)isPasscodeLocked;
- (BOOL)isPasscodeLockedCached;
- (BOOL)deviceHasPasscodeSet;
- (void)_setDeviceLockUnblockTime:(double)fp8;
- (void)_unblockTimerFired;
- (void)_scheduleUnblockTimer;
- (void)_clearUnblockTimer;
- (void)_clearBlockedState;
- (BOOL)isPermanentlyBlocked:(double *)fp8;
- (BOOL)isBlocked;
- (BOOL)_temporarilyBlocked;
- (void)setBlockedForThermalCondition:(BOOL)fp8;
- (void)_sendBlockStateChangeNotification;
- (BOOL)isBlockedForThermalCondition;
- (id)lastLockDate;
- (void)dealloc;
- (id)init;

@end

