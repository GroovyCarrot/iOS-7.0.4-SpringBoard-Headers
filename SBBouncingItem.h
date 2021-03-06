/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "UIDynamicItem-Protocol.h"

@interface SBBouncingItem : _ABAddressBookCopyLocalizedLabel <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    float _multiplier;
    id _translateBlock;
}

- (void)setTranslateBlock:(id)fp(null);
- (id)translateBlock;
- (void)setMultiplier:(float)fp8;
- (float)multiplier;
- (void)setTransform:(struct CGAffineTransform)fp8;
- (struct CGAffineTransform)transform;
- (void)setBounds:(struct CGRect)fp8;
- (struct CGRect)bounds;
- (void)setCenter:(struct CGPoint)fp8;
- (struct CGPoint)center;
- (void)dealloc;

@end

