/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class SBAwayBulletinListItem, SBLockOverlayView;

@interface SBLockScreenFullscreenBulletinViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockOverlayView *_bulletinView;
    SBAwayBulletinListItem *_bulletinItem;
}

- (void)setBulletinItem:(id)fp8;
- (id)bulletinItem;
- (void)handleTapGestureFromView:(id)fp8;
- (void)updateContent;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

