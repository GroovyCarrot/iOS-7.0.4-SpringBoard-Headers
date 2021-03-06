/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBIconGridImage : _ABAddressBookCopyLocalizedLabel
{
    unsigned int _numberOfCells;
}

+ (struct CGSize)sizeForNumberOfRows:(unsigned int)fp8;
+ (struct CGRect)rectAtIndex:(unsigned int)fp8 maxCount:(unsigned int)fp12;
+ (struct CGSize)cellSpacing;
+ (struct CGSize)cellSize;
+ (unsigned int)numberOfRowsForNumberOfCells:(unsigned int)fp8;
+ (unsigned int)numberOfColumns;
+ (id)gridImageForNumberOfCells:(unsigned int)fp8 withCellImageProviderBlock:(id)fp(null);
+ (id)_gridImageForNumberOfCells:(unsigned int)fp8 withPreviousGridImage:(id)fp12 cellImageProviderBlock:(id)fp(null);
- (unsigned int)numberOfRows;
- (unsigned int)numberOfColumns;
- (unsigned int)numberOfCells;
- (id)gridImageByPatchingWithCellImageProviderBlock:(id)fp(null);

@end

