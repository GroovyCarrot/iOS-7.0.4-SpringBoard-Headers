/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBActivateAppUnderLockScreenWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class SBApplication, SBUIAnimationController;

@interface SBReturnToLockscreenWorkspaceTransaction : SBActivateAppUnderLockScreenWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBApplication *_fromApp;
    BOOL _workspaceAlreadyResumed;
    BOOL _animatedAppDeactivation;
    SBUIAnimationController *_animation;
    BOOL _suspendWorkspace;
}

- (void)animationControllerDidFinishAnimation:(id)fp8;
- (void)animationController:(id)fp8 willBeginAnimation:(BOOL)fp12;
- (BOOL)selfApplicationDidBecomeReceiver:(id)fp8 fromApplication:(id)fp12;
- (void)_alertDidActivate;
- (void)_transactionComplete;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)fp8 alertManager:(id)fp12 fromApplication:(id)fp16 toLockScreenController:(id)fp20 andApp:(id)fp24 activationHandler:(id)fp(null);
- (id)initWithWorkspace:(id)fp8 alertManager:(id)fp12 fromApplication:(id)fp16 toLockScreenController:(id)fp20 andApp:(id)fp24;

@end

