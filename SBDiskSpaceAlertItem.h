/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBDiskSpaceAlertItem : _ABAddressBookCopyLocalizedLabel
{
    int _usageButtonIndex;
}

- (BOOL)shouldShowInEmergencyCall;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)_showUsagePrefs;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)performUnlockAction;
- (id)init;

@end

