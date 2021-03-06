/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconObserver-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSTimer, SBCloseBoxView, SBFParallaxSettings, SBFolderIconBackgroundView, SBIcon, SBIconImageCrossfadeView, SBIconImageView, UIView, UIView<SBIconAccessoryView>, _UILegibilitySettings, _UILegibilityView;

@interface SBIconView : _ABAddressBookCopyLocalizedLabel <_UISettingsKeyObserver, SBIconObserver>
{
    SBIcon *_icon;
    int _iconLocation;
    UIView *_currentImageView;
    SBIconImageView *_iconImageView;
    SBIconImageCrossfadeView *_crossfadeView;
    UIView<SBIconAccessoryView> *_accessoryView;
    SBCloseBoxView *_closeBox;
    SBFParallaxSettings *_closeBoxParallaxSettings;
    struct CGPoint _wallpaperRelativeCloseBoxCenter;
    _UILegibilityView *_labelView;
    UIView *_updatedMark;
    SBFolderIconBackgroundView *_dropGlow;
    unsigned int _drawsLabel:1;
    unsigned int _isEditing:1;
    unsigned int _isPaused:1;
    unsigned int _isGrabbed:1;
    unsigned int _isOverlapping:1;
    unsigned int _refusesRecipientStatus:1;
    unsigned int _highlighted:1;
    unsigned int _launchDisabled:1;
    unsigned int _isJittering:1;
    unsigned int _allowJitter:1;
    unsigned int _touchDownInIcon:1;
    unsigned int _hideLabel:1;
    unsigned int _hideUpdatedMark;
    struct CGPoint _unjitterPoint;
    struct CGPoint _grabPoint;
    NSTimer *_longPressTimer;
    struct CGRect _visibleImageRect;
    id <SBIconViewDelegate> _delegate;
    id <SBIconViewObserver> _observer;
    _UILegibilitySettings *_legibilitySettings;
    float _iconImageAlpha;
    float _iconAccessoryAlpha;
    float _iconLabelAlpha;
    struct CGPoint _wallpaperRelativeImageCenter;
}

