/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class NSString, SBLockOverlayView, SBSystemLocalNotificationAlert;

@interface SBLockScreenSystemAlertFullscreenViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBSystemLocalNotificationAlert *_alertItem;
    SBLockOverlayView *_fullscreenAlertView;
    NSString *_title;
    NSString *_actionText;
}

- (id)alertItem;
- (void)snoozeAlertItemWithReason:(int)fp8;
- (void)lockButtonPressed:(id)fp8;
- (void)handleTapGestureFromView:(id)fp8;
- (void)deactivateAlertItem;
- (void)performUnlockAction;
- (void)loadView;
- (void)dealloc;
- (id)initWithSystemNotification:(id)fp8 title:(id)fp12 subtitle:(id)fp16;

@end

