/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBDismissOnlyAlertItem : _ABAddressBookCopyLocalizedLabel
{
    NSString *_title;
    NSString *_body;
    double _autoDismissInterval;
}

- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)performUnlockAction;
- (id)bodyText;
- (id)title;
- (void)setBodyText:(id)fp8;
- (void)setTitle:(id)fp8;
- (void)setAutoDismissInterval:(double)fp8;
- (double)autoDismissInterval;
- (void)dealloc;
- (id)initWithTitle:(id)fp8 body:(id)fp12;

@end

