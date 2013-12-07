/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBCountedMapValue-Protocol.h"

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : _ABAddressBookCopyLocalizedLabel <SBCountedMapValue>
{
    SBIconLabelImageParameters *_parameters;
    struct CGPoint _maxSizeOffset;
}

+ (void)checkinLabelImage:(id)fp8;
+ (id)_parametersWithDefaultStyle:(id)fp8;
+ (id)checkoutLabelImageForParameters:(id)fp8;
+ (id)_drawLabelImageForParameters:(id)fp8;
+ (id)_labelImageCountedMap;
+ (void)drawImageInRect:(struct CGRect)fp8 fromParameters:(id)fp24;
+ (struct CGRect)rectFromParameters:(id)fp8 constrainedToRect:(struct CGRect)fp12;
+ (struct CGRect)_rectWithDrawing:(BOOL)fp8 inRect:(struct CGRect)fp12 fromParameters:(id)fp28;
- (struct CGPoint)maxSizeOffset;
- (id)parameters;
- (id)description;
- (id)countedMapKey;
- (void)dealloc;
- (id)initWithCGImage:(struct CGImage *)fp8 scale:(float)fp12 orientation:(int)fp16;
- (id)_initWithCGImage:(struct CGImage *)fp8 scale:(float)fp12 orientation:(int)fp16 parameters:(id)fp20 maxSizeOffset:(struct CGPoint)fp24;

@end

