/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "NSFastEnumeration-Protocol.h"

@class NSMutableArray;

@interface SBStringMetrics : _ABAddressBookCopyLocalizedLabel <NSFastEnumeration>
{
    NSMutableArray *_fragments;
}

- (unsigned int)countByEnumeratingWithState:(CDAnonymousStruct1 *)fp8 objects:(id *)fp12 count:(unsigned int)fp16;
- (unsigned int)fragmentCount;
- (id)fragments;
- (void)addFragment:(id)fp8;
- (id)description;
- (void)dealloc;
- (id)init;

@end

