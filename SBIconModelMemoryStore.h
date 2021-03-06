/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconModelStore-Protocol.h"

@class NSDictionary;

@interface SBIconModelMemoryStore : _ABAddressBookCopyLocalizedLabel <SBIconModelStore>
{
    NSDictionary *_currentState;
    NSDictionary *_desiredState;
}

- (void)setDesiredState:(id)fp8;
- (id)desiredState;
- (void)setCurrentState:(id)fp8;
- (id)currentState;
- (id)loadDesiredIconState:(id *)fp8;
- (id)loadCurrentIconState:(id *)fp8;
- (BOOL)deleteDesiredIconState:(id *)fp8;
- (BOOL)deleteCurrentIconState:(id *)fp8;
- (BOOL)saveDesiredIconState:(id)fp8 error:(id *)fp12;
- (BOOL)saveCurrentIconState:(id)fp8 error:(id *)fp12;
- (void)dealloc;
- (id)initWithCurrentState:(id)fp8 desiredState:(id)fp12;

@end

