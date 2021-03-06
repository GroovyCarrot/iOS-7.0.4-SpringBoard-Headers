/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBDateLabelDelegate-Protocol.h"

@class UIButton, UIImage, UIImageView, UILabel, UILabel<SBBulletinDateLabel>, UIView;

@interface SBNotificationCell : _ABAddressBookCopyLocalizedLabel <SBDateLabelDelegate>
{
    UIView *_realContentView;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_subtitleLabel;
    UILabel *_secondaryLabel;
    UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
    UILabel<SBBulletinDateLabel> *_eventDateLabel;
    UIButton *_actionButton;
    UIImageView *_attachmentView;
    struct CGSize _attachmentSize;
    BOOL _secondaryTextNumberOfLinesIsUpperBound;
    unsigned int _secondaryTextNumberOfLines;
    float _secondaryTextHeight;
    UIImage *_icon;
}

+ (float)paddingBetweenTitleAndRelevanceDate;
+ (float)xInsetForOrientation:(int)fp8;
+ (float)contentWidthWithRowWidth:(float)fp8 andAttachmentSize:(struct CGSize)fp12;
+ (void)setupEventDateLabel:(id)fp8;
+ (void)setupRelevanceDateLabel:(id)fp8;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForSubtitleText;
+ (id)defaultColorForPrimaryText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForSubtitleText;
+ (id)defaultFontForPrimaryText;
+ (float)actionButtonPaddingLeft;
+ (float)iconPaddingLeft;
+ (float)primaryPaddingRight;
+ (float)primaryPaddingLeft;
- (id)icon;
- (void)setSecondaryTextHeight:(float)fp8;
- (float)secondaryTextHeight;
- (id)attachmentView;
- (id)actionButton;
- (id)iconView;
- (id)secondaryLabel;
- (id)subtitleLabel;
- (id)primaryLabel;
- (id)realContentView;
- (BOOL)secondaryTextNumberOfLinesIsUpperBound;
- (unsigned int)secondaryTextNumberOfLines;
- (void)layoutSubviews;
- (void)setAttachmentAlpha:(float)fp8;
- (float)attachmentAlpha;
- (void)setIconAlpha:(float)fp8;
- (float)iconAlpha;
- (void)setEventDateAlpha:(float)fp8;
- (float)eventDateAlpha;
- (void)setRelevanceDateAlpha:(float)fp8;
- (float)relevanceDateAlpha;
- (void)setSecondaryTextAlpha:(float)fp8;
- (float)secondaryTextAlpha;
- (void)setSubtitleTextAlpha:(float)fp8;
- (float)subtitleTextAlpha;
- (void)setPrimaryTextAlpha:(float)fp8;
- (float)primaryTextAlpha;
- (void)setAttachmentImage:(id)fp8;
- (void)dateLabelDidChange:(id)fp8;
- (void)setEventDateColor:(id)fp8;
- (id)eventDateColor;
- (void)setRelevanceDateColor:(id)fp8;
- (id)relevanceDateColor;
- (void)setSecondaryTextNumberOfLines:(unsigned int)fp8 treatAsUpperBound:(BOOL)fp12;
- (void)setSecondaryTextColor:(id)fp8;
- (id)secondaryTextColor;
- (void)setSubtitleTextColor:(id)fp8;
- (id)subtitleTextColor;
- (void)setPrimaryTextColor:(id)fp8;
- (id)primaryTextColor;
- (void)setEventDateLabel:(id)fp8;
- (id)eventDateLabel;
- (void)setRelevanceDateLabel:(id)fp8;
- (id)relevanceDateLabel;
- (void)setActionButton:(id)fp8;
- (void)setSecondaryText:(id)fp8;
- (id)secondaryText;
- (void)setSubtitleText:(id)fp8;
- (id)subtitleText;
- (void)setPrimaryText:(id)fp8;
- (id)primaryText;
- (void)setIcon:(id)fp8;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;
- (struct CGRect)contentBounds;

@end

