/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlertView.h"

#import "TPSuperBottomBarDelegateProtocol-Protocol.h"

@class TPLCDView, TPSuperBottomBar, UIImage, UIImageView, UIView;

@interface SBTTYPromptAlertDisplay : SBAlertView <TPSuperBottomBarDelegateProtocol>
{
    UIView *_containerView;
    UIImageView *_backgroundView;
    UIView *_voiceAndTTYWrapperView;
    TPSuperBottomBar *_cancelBar;
    TPLCDView *_promptView;
    BOOL _didAnimateIn;
    UIImage *_calleeImage;
    BOOL _isFullscreenImage;
    BOOL _imageSetupDone;
}

- (id)thumbnailImage;
- (id)backgroundImage;
- (void)computeImageInformation;
- (id)customizedTitleForItemInBar:(id)fp8 withActionType:(int)fp12;
- (void)bottomBarActionPerformed:(int)fp8 fromBar:(id)fp12;
- (void)_ignore:(id)fp8;
- (void)_chooseTTYMode:(id)fp8;
- (void)_chooseVoiceMode:(id)fp8;
- (void)_makeCall;
- (void)startAnimatingIn;
- (void)dismiss;
- (void)layoutForInterfaceOrientation:(int)fp8;
- (BOOL)isSupportedInterfaceOrientation:(int)fp8;
- (float)_lcdYOffset;
- (void)dealloc;

@end

