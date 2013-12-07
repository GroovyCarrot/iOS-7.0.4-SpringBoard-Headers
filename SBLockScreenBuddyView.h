/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLockOverlayView.h"

@class SBLockOverlayStylePropertiesFactory, UIButton, UIImageView, UILabel, UIView, _UILegibilitySettings;

@interface SBLockScreenBuddyView : SBLockOverlayView
{
    UILabel *_titleLabel;
    UIView *_logoImageContainer;
    UIImageView *_logoImageView;
    BOOL _usesWhiteLogo;
    int _viewState;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    _UILegibilitySettings *_legibilitySettings;
    id <SBLockScreenBuddyViewDelegate> _delegate;
    unsigned int _style;
    UIView *_activationInfoView;
    UIButton *_infoButton;
}

- (void)setInfoButton:(id)fp8;
- (id)infoButton;
- (id)activationInfoView;
- (unsigned int)style;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)legibilitySettings;
- (id)underlayPropertiesFactory;
- (void)layoutSubviews;
- (void)configureOverlayPropertiesForStyle:(unsigned int)fp8;
- (void)setStyle:(unsigned int)fp8;
- (BOOL)isFakeLogoHidden;
- (void)_toggleViewState;
- (void)setViewState:(int)fp8;
- (void)setTitleLanguage:(id)fp8;
- (void)setTitleString:(id)fp8;
- (void)setActivationInfoView:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 useWhiteLogo:(BOOL)fp24;

@end

