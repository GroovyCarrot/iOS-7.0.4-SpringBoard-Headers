/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, SBApplication;

@interface SBApplicationActivationAssertion : _ABAddressBookCopyLocalizedLabel
{
    SBApplication *_app;
    NSString *_name;
}

- (void)setName:(id)fp8;
- (id)name;
- (id)application;
- (void)dealloc;
- (id)initWithApplication:(id)fp8 name:(id)fp12;

@end

