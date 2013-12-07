/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBUIActiveOrientationObserver-Protocol.h"

@class NSMutableSet, SBAppSliderWindow, UIViewController;

@interface SBAppSliderWindowController : _ABAddressBookCopyLocalizedLabel <SBUIActiveOrientationObserver>
{
    SBAppSliderWindow *_window;
    UIViewController *_rootViewController;
    int _trueWindowOrientation;
    int _overrideWindowOrientation;
    NSMutableSet *_rotationPreventionReasons;
}

- (void)activeInterfaceOrientationDidChangeToOrientation:(int)fp8 willAnimateWithDuration:(double)fp12 fromOrientation:(int)fp20;
- (void)activeInterfaceOrientationWillChangeToOrientation:(int)fp8;
- (void)_rotateIfNecessaryTo:(int)fp8 withDuration:(double)fp12 forOverride:(BOOL)fp20;
- (void)_setTrueWindowOrientation:(int)fp8;
- (void)_setOverrideWindowOrientation:(int)fp8;
- (BOOL)_shouldAllowRotation:(BOOL)fp8;
- (BOOL)_hasOrientationOverride;
- (void)setAllowRotation:(BOOL)fp8 forReason:(id)fp12;
- (void)clearOverrideWindowOrientation;
- (void)overrideWindowOrientation:(int)fp8;
- (int)windowOrientationWithoutOverrides;
- (int)windowOrientation;
- (void)_windowDidBecomeVisible:(id)fp8;
- (id)window;
- (void)setRootViewController:(id)fp8;
- (id)rootViewController;
- (void)dealloc;
- (id)initWithRootViewController:(id)fp8;

@end
