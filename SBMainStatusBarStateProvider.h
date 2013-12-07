/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBStatusBarStateProvider.h"

#import "UIStatusBarStateObserver-Protocol.h"

@interface SBMainStatusBarStateProvider : SBStatusBarStateProvider <UIStatusBarStateObserver>
{
    BOOL _overridePercent;
    BOOL _killActivity;
    char _itemIsDisabled[25];
    char _itemWasDisabled[25];
    BOOL _timeEnabled;
    BOOL _timeCloaked;
    BOOL _allButBatteryCloaked;
    BOOL _telephonyAndBluetoothCloaked;
}

+ (id)sharedInstance;
- (void)statusBarStateProvider:(id)fp8 didPostStatusBarData:(const CDAnonymousStruct10 *)fp12 withActions:(int)fp16;
- (void)_composePostDataFromAggregatorData:(CDAnonymousStruct10 *)fp8;
- (BOOL)_shouldPostForVisitedItem:(int)fp8 withUpdates:(BOOL)fp12 toAggregatorData:(const CDAnonymousStruct10 *)fp16;
- (void)setTelephonyAndBluetoothItemsCloaked:(BOOL)fp8;
- (void)setAllItemsExceptBatteryCloaked:(BOOL)fp8;
- (void)setTimeCloaked:(BOOL)fp8;
- (void)enableTime:(BOOL)fp8 crossfade:(BOOL)fp12 crossfadeDuration:(double)fp16;
- (void)enableTime:(BOOL)fp8;
- (BOOL)isTimeEnabled;
- (void)_updateDisabledItems;
- (void)dealloc;
- (id)init;

@end

