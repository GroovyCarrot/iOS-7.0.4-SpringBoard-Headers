/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBCollectionViewCell : _ABAddressBookCopyLocalizedLabel
{
    id <SBCollectionViewCellDelegate> _delegate;
    BOOL _performSetHighlighted;
    BOOL _protectDelayedUnhighlights;
}

- (void)setProtectDelayedUnhighlights:(BOOL)fp8;
- (BOOL)protectDelayedUnhighlights;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)fp8;
- (void)setHighlighted:(BOOL)fp8 afterDelay:(double)fp12;
- (void)_performSetHighlighted;
- (void)_didSetHighlighted:(BOOL)fp8;
- (void)setDelegate:(id)fp8;
- (id)delegate;

@end

