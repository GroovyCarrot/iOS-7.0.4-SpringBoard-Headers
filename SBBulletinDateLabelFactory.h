/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableDictionary;

@interface SBBulletinDateLabelFactory : _ABAddressBookCopyLocalizedLabel
{
    NSMutableDictionary *_recycledLabelsByStyle;
}

+ (id)sharedInstance;
- (void)_purgeRecycledLabels;
- (int)styleForLabel:(id)fp8;
- (void)recycleLabel:(id)fp8;
- (id)combinedDateLabelWithStartDate:(id)fp8 endDate:(id)fp12 timeZone:(id)fp16 allDay:(BOOL)fp20 forStyle:(int)fp24;
- (id)endLabelWithStartDate:(id)fp8 endDate:(id)fp12 timeZone:(id)fp16 allDay:(BOOL)fp20 forStyle:(int)fp24;
- (id)startLabelWithStartDate:(id)fp8 endDate:(id)fp12 timeZone:(id)fp16 allDay:(BOOL)fp20 forStyle:(int)fp24;
- (id)_labelWithStartDate:(id)fp8 endDate:(id)fp12 timeZone:(id)fp16 allDay:(BOOL)fp20 forStyle:(int)fp24 forType:(int)fp28;
- (void)dealloc;
- (id)init;

@end

