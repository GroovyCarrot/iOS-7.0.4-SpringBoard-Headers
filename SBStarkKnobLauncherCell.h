/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconObserver-Protocol.h"

@class SBIcon, UIView<SBIconAccessoryView>;

@interface SBStarkKnobLauncherCell : _ABAddressBookCopyLocalizedLabel <SBIconObserver>
{
    SBIcon *_icon;
    UIView<SBIconAccessoryView> *_accessoryView;
    BOOL _showsDisclosureIndicator;
    id <SBStarkKnobLauncherCellDelegate> _delegate;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)setShowsDisclosureIndicator:(BOOL)fp8;
- (BOOL)showsDisclosureIndicator;
- (void)iconAccessoriesDidUpdate:(id)fp8;
- (void)iconImageDidUpdate:(id)fp8;
- (void)setHighlighted:(BOOL)fp8 animated:(BOOL)fp12;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (struct CGRect)_accessoryFrameInBounds:(struct CGRect)fp8;
- (void)setIcon:(id)fp8;
- (id)icon;
- (void)dealloc;
- (id)initWithStyle:(int)fp8 reuseIdentifier:(id)fp12;

@end

