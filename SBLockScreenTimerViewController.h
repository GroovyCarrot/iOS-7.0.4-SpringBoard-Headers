/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "BBObserverDelegate-Protocol.h"

@class BBBulletin, BBObserver, NSDate, NSTimer;

@interface SBLockScreenTimerViewController : _ABAddressBookCopyLocalizedLabel <BBObserverDelegate>
{
    BOOL _enabled;
    NSTimer *_updateTimer;
    NSDate *_endDate;
    BBObserver *_observer;
    id <SBLockScreenTimerViewControllerDelegate> _delegate;
    BBBulletin *_timerBulletin;
}

- (void)setTimerBulletin:(id)fp8;
- (id)timerBulletin;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)observer:(id)fp8 purgeReferencesToBulletinID:(id)fp12;
- (void)observer:(id)fp8 noteInvalidatedBulletinIDs:(id)fp12;
- (void)observer:(id)fp8 removeBulletin:(id)fp12;
- (void)observer:(id)fp8 addBulletin:(id)fp12 forFeed:(unsigned int)fp16;
- (void)setContentAlpha:(float)fp8;
- (void)_updateTimerLabelView;
- (void)_updateTimerFired;
- (void)_startTimer;
- (void)_stopTimer;
- (BOOL)_isEndDateValid;
- (id)timerView;
- (void)setEndDate:(id)fp8;
- (void)setTimerHidden:(BOOL)fp8;
- (BOOL)isTimerActive;
- (void)setEnabled:(BOOL)fp8;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end
