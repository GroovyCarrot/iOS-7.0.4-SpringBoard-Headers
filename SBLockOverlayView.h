/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBInteractionPassThroughView.h"

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;

@interface SBLockOverlayView : SBInteractionPassThroughView
{
    id <SBLockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    BOOL _hidesLockContent;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    unsigned int _style;
    _UILegibilitySettings *_legibilitySettings;
}

- (id)legibilitySettings;
- (unsigned int)style;
- (BOOL)hidesLockContent;
- (id)underlayPropertiesFactory;
- (id)actionButton;
- (id)subtitleLabel;
- (id)titleLabel;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (float)_maxLabelWidth;
- (void)_sizeView:(id)fp8 forFixedWith:(BOOL)fp12;
- (unsigned int)_numberOfLinesForText:(id)fp8 font:(id)fp12 size:(struct CGSize)fp16;
- (void)_buttonPressed;
- (id)_actionFont;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)layoutSubviews;
- (id)_legibilitySettingsForStyle:(unsigned int)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 style:(unsigned int)fp24;
- (id)initWithFrame:(struct CGRect)fp8;

@end
