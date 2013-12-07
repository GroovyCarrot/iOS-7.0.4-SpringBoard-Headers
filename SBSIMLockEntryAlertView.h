/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBPasscodeEntryAlertView.h"

#import "SBSIMLockEntryViewInterface-Protocol.h"
#import "SBUIPasscodeLockViewDelegate-Protocol.h"

@class NSString;

@interface SBSIMLockEntryAlertView : SBPasscodeEntryAlertView <SBUIPasscodeLockViewDelegate, SBSIMLockEntryViewInterface>
{
    NSString *_languageCode;
    NSString *_code;
}

- (void)passcodeLockViewCancelButtonPressed:(id)fp8;
- (void)passcodeLockViewPasscodeEntered:(id)fp8;
- (void)_doUnlock;
- (id)_failureLabel;
- (id)_failureTitle;
- (id)_pinAttemptsRemainingLabel;
- (void)_unlock;
- (id)_passcodeView;
- (void)alertDisplayWillBecomeVisible;
- (void)_dismissAnimationCompleted;
- (id)_buildPasscodeView;
- (void)setupUnlockAttemptState;
- (void)setupSuccess;
- (void)setupCurrentLockAttemptState;
- (void)setupFailureState;
- (id)label;
- (id)titleText;
- (id)localizedStringWithKey:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 languageCode:(id)fp24;

@end

