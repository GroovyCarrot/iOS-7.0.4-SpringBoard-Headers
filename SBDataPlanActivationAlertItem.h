/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBDataPlanAccountAlertItem.h"

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem
{
    BOOL _newAccount;
    BOOL _promptToDisable;
}

- (void)setNewAccount:(BOOL)fp8;
- (BOOL)isNewAccount;
- (void)alertView:(id)fp8 clickedButtonAtIndex:(int)fp12;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (id)initWithAccountURL:(id)fp8 newAccount:(BOOL)fp12 promptToDisable:(BOOL)fp16;

@end

