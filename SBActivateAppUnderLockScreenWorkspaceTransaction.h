/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBToAppWorkspaceTransaction.h"

@class SBDisableActiveInterfaceOrientationChangeAssertion, SBLockScreenViewControllerBase;

@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction
{
    SBLockScreenViewControllerBase *_lockScreenController;
    SBDisableActiveInterfaceOrientationChangeAssertion *_disableActiveOrientationChangeAssertion;
}

- (BOOL)selfApplicationExited:(id)fp8;
- (BOOL)selfApplicationLaunchDidFail:(id)fp8;
- (BOOL)selfWorkspaceDidResume;
- (void)_suspendWorkspaceIfNecessary;
- (BOOL)_shouldWorkspaceBeSuspended;
- (BOOL)selfApplicationDidBecomeReceiver:(id)fp8 fromApplication:(id)fp12;
- (BOOL)selfApplicationActivated:(id)fp8;
- (BOOL)selfAlertDidActivate:(id)fp8 overAlerts:(id)fp12;
- (void)_alertDidActivate;
- (void)_handleAppActivationFailure;
- (void)_setupAndActivate;
- (void)_transactionComplete;
- (void)_commit;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
- (void)dealloc;
- (id)initWithWorkspace:(id)fp8 alertManager:(id)fp12 application:(id)fp16 lockScreenController:(id)fp20 activationHandler:(id)fp(null);
- (id)initWithWorkspace:(id)fp8 alertManager:(id)fp12 application:(id)fp16 lockScreenController:(id)fp20;

@end

