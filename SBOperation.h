/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBOperation : _ABAddressBookCopyLocalizedLabel
{
    id _block;
    NSString *_name;
    BOOL _hasRun;
}

+ (id)operationWithBlock:(id)fp(null) name:(void)fp8;
- (id)name;
- (unsigned int)hash;
- (BOOL)isEqual:(id)fp8;
- (id)description;
- (void)execute;
- (void)dealloc;
- (id)initWithBlock:(id)fp(null) name:(void)fp8;

@end
