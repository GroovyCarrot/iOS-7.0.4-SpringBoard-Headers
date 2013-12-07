/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class UIImageView;

@interface SBHighlightView : _ABAddressBookCopyLocalizedLabel
{
    UIImageView *_highlight;
    float _highlightAlpha;
    float _highlightHeight;
}

+ (id)_highlightImageWithHeight:(float)fp8 alpha:(float)fp12;
- (float)highlightHeight;
- (float)highlightAlpha;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8 highlightAlpha:(float)fp24 highlightHeight:(float)fp28;

@end

