/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class UIFont;

@interface SBSearchTableViewContentSizeCache : _ABAddressBookCopyLocalizedLabel
{
    UIFont *_bodyFont;
    UIFont *_caption1Font;
    UIFont *_boldCaption1Font;
    UIFont *_footnoteFont;
    float _baseHeight;
    float _footnoteFontLineHeight;
    float _footnoteFontAscender;
    float _bodyFontLineHeight;
    float _bodyFontAscender;
    float _caption1FontLineHeight;
    float _caption1FontAscender;
    float _emphasizedCaption1FontLineHeight;
    float _emphasizedCaption1FontAscender;
    float _summaryLineHeight;
}

+ (id)sharedInstance;
- (void)setSummaryLineHeight:(float)fp8;
- (float)summaryLineHeight;
- (void)setEmphasizedCaption1FontAscender:(float)fp8;
- (float)emphasizedCaption1FontAscender;
- (void)setEmphasizedCaption1FontLineHeight:(float)fp8;
- (float)emphasizedCaption1FontLineHeight;
- (void)setCaption1FontAscender:(float)fp8;
- (float)caption1FontAscender;
- (void)setCaption1FontLineHeight:(float)fp8;
- (float)caption1FontLineHeight;
- (void)setBodyFontAscender:(float)fp8;
- (float)bodyFontAscender;
- (void)setBodyFontLineHeight:(float)fp8;
- (float)bodyFontLineHeight;
- (void)setFootnoteFontAscender:(float)fp8;
- (float)footnoteFontAscender;
- (void)setFootnoteFontLineHeight:(float)fp8;
- (float)footnoteFontLineHeight;
- (void)setBaseHeight:(float)fp8;
- (float)baseHeight;
- (void)setFootnoteFont:(id)fp8;
- (id)footnoteFont;
- (void)setBoldCaption1Font:(id)fp8;
- (id)boldCaption1Font;
- (void)setCaption1Font:(id)fp8;
- (id)caption1Font;
- (void)setBodyFont:(id)fp8;
- (id)bodyFont;
- (void)contentSizeDidChange;

@end

