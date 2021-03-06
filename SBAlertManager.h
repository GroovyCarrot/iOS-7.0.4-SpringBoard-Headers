/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMapTable, NSMutableArray, SBAlertWindow, UIScreen;

@interface SBAlertManager : _ABAddressBookCopyLocalizedLabel
{
    UIScreen *_screen;
    SBAlertWindow *_alertWindow;
    SBAlertWindow *_deferredAlertWindow;
    SBAlertWindow *_lockAlertWindow;
    NSMutableArray *_alerts;
    NSMapTable *_observers;
    BOOL _deactivatingAllAlerts;
    id <SBAlertManagerDelegate> _delegate;
    struct {
        unsigned int deactivateDismissed:1;
        unsigned int newWindow:1;
    } _delegateFlags;
}

- (void)alertIsReadyToBeRemovedFromView:(id)fp8;
- (void)alertIsReadyToBeDeactivated:(id)fp8;
- (void)alert:(id)fp8 requestsBackgroundStyleChangeWithAnimationFactory:(id)fp12;
- (void)_makeAlertWindowOpaque:(BOOL)fp8;
- (void)_resetAlertWindowOpacity;
- (void)_removeFromView:(id)fp8;
- (void)_deactivate:(id)fp8;
- (void)_activate:(id)fp8;
- (void)removeObserver:(id)fp8;
- (void)addObserver:(id)fp8;
- (id)debugDescription;
- (id)description;
- (void)applicationFinishedAnimatingBeneathAlert;
- (void)applicationWillAnimateActivation;
- (void)deactivateAlertsAfterLaunch;
- (void)setAlertsShouldDeactivateAfterLaunch;
- (void)deactivateAll;
- (void)deactivate:(id)fp8;
- (void)activate:(id)fp8;
- (id)allAlerts;
- (BOOL)containsAlert:(id)fp8;
- (id)stackedAlertsIncludingActiveAlert:(BOOL)fp8;
- (BOOL)hasStackedAlerts;
- (id)activeAlert;
- (id)windows;
- (id)windowForAlert:(id)fp8;
- (id)activeAlertWindow;
- (id)topMostWindow;
- (id)screen;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)dealloc;
- (id)init;
- (id)initWithScreen:(id)fp8;

@end

