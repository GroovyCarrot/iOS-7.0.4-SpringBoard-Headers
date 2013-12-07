/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBDismissOnlyAlertItem.h"

@class NSString, UITextView, UIView;

@interface SBActivationInfoAlertItem : SBDismissOnlyAlertItem
{
    UIView *_accessoryView;
    UITextView *_textView;
    NSString *_meid;
    NSString *_imei;
    NSString *_iccid;
    float _alertHeight;
}

+ (id)activeItem;
- (id)_formattedIMEI;
- (id)_formattedICCID;
- (BOOL)allowInSetup;
- (BOOL)forcesModalAlertAppearance;
- (void)didDeactivateForReason:(int)fp8;
- (void)willActivate;
- (void)_simStatusChanged:(id)fp8;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)_updateTextView;
- (void)dealloc;
- (id)init;

@end
