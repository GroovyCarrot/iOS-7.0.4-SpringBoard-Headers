/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBBulletinDateLabel-Protocol.h"

@class NSTimer;

@interface SBBulletinTimerDateLabel : _ABAddressBookCopyLocalizedLabel <SBBulletinDateLabel>
{
    double _fireTime;
    NSTimer *_tickTimer;
    BOOL _allDay;
    id <SBDateLabelDelegate> _delegate;
    int _labelType;
}

+ (id)unitFont;
+ (id)digitFont;
- (void)setAllDay:(BOOL)fp8;
- (BOOL)isAllDay;
- (void)setLabelType:(int)fp8;
- (int)labelType;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)prepareForReuse;
- (void)setIsTimestamp:(BOOL)fp8;
- (BOOL)isTimestamp;
- (void)setEndDate:(id)fp8 withTimeZone:(id)fp12;
- (void)_tickTimerFired:(id)fp8;
- (void)setStartDate:(id)fp8 withTimeZone:(id)fp12;
- (void)_updateText;
- (id)_formatDuration:(double)fp8;
- (void)dealloc;
- (void)_invalidateTimer;

@end

