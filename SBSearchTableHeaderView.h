/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, UILabel, UIView;

@interface SBSearchTableHeaderView : _ABAddressBookCopyLocalizedLabel
{
    UILabel *_titleLabel;
    UIView *_separatorView;
    NSString *_reuseIdentifier;
}

+ (float)heightForContentSizeCategory:(id)fp8;
+ (float)titleBaselineFromBottomForContentSizeCategory:(id)fp8;
+ (id)lineColor;
- (id)reuseIdentifier;
- (BOOL)isUserInteractionEnabled;
- (void)dealloc;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)fp8;

@end

