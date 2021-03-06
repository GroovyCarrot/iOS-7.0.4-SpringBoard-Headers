/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBAssistantObserver-Protocol.h"
#import "SBBulletinBusyClient-Protocol.h"
#import "SBBulletinWindowClient-Protocol.h"
#import "SBUIBannerTarget-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, SBBannerContextView, UIImage;

@interface SBBannerController : _ABAddressBookCopyLocalizedLabel <SBUIBannerTarget, SBAssistantObserver, SBBulletinWindowClient, SBBulletinBusyClient, UIGestureRecognizerDelegate>
{
    NSHashTable *_sources;
    NSMutableArray *_pendingBannerContextsNeedingRepop;
    UIImage *_bannerViewBackgroundImage;
    SBBannerContextView *_bannerView;
    BOOL _soundIsPlaying;
    BOOL _dismissalOverdue;
    BOOL _replaceDelayIsActive;
    BOOL _showingStickyDurationBanner;
    BOOL _suppressingBanners;
    BOOL _enableDelayActive;
    BOOL _assistantIsFullyVisible;
    BOOL _locked;
    int _activeDismissGestureType;
    int _overdueDismissReason;
    id _overdueCompletionBlock;
    BOOL _dismissingBannerForAssistantReveal;
    BOOL _dismissingBannerForAssistantDismiss;
    id _assistantRevealCompletionBlock;
    id _assistantDismissCompletionBlock;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)fp8;
- (BOOL)gestureRecognizerShouldBegin:(id)fp8;
- (struct CGRect)_bannerFrameForOrientation:(int)fp8;
- (void)_tearDownViewWithReason:(int)fp8;
- (void)_playSoundForContext:(id)fp8;
- (void)_performTransition:(int)fp8 withAnimation:(BOOL)fp12 context:(id)fp16 reason:(int)fp20 completion:(id)fp(null);
- (id)_newBannerViewForContext:(id)fp8;
- (id)_bannerViewBackgroundImage;
- (double)_durationForTransition:(int)fp8;
- (void)_fireCompletionBlockForBannerAnimationForAssistantDismissIfNecessary;
- (void)_fireCompletionBlockForBannerAnimationForAssistantRevealIfNecessary;
- (void)_setOverdueCompletionBlock:(id)fp(null);
- (void)_soundDidFinishPlayingForBannerContext:(id)fp8;
- (void)_dismissOverdueOrDequeueIfPossible;
- (void)_stopCurrentSound;
- (void)_replaceIntervalElapsed;
- (void)_dismissIntervalElapsed;
- (void)_tryToDismissWithAnimation:(BOOL)fp8 reason:(int)fp12 forceEvenIfBusy:(BOOL)fp16 completion:(id)fp(null);
- (void)_handleBannerTapGesture:(id)fp8;
- (void)_handleBannerPanGesture:(id)fp8;
- (void)_handleDismissGestureType:(int)fp8 withState:(int)fp12 displacement:(float)fp16 velocity:(float)fp20;
- (void)_updateDismissGestureState:(struct SBBannerDismissGestureState *)fp8 withDisplacement:(float)fp12 velocity:(float)fp16;
- (void)_presentBannerForContext:(id)fp8 reason:(int)fp12;
- (BOOL)_shouldPendStickyBannerContext:(id)fp8 withReason:(int)fp12;
- (BOOL)_dequeueBannerIfPossibleIgnoringStickyBanner:(BOOL)fp8 existingDismissReason:(int)fp12;
- (BOOL)_dequeueBannerIfPossible;
- (BOOL)_canDequeueIgnoringStickyBanner:(BOOL)fp8;
- (id)_dequeueNextBannerContext;
- (BOOL)_isItemShowable:(id)fp8 fromSource:(id)fp12;
- (void)_dequeueAfterDelayIfPossible;
- (void)_updateBannerSuppressionStateAndDequeueIfPossible:(BOOL)fp8 withDelay:(BOOL)fp12;
- (void)_updateBannerSuppressionState;
- (void)_removePendingContextsForSourceNeedingRepop:(id)fp8;
- (id)_pendingBannerContextForSourceNeedingRepop:(id)fp8;
- (void)_dismissBannerWithAnimation:(BOOL)fp8 reason:(int)fp12 forceEvenIfBusy:(BOOL)fp16 completion:(id)fp(null);
- (void)_lockStateChanged:(id)fp8;
- (void)assistant:(id)fp8 viewDidDisappear:(int)fp12;
- (void)assistant:(id)fp8 viewWillDisappear:(int)fp12;
- (void)assistant:(id)fp8 viewDidAppear:(int)fp12;
- (void)assistant:(id)fp8 viewWillAppear:(int)fp12;
- (void)bulletinWindowDidRotateFromOrientation:(int)fp8;
- (void)bulletinWindowIsAnimatingRotationToOrientation:(int)fp8 duration:(double)fp12;
- (void)bulletinWindowWillRotateToOrientation:(int)fp8 duration:(double)fp12;
- (void)bulletinWindowStoppedBeingBusy;
- (void)dismissCurrentBannerContextForSource:(id)fp8;
- (id)currentBannerContextForSource:(id)fp8;
- (void)signalSource:(id)fp8;
- (void)unregisterSource:(id)fp8;
- (void)registerSource:(id)fp8;
- (int)bannerTargetIdiom;
- (id)newBannerSnapshotViewRotatedForOrientation:(int)fp8;
- (void)setBannerAlpha:(float)fp8;
- (void)handleSystemDismissGestureWithState:(int)fp8 position:(struct CGPoint)fp12 velocity:(float)fp20;
- (BOOL)isTrackingDismissGesture;
- (void)dismissBannerWithAnimation:(BOOL)fp8 reason:(int)fp12 forceEvenIfBusy:(BOOL)fp16;
- (void)dismissBannerWithAnimation:(BOOL)fp8 reason:(int)fp12;
- (BOOL)isShowingBanner;
- (void)dealloc;
- (id)init;

@end

