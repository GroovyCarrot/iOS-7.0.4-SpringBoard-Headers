/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem
{
    NSNumber *_remainingPortion;
}

- (void)setRemainingPortion:(id)fp8;
- (id)remainingPortion;
- (void)configure:(BOOL)fp8 requirePasscodeForActions:(BOOL)fp12;
- (void)dealloc;
- (id)initWithAccountURL:(id)fp8 usage:(id)fp12;

@end

