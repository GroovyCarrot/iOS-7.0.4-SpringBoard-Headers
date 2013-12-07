/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "UIAlertViewDelegate-Protocol.h"

@class SBApplicationIcon;

@interface SBAppProfileNotTrustedAlertItem : _ABAddressBookCopyLocalizedLabel <UIAlertViewDelegate>
{
    SBApplicationIcon *_icon;
    BOOL _launchApp;
}

- (BOOL)dismissOnLock;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)didDeactivateForReason:(int)fp8;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)dealloc;
- (id)initWithIcon:(id)fp8;

@end
