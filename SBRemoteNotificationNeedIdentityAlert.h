/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBApplication;

@interface SBRemoteNotificationNeedIdentityAlert : _ABAddressBookCopyLocalizedLabel
{
    SBApplication *_app;
}

- (BOOL)dismissOnModalDisplayActivation;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)dealloc;
- (id)initWithApplication:(id)fp8;

@end
