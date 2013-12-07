/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBControlCenterObserver-Protocol.h"
#import "SBUIControlCenterControlObserver-Protocol.h"

@class NSMutableArray, NSMutableDictionary, SBChevronView, SBUIControlCenterLabel;

@interface SBControlCenterGrabberView : _ABAddressBookCopyLocalizedLabel <SBUIControlCenterControlObserver, SBControlCenterObserver>
{
    SBChevronView *_chevronView;
    SBUIControlCenterLabel *_statusLabel;
    SBUIControlCenterLabel *_statusLabel2;
    BOOL _statusBusy;
    NSMutableDictionary *_statusByReason;
    NSMutableArray *_statusReasonQueue;
}

+ (float)defaultHeightForOrientation:(int)fp8;
- (void)controlConfigurationDidChangeForState:(int)fp8;
- (void)controlAppearanceDidChangeForState:(int)fp8;
- (void)controlCenterDidFinishTransition;
- (void)controlCenterWillBeginTransition;
- (void)controlCenterDidDismiss;
- (void)controlCenterWillPresent;
- (void)layoutSubviews;
- (struct CGRect)_grabberRect;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (void)updateStatusText:(id)fp8 reason:(id)fp12;
- (void)_animateNextStatus;
- (void)_didPresentStatus;
- (void)_dequeueStatus;
- (id)_popNextStatus;
- (BOOL)_hasPendingStatus;
- (id)chevronView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

