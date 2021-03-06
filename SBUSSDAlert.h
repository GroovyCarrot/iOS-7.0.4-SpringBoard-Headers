/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlert.h"

@class NSTimer;

@interface SBUSSDAlert : SBAlert
{
    unsigned int _receivedString:1;
    unsigned int _dismissOnActivate:1;
    NSTimer *_delayedDismissTimer;
}

+ (void)_newSIM:(id)fp8;
+ (void)_daemonRestart:(id)fp8;
+ (id)errorStringForCode:(id)fp8;
+ (void)test;
+ (void)registerForAlerts;
+ (void)registerForSettingsAlerts;
- (void)deactivate;
- (void)activate;
- (void)_delayedDismiss;
- (void)setDismissOnActivate:(BOOL)fp8;
- (BOOL)receivedString;
- (BOOL)sentResponse;
- (BOOL)allowsResponse;
- (void)USSDStringAvailable:(id)fp8 allowsResponse:(BOOL)fp12;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)dealloc;

@end

