/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBStarkBannerItemObserver-Protocol.h"
#import "SBUIBannerView-Protocol.h"

@class SBStarkBannerItem, SBUIBannerContext, UIImageView, UILabel;

@interface SBStarkBannerView : _ABAddressBookCopyLocalizedLabel <SBStarkBannerItemObserver, SBUIBannerView>
{
    SBUIBannerContext *_context;
    SBStarkBannerItem *_bannerItem;
    UIImageView *_categoryImageView;
    UILabel *_titleLabel;
    float _titleAscender;
    UILabel *_subTitleLabel;
    float _subTitleAscender;
    UIImageView *_actionImageView;
    struct UIEdgeInsets _contentInsets;
}

+ (struct UIEdgeInsets)_contentInsetsForActionType:(int)fp8;
+ (id)_imageForActionType:(int)fp8;
- (void)starkBannerItemDidReloadDisplayProperties:(id)fp8;
- (id)bannerContext;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;
- (id)initWithContext:(id)fp8;

@end

