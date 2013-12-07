/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableSet;

@interface SBOrientationLockManager : _ABAddressBookCopyLocalizedLabel
{
    NSMutableSet *_lockOverrideReasons;
    int _userLockedOrientation;
}

+ (id)sharedInstance;
- (BOOL)_effectivelyLocked;
- (void)_updateLockStateWithOrientation:(int)fp8 forceUpdateHID:(BOOL)fp12 changes:(id)fp(null);
- (void)_updateLockStateWithChanges:(id)fp(null);
- (void)updateLockOverrideForCurrentDeviceOrientation;
- (BOOL)lockOverrideEnabled;
- (void)enableLockOverrideForReason:(id)fp8 forceOrientation:(int)fp12;
- (void)enableLockOverrideForReason:(id)fp8 suggestOrientation:(int)fp12;
- (void)setLockOverrideEnabled:(BOOL)fp8 forReason:(id)fp12;
- (int)userLockOrientation;
- (BOOL)isLocked;
- (void)unlock;
- (void)lock:(int)fp8;
- (void)lock;
- (void)dealloc;
- (id)init;
- (void)restoreStateFromPrefs;

@end

