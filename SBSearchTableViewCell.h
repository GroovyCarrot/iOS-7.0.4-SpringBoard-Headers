/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSOperation, UIImageView, UILabel, UIView;

@interface SBSearchTableViewCell : _ABAddressBookCopyLocalizedLabel
{
    BOOL _badged;
    BOOL _starred;
    BOOL _isFirstInSection;
    BOOL _isLastInSection;
    BOOL _hasImage;
    BOOL _aboveSelectedCell;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_auxiliaryTitleLabel;
    UILabel *_auxiliarySubtitleLabel;
    UILabel *_summaryLabel;
    UIImageView *_titleImageView;
    UIImageView *_badgeImageView;
    UIImageView *_starImageView;
    NSOperation *_fetchImageOperation;
    UIView *_background;
    UIView *_clippingContainer;
    UIView *_separatorView;
    BOOL _hasRoundedImage;
    BOOL _shouldKnockoutImage;
}

+ (float)summaryBaselineOriginForContentSizeCategory:(id)fp8;
+ (float)subtitleBaselineOriginForContentSizeCategory:(id)fp8;
+ (float)titleBaselineOriginForContentSizeCategory:(id)fp8;
+ (float)rowHeightForPreferredContentSizeWithNumberOfSummaryLines:(int)fp8;
+ (void)resetContentSizeCache;
+ (id)starImage;
+ (id)unreadImage;
+ (id)selectedTextColor;
+ (id)secontaryTextColor;
+ (id)maskedSelectedBackgroundColor;
+ (id)unmaskedSelectedBackgroundColor;
+ (id)backgroundColor;
+ (id)lineColor;
+ (void)initialize;
- (void)setShouldKnockoutImage:(BOOL)fp8;
- (BOOL)shouldKnockoutImage;
- (void)setHasRoundedImage:(BOOL)fp8;
- (BOOL)hasRoundedImage;
- (void)setFetchImageOperation:(id)fp8;
- (id)fetchImageOperation;
- (BOOL)isAboveSelectedCell;
- (void)setHasImage:(BOOL)fp8;
- (BOOL)hasImage;
- (void)setLastInSection:(BOOL)fp8;
- (BOOL)isLastInSection;
- (void)setFirstInSection:(BOOL)fp8;
- (BOOL)isFirstInSection;
- (void)setStarred:(BOOL)fp8;
- (BOOL)isStarred;
- (void)setBadged:(BOOL)fp8;
- (BOOL)isBadged;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)setSelected:(BOOL)fp8 animated:(BOOL)fp12;
- (void)updateSelectedState;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTitleImage:(id)fp8 animated:(BOOL)fp12;
- (id)_scriptingInfo;
- (void)clipToTopHeaderInTableView:(id)fp8;
- (void)updateBottomLine;
- (void)setAboveSelectedCell:(BOOL)fp8;
- (void)setIsLastInSection:(BOOL)fp8;
- (void)setSummary:(id)fp8 withNumberOfLines:(int)fp12;
- (void)setSummary:(id)fp8;
- (id)summary;
- (void)setAuxiliarySubtitle:(id)fp8;
- (id)auxiliarySubtitle;
- (void)setAuxiliaryTitle:(id)fp8;
- (id)auxiliaryTitle;
- (void)setSubtitle:(id)fp8;
- (id)subtitle;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end
