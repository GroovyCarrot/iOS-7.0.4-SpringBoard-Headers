/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "MCProfileConnectionObserver-Protocol.h"

@class NSHashTable, NSMutableDictionary, NSMutableSet, NSSet;

@interface SBApplicationRestrictionController : _ABAddressBookCopyLocalizedLabel <MCProfileConnectionObserver>
{
    id <SBApplicationRestrictionDataSource> _dataSource;
    NSHashTable *_observers;
    NSMutableDictionary *_tagValidityMap;
    NSMutableDictionary *_validTagsByDisplayIdentifier;
    struct MGNotificationTokenStruct *_tagsNotificationToken;
    NSMutableSet *_enabledTags;
    NSMutableDictionary *_ratingRanksByDisplayIdentifier;
    BOOL _hasSMSCapability;
    NSSet *_restrictedDisplayIdentifiers;
    BOOL _showInternalApps;
    BOOL _hasHideNonDefaultSystemAppsCapability;
    BOOL _showAllSystemApps;
    BOOL _canPostRestrictionState;
}

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)fp8 userInfo:(id)fp12;
- (void)_postRestrictionStateToObservers:(id)fp8;
- (void)_postRestrictionState;
- (void)updateVisibilityPreferences;
- (void)updateRestrictions;
- (void)beginPostingChanges;
- (void)noteVisibilityStateDidChange;
- (void)noteApplicationIdentifiersDidChangeWithAdded:(id)fp8 modified:(id)fp12 removed:(id)fp16;
- (BOOL)isDisplayIdentifierRestricted:(id)fp8;
- (void)removeObserver:(id)fp8;
- (void)addObserver:(id)fp8;
- (void)dealloc;
- (id)init;
- (id)initWithDataSource:(id)fp8;

@end
