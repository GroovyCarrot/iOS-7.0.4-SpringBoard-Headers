/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class ATConnection;

@interface SBModelessSyncController : _ABAddressBookCopyLocalizedLabel
{
    BOOL _isAppSyncing;
    BOOL _isSyncing;
    int _syncRegistrationToken;
    int _iCloudRestoreToken;
    BOOL _restoringFromICloud;
    BOOL _isAutoSyncing;
    BOOL _isWirelessSyncing;
    ATConnection *_airTrafficConnection;
}

+ (id)sharedInstance;
- (BOOL)isSyncing;
- (BOOL)isAppSyncing;
- (void)_endObservingICloudRestoreStatus;
- (void)_beginObservingICloudRestoreStatus;
- (void)_iCloudStatusChanged;
- (BOOL)isRestoringFromICloud;
- (void)_updateIconsForStateChange;
- (void)_setAppSyncState:(BOOL)fp8;
- (void)_appSyncStateChanged;
- (void)gotLowBatteryWarning;
- (void)endMonitoring;
- (void)beginMonitoring;
- (void)connectionWasInterrupted:(id)fp8;
- (void)connection:(id)fp8 updatedProgress:(id)fp12;
- (BOOL)isWirelessSyncing;
- (BOOL)isAutoSyncing;
- (void)setIsSyncing:(BOOL)fp8;
- (void)dealloc;
- (id)init;

@end

