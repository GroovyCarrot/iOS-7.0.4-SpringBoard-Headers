/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBAppSwitcherServices;

@interface SBAppSwitcherServiceManager : _ABAddressBookCopyLocalizedLabel
{
    SBAppSwitcherServices *_services;
}

+ (id)sharedInstance;
- (id)registeredServicesSnapshot;
- (void)unregisterService:(id)fp8;
- (void)registerService:(id)fp8;
- (void)dealloc;

@end

