/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSDate;

@interface SBWorkItem : _ABAddressBookCopyLocalizedLabel
{
    id _workBlock;
    NSDate *_creationDate;
}

- (id)creationDate;
- (id)work;
- (void)dealloc;
- (id)initWithWork:(id)fp(null);

@end
