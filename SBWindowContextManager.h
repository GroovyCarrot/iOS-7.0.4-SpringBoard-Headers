/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSHashTable, NSMapTable, NSString;

@interface SBWindowContextManager : _ABAddressBookCopyLocalizedLabel
{
    id <SBWindowContextManagerDelegate> _delegate;
    NSString *_identifier;
    NSHashTable *_observers;
    NSMapTable *_screenToOrderedContexts;
}

- (void)setIdentifier:(id)fp8;
- (id)identifier;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (id)description;
- (id)contextWithIdentifier:(unsigned int)fp8 screen:(id)fp12;
- (id)contextsForScreen:(id)fp8;
- (unsigned int)numberOfContextsForScreen:(id)fp8;
- (id)trackedScreens;
- (void)removeObserver:(id)fp8;
- (void)addObserver:(id)fp8;
- (void)removeContext:(id)fp8;
- (void)addContext:(id)fp8;
- (void)dealloc;

@end
