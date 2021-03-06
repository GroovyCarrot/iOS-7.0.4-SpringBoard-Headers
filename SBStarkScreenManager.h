/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBScreenConnectionHandler-Protocol.h"

@class NSMapTable, SBPasscodeLockDisableAssertion, SBSpuriousScreenUndimmingAssertion, SBStarkBackgroundProviderManager, SBStarkScreenController, SBStarkStatusBarStateProvider;

@interface SBStarkScreenManager : _ABAddressBookCopyLocalizedLabel <SBScreenConnectionHandler>
{
    SBStarkBackgroundProviderManager *_backgroundProviderManager;
    NSMapTable *_screenToControllerMap;
    SBStarkScreenController *_activeScreenController;
    SBStarkStatusBarStateProvider *_statusBarStateProvider;
    SBSpuriousScreenUndimmingAssertion *_spuriousScreenUndimmingAssertion;
    SBPasscodeLockDisableAssertion *_deviceLockDisableAssertion;
    id <SBStarkScreenManagerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)screenManager:(id)fp8 didTriggerConnectionHandlerEvent:(int)fp12 forScreen:(id)fp16;
- (BOOL)screenManager:(id)fp8 shouldBindConnectionHandlerToScreen:(id)fp12;
- (void)_promptUnlockIfNecessary;
- (void)_setActiveController:(id)fp8;
- (id)statusBarStateProvider;
- (BOOL)isStarkActive;
- (id)activeScreenController;
- (id)backgroundProviderManager;
- (void)dealloc;
- (id)init;

@end

