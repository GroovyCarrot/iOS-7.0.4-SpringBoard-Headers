/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBBulletinDateLabel-Protocol.h"

@class NSDate, NSTimer;

@interface SBDefaultDateLabel : _ABAddressBookCopyLocalizedLabel <SBBulletinDateLabel>
{
    NSDate *_timeZoneRelativeStartDate;
    NSDate *_timeZoneRelativeEndDate;
    BOOL _allDay;
    BOOL _isTimestamp;
    NSDate *_effectiveAllDayStartDate;
    NSDate *_effectiveAllDayLastValidDate;
    NSDate *_effectiveAllDayEndDate;
    BOOL _effectiveAllDay;
    BOOL _isCoalescingUpdates;
    BOOL _needsUpdateFromCoalesce;
    NSTimer *_updateTimer;
    id <SBDateLabelDelegate> _delegate;
    int _labelType;
}

+ (id)_currentCalendar;
- (BOOL)isTimestamp;
- (void)setLabelType:(int)fp8;
- (int)labelType;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (BOOL)isAllDay;
- (void)stopCoalescingUpdates;
- (void)startCoalescingUpdates;
- (void)update;
- (void)_forceUpdate;
- (void)updateTextIfNecessary;
- (void)_updateTimerFired:(id)fp8;
- (void)updateTextIfNecessary:(BOOL)fp8;
- (id)constructLabelString;
- (id)_constructNonAllDayLabelStringWithDate:(id)fp8 startTime:(double)fp12 startIsToday:(BOOL)fp20 sameDayDates:(BOOL)fp24 eventOngoing:(BOOL)fp28 withCurrentDate:(id)fp32 forStartLabel:(BOOL)fp36;
- (BOOL)isEffectiveAllDay;
- (BOOL)isDateWithinEffectiveAllDayRange:(id)fp8;
- (id)_localDateForDate:(id)fp8 inTimeZone:(id)fp12;
- (void)_updateEffectiveAllDayTimes;
- (void)_resetEffectiveAllDayState:(BOOL)fp8;
- (void)setEndDate:(id)fp8 withTimeZone:(id)fp12;
- (void)setStartDate:(id)fp8 withTimeZone:(id)fp12;
- (void)setTimeZoneRelativeEndDate:(id)fp8;
- (void)setTimeZoneRelativeStartDate:(id)fp8 absoluteStartDate:(id)fp12;
- (void)_configureTimer;
- (void)_invalidateTimer;
- (void)setIsTimestamp:(BOOL)fp8;
- (void)setAllDay:(BOOL)fp8;
- (void)prepareForReuse;
- (void)dealloc;
- (id)init;

@end

