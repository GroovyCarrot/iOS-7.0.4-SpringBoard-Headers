/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBNewsstand : _ABAddressBookCopyLocalizedLabel
{
}

+ (BOOL)useInternationalAssets;
+ (BOOL)addFakeApps;
+ (id)bundleIDToReplicate;
+ (BOOL)addManyIcons;
+ (BOOL)alwaysShowIconLabels;
+ (BOOL)disableIconSkew;
+ (BOOL)_newsstandStoreIsSupported;
+ (BOOL)_newsstandStoreIsRestricted;
+ (BOOL)newsstandStoreIsAvailable;
+ (BOOL)newsstandEnabled;
+ (void)_iconVisibilityDidChange:(id)fp8;
+ (void)_availableStoreItemKindsDidChange:(id)fp8;
+ (void)reloadDefaults;
+ (void)noteAppRestrictionsDidChange;
+ (void)_checkStoreSupport;
+ (void)_updateStoreAvailability;
+ (void)_loadDefaults;
+ (void)openNewsstandAppStore;
+ (void)initialize;

@end
