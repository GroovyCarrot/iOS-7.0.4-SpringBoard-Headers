/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBEdgeActivationAlertItem : _ABAddressBookCopyLocalizedLabel
{
    int _error;
    NSString *_reason;
    BOOL _suggestWiFi;
    int _settingsButtonIndex;
}

- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)_showNetworkPrefs;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)dealloc;
- (id)initWithErrorCode:(int)fp8 reason:(id)fp12 suggestWiFi:(BOOL)fp16;

@end

