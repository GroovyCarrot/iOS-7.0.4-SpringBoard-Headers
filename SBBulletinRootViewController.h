/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBBulletinRootView, SBBulletinWindowController;

@interface SBBulletinRootViewController : _ABAddressBookCopyLocalizedLabel
{
    SBBulletinRootView *_rootView;
    SBBulletinWindowController *_windowController;
}

- (void)didRotateFromInterfaceOrientation:(int)fp8;
- (void)willAnimateRotationToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (void)willRotateToInterfaceOrientation:(int)fp8 duration:(double)fp12;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)fp8;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)wantsFullScreenLayout;
- (void)dismissViewController:(id)fp8 onView:(id)fp12;
- (void)presentViewController:(id)fp8 onView:(id)fp12;
- (void)dealloc;
- (void)loadView;
- (id)initWithBulletinWindowController:(id)fp8;

@end
