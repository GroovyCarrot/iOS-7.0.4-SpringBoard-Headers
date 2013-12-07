/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class UIColor;

@interface SBControlCenterSettings : _ABAddressBookCopyLocalizedLabel
{
    BOOL _highlightUsesPlusL;
    BOOL _backgroundDarkensCC;
    float _controlAlpha;
    float _controlAlpha1x;
    float _disabledAlpha;
    float _disabledAlpha1x;
    float _highlightAlpha;
    float _glowAlpha;
    UIColor *_highlightColor;
    float _bounceFriction;
    float _backgroundColorAlpha;
}

+ (id)settingsControllerModule;
- (void)setBackgroundColorAlpha:(float)fp8;
- (float)backgroundColorAlpha;
- (void)setBackgroundDarkensCC:(BOOL)fp8;
- (BOOL)backgroundDarkensCC;
- (void)setBounceFriction:(float)fp8;
- (float)bounceFriction;
- (void)setHighlightColor:(id)fp8;
- (id)highlightColor;
- (void)setGlowAlpha:(float)fp8;
- (float)glowAlpha;
- (void)setHighlightUsesPlusL:(BOOL)fp8;
- (BOOL)highlightUsesPlusL;
- (void)setHighlightAlpha:(float)fp8;
- (float)highlightAlpha;
- (void)setDisabledAlpha1x:(float)fp8;
- (float)disabledAlpha1x;
- (void)setDisabledAlpha:(float)fp8;
- (float)disabledAlpha;
- (void)setControlAlpha1x:(float)fp8;
- (float)controlAlpha1x;
- (void)setControlAlpha:(float)fp8;
- (float)controlAlpha;
- (float)resolvedDisabledAlpha;
- (float)resolvedControlAlpha;
- (void)setDefaultValues;

@end

