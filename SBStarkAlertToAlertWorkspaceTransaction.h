/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBStarkWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkAlertToAlertWorkspaceTransaction : SBStarkWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    BOOL _activation;
}

- (BOOL)selfStarkAlertDidDeactivate:(id)fp8;
- (BOOL)selfStarkAlertWillDeactivate:(id)fp8;
- (BOOL)selfStarkAlertDidActivate:(id)fp8 overAlerts:(id)fp12;
- (BOOL)selfStarkAlertWillActivate:(id)fp8 overAlerts:(id)fp12;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithWorkspace:(id)fp8 mainScreenAlertManager:(id)fp12 starkScreenController:(id)fp16 activatingAlert:(id)fp20 deactivatingAlert:(id)fp24 activation:(BOOL)fp28;
- (id)initDeactivationWithWorkspace:(id)fp8 mainScreenAlertManager:(id)fp12 starkScreenController:(id)fp16 from:(id)fp20 to:(id)fp24;
- (id)initActivationWithWorkspace:(id)fp8 mainScreenAlertManager:(id)fp12 starkScreenController:(id)fp16 from:(id)fp20 to:(id)fp24;

@end
