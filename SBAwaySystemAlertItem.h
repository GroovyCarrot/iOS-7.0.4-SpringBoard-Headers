/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAwayListItem.h"

@class NSString, SBAlertItem, UIImage;

@interface SBAwaySystemAlertItem : SBAwayListItem
{
    SBAlertItem *_currentAlert;
    NSString *_title;
    UIImage *_appImage;
    NSString *_message;
    int _displayedButtonIndex;
    BOOL _isAlarm;
}

- (BOOL)isAlarm;
- (void)buttonPressed;
- (id)sortDate;
- (id)iconImage;
- (id)title;
- (id)message;
- (void)setCurrentAlert:(id)fp8;
- (id)currentAlert;
- (void)dealloc;
- (id)initWithSystemAlert:(id)fp8;
- (id)init;

@end

