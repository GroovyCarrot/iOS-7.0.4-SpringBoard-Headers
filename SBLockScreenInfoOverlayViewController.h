/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class NSString, SBLockScreenInfoOverlayView;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockScreenInfoOverlayView *_overlayView;
    NSString *_title;
}

- (void)handleTapGestureFromView:(id)fp8;
- (void)loadView;
- (void)dealloc;
- (id)initWithTitle:(id)fp8;

@end
