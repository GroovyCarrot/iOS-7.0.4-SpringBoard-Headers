/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate-Protocol.h"

@class SBAlert, SBUIAnimationController;

@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    BOOL _activation;
    SBUIAnimationController *_animation;
    BOOL _animatingAlertDeactivation;
}

- (void)animationControllerDidFinishAnimation:(id)fp8;
- (void)animationController:(id)fp8 willBeginAnimation:(BOOL)fp12;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)fp8;
- (void)_handleFailure;
- (void)_transactionComplete;
- (void)_endAnimation;
- (BOOL)selfAlertDidDeactivate:(id)fp8;
- (BOOL)selfAlertWillDeactivate:(id)fp8;
- (BOOL)selfAlertDidActivate:(id)fp8 overAlerts:(id)fp12;
- (BOOL)selfAlertWillActivate:(id)fp8 overAlerts:(id)fp12;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithWorkspace:(id)fp8 alertManager:(id)fp12 activatingAlert:(id)fp16 deactivatingAlert:(id)fp20 activation:(BOOL)fp24;
- (id)initDeactivationWithWorkspace:(id)fp8 alertManager:(id)fp12 from:(id)fp16 to:(id)fp20;
- (id)initActivationWithWorkspace:(id)fp8 alertManager:(id)fp12 from:(id)fp16 to:(id)fp20;

@end

