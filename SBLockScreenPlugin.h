/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, SBAwayViewPluginController, SBLockOverlayContext;

@interface SBLockScreenPlugin : _ABAddressBookCopyLocalizedLabel
{
    SBAwayViewPluginController *_controller;
    SBLockOverlayContext *_overlay;
    NSString *_bundleName;
}

- (void)setBundleName:(id)fp8;
- (id)bundleName;
- (void)setOverlay:(id)fp8;
- (id)overlay;
- (void)setController:(id)fp8;
- (id)controller;
- (void)dealloc;

@end

