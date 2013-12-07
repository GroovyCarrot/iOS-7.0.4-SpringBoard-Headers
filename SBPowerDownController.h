/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlert.h"

#import "SBPowerDownViewDelegate-Protocol.h"

@class SBAlertView<SBPowerDownViewInterface>;

@interface SBPowerDownController : SBAlert <SBPowerDownViewDelegate>
{
    id _delegate;
    BOOL _isFront;
    SBAlertView<SBPowerDownViewInterface> *_powerDownView;
    id _orderOutCompletion;
}

+ (id)sharedInstance;
- (id)delegate;
- (void)setOrderOutCompletion:(id)fp(null);
- (id)orderOutCompletion;
- (void)_lockedOnTop;
- (void)_restoreIconListIfNecessary;
- (void)powerDownViewAnimateOutCompleted:(id)fp8;
- (void)powerDownViewRequestPowerDown:(id)fp8;
- (void)powerDownViewRequestCancel:(id)fp8;
- (BOOL)powerDownViewShouldHideStatusBar:(id)fp8;
- (double)autoLockTime;
- (void)deactivate;
- (void)activate;
- (BOOL)showsSpringBoardStatusBar;
- (BOOL)managesOwnStatusBarAtActivation;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (BOOL)hasTranslucentBackground;
- (void)cancel;
- (void)powerDown;
- (void)setDelegate:(id)fp8;
- (void)orderOutWithCompletion:(id)fp(null);
- (void)orderFront;
- (BOOL)isOrderedFront;
- (void)dealloc;
- (id)init;

@end

