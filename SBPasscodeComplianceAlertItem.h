/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBPasscodeComplianceAlertItem : _ABAddressBookCopyLocalizedLabel
{
    NSString *_title;
    NSString *_message;
    NSString *_continueButtonTitle;
    NSString *_cancelButtonTitle;
}

- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (BOOL)shouldShowInLockScreen;
- (void)dealloc;
- (id)initWithTitle:(id)fp8 message:(id)fp12 continueButtonTitle:(id)fp16 cancelButtonTitle:(id)fp20;

@end

