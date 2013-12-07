/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray;

@interface SBStarkLauncherLayout : _ABAddressBookCopyLocalizedLabel
{
    id <SBStarkLauncherLayoutDelegate> _delegate;
    unsigned int _numberOfItems;
    struct CGSize _itemSize;
    NSArray *_attributesByItem;
    BOOL _layoutForScrollButtons;
    struct UIEdgeInsets _scrollButtonInsets;
}

+ (Class)layoutAttributesClass;
+ (float)desiredItemHeightForWidth:(float)fp8;
- (struct UIEdgeInsets)scrollButtonInsets;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)fp8;
- (id)layoutAttributesForElementsInRect:(struct CGRect)fp8;
- (void)prepareLayout;
- (BOOL)layoutForScrollButtons;
- (void)setLayoutForScrollButtons:(BOOL)fp8;
- (float)itemHeight;
- (void)setItemHeight:(float)fp8;
- (void)dealloc;

@end