+ (id)_jitterTransformAnimation;
+ (id)_jitterPositionAnimation;
+ (struct CGSize)maxLabelSize;
+ (struct CGRect)_rectForLayoutMetric:(int)fp8;
+ (struct CGSize)defaultVisibleIconImageSize;
+ (struct CGPoint)defaultIconImageCenter;
+ (struct CGSize)defaultIconImageSize;
+ (float)_labelHeight;
+ (struct CGSize)defaultIconSize;
+ (float)updatedMarkRightMargin;
+ (BOOL)canShowUpdatedMark;
+ (int)_defaultIconFormat;
- (struct CGPoint)wallpaperRelativeImageCenter;
- (float)iconLabelAlpha;
- (float)iconAccessoryAlpha;
- (float)iconImageAlpha;
- (id)legibilitySettings;
- (int)location;
- (void)setObserver:(id)fp8;
- (id)observer;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)iconLaunchEnabledDidChange:(id)fp8;
- (void)iconAccessoriesDidUpdate:(id)fp8;
- (BOOL)_shouldAnimatePropertyWithKey:(id)fp8;
- (void)_updateProgressAnimated:(BOOL)fp8;
- (void)prepareForRecycling;
- (void)settings:(id)fp8 changedValueForKey:(id)fp12;
- (BOOL)_delegateTapAllowed;
- (void)_delegateTouchEnded:(BOOL)fp8;
- (struct UIEdgeInsets)snapshotEdgeInsets;
- (BOOL)pointInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (void)_closeBoxTapped;
- (BOOL)_isShowingCloseBox;
- (void)_updateCloseBoxAnimated:(BOOL)fp8;
- (void)_applyEditingStateAnimated:(BOOL)fp8;
- (BOOL)isEditing;
- (void)setIsEditing:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setIsEditing:(BOOL)fp8;
- (void)setTouchDownInIcon:(BOOL)fp8;
- (BOOL)isTouchDownInIcon;
- (void)touchesEnded:(id)fp8 withEvent:(id)fp12;
- (void)touchesMoved:(id)fp8 withEvent:(id)fp12;
- (void)touchesBegan:(id)fp8 withEvent:(id)fp12;
- (void)touchesCancelled:(id)fp8 withEvent:(id)fp12;
- (void)cancelLongPressTimer;
- (void)longPressTimerFired;
- (void)cleanupAfterImageCrossfade;
- (void)setImageCrossfadeMorphFraction:(float)fp8;
- (void)setImageCrossfadeFadeFraction:(float)fp8;
- (void)prepareToCrossfadeImageWithView:(id)fp8 maskCorners:(BOOL)fp12 trueCrossfade:(BOOL)fp16 anchorPoint:(struct CGPoint)fp20;
- (void)prepareToCrossfadeImageWithView:(id)fp8 maskCorners:(BOOL)fp12 trueCrossfade:(BOOL)fp16;
- (id)dropGlow;
- (void)removeDropGlow;
- (void)showDropGlow:(BOOL)fp8;
- (void)prepareDropGlow;
- (void)setIsOverlapping:(BOOL)fp8;
- (BOOL)isGrabbed;
- (void)setIsGrabbed:(BOOL)fp8;
- (double)grabDurationForEvent:(id)fp8;
- (BOOL)canReceiveGrabbedIcon:(id)fp8;
- (void)setRefusesRecipientStatus:(BOOL)fp8;
- (void)setIconPosition:(struct CGPoint)fp8;
- (void)removeAllIconAnimations;
- (void)setAllowJitter:(BOOL)fp8;
- (void)_updateJitter;
- (void)setFrame:(struct CGRect)fp8;
- (BOOL)isInDock;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)isHighlighted;
- (BOOL)allowsTapWhileEditing;
- (void)_updateBrightness;
- (BOOL)pointMostlyInside:(struct CGPoint)fp8 withEvent:(id)fp16;
- (id)_automationID;
- (void)_createAccessoryViewIfNecessary;
- (void)_updateAccessoryViewWithAnimation:(BOOL)fp8;
- (void)_updateIconImageViewAnimated:(BOOL)fp8;
- (void)_updateUpdatedMark;
- (id)_legibilitySettingsWithPrimaryColor:(id)fp8;
- (id)_legibilitySettingsWithParameters:(id)fp8;
- (void)setLegibilitySettings:(id)fp8;
- (void)_updateLabel;
- (id)_labelImageParameters;
- (void)invalidateLabelLayoutGeometry;
- (void)_updateAdaptiveColors;
- (void)setSuppressesBlurryBackgroundChanges:(BOOL)fp8;
- (void)setWallpaperRelativeImageCenter:(struct CGPoint)fp8;
- (id)_labelImage;
- (id)_iconImageView;
- (struct CGPoint)_centerForCloseBoxRelativeToVisibleImageFrame:(struct CGRect)fp8;
- (struct CGPoint)_centerForCloseBox;
- (struct CGRect)_frameForAccessoryView;
- (struct CGRect)_frameForUpdatedMarkWithLabelFrame:(struct CGRect)fp8;
- (struct CGRect)_frameForLabel;
- (float)_labelVerticalOffset;
- (struct CGRect)_frameForImageView;
- (void)layoutSubviews;
- (void)setUpdatedMarkHidden:(BOOL)fp8;
- (void)setLabelHidden:(BOOL)fp8;
- (void)_applyIconLabelAlpha:(float)fp8;
- (void)setIconLabelAlpha:(float)fp8;
- (void)_applyIconAccessoryAlpha:(float)fp8;
- (void)setIconAccessoryAlpha:(float)fp8;
- (void)_applyIconImageAlpha:(float)fp8;
- (void)setIconImageAlpha:(float)fp8;
- (void)setIconImageAndAccessoryAlpha:(float)fp8;
- (struct CGSize)iconImageVisibleSize;
- (struct CGPoint)iconImageCenter;
- (struct CGRect)iconImageFrame;
- (id)iconImageSnapshot;
- (void)setLocation:(int)fp8;
- (void)swapInIcon:(id)fp8;
- (void)setIcon:(id)fp8;
- (void)_setIcon:(id)fp8 animated:(BOOL)fp12;
- (void)setPaused:(BOOL)fp8;
- (id)icon;
- (void)dealloc;
- (id)initWithDefaultSize;

@end

