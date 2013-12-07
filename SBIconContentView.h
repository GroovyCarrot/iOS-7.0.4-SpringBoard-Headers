/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableArray;

@interface SBIconContentView : _ABAddressBookCopyLocalizedLabel
{
    int _orientation;
    NSMutableArray *_folderContentViews;
    float _searchGestureProgress;
}

- (int)orientation;
- (void)layoutSubviews;
- (void)didAddSubview:(id)fp8;
- (void)clearAllFolderContentViews;
- (void)popFolderContentView:(id)fp8;
- (void)pushFolderContentView:(id)fp8;
- (void)updateLayoutWithDuration:(double)fp8;
- (void)setOrientation:(int)fp8;
- (void)dealloc;
- (id)initWithOrientation:(int)fp8;

@end

