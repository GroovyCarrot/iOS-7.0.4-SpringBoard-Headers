/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertView.h"

#import "SBPowerDownViewInterface-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSTimer, SBFGlintyStringView, SBFakeStatusBarView, SBShapeView, UILabel, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView, _UIBackdropView;

@interface SBPowerDownView : SBAlertView <SBPowerDownViewInterface, UIGestureRecognizerDelegate>
{
    NSTimer *_autoDismissTimer;
    id <SBPowerDownViewDelegate> _delegate;
    SBFakeStatusBarView *_fakeStatusBarView;
    SBShapeView *_darkeningOutsideBarsUnderlay;
    SBShapeView *_darkeningInsideBarsUnderlay;
    UIView *_topContainer;
    UIView *_topBar;
    SBFGlintyStringView *_topBarLabel;
    UIView *_topBarLabelBackgroundView;
    _UIBackdropView *_topBarBackground;
    UIView *_bottomContainer;
    UIView *_bottomBar;
    UILabel *_bottomBarLabel;
    _UIBackdropView *_bottomBarBackground;
    BOOL _addedFakeStatusBar;
    BOOL _hiddenLockScreenForeground;
    UIPanGestureRecognizer *_slideGestureRecognizer;
    UILongPressGestureRecognizer *_touchGestureRecognizer;
    struct CGPoint _slideGestureInitialPoint;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)_insideBarsPath;
- (id)_outsideBarsPath;
- (void)_animatePowerDown;
- (void)_slideCompleted:(BOOL)fp8;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)_resetAutoDismissTimer;
- (void)_cancelAutoDismissTimer;
- (id)_newDarkeningShapeView:(struct CGRect)fp8;
- (void)_removeFakeStatusBarIfNecessary;
- (void)_addFakeStatusBarIfNecessary;
- (id)_lockScreenView;
- (float)_bottomBarOffset;
- (float)_topBarOffset;
- (BOOL)gestureRecognizer:(id)fp8 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)fp12;
- (void)_touchGestureRecognizer:(id)fp8;
- (void)_slideGestureRecognizer:(id)fp8;
- (void)layoutForInterfaceOrientation:(int)fp8;
- (BOOL)isSupportedInterfaceOrientation:(int)fp8;
- (void)animateOut;
- (void)animateIn;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

