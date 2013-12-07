/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconModelStore-Protocol.h"

@class NSURL;

@interface SBIconModelPropertyListFileStore : _ABAddressBookCopyLocalizedLabel <SBIconModelStore>
{
    NSURL *_currentIconStateURL;
    NSURL *_desiredIconStateURL;
}

- (void)setDesiredIconStateURL:(id)fp8;
- (id)desiredIconStateURL;
- (void)setCurrentIconStateURL:(id)fp8;
- (id)currentIconStateURL;
- (BOOL)_save:(id)fp8 url:(id)fp12 error:(id *)fp16;
- (BOOL)_delete:(id)fp8 error:(id *)fp12;
- (id)_load:(id)fp8 error:(id *)fp12;
- (id)loadDesiredIconState:(id *)fp8;
- (id)loadCurrentIconState:(id *)fp8;
- (BOOL)deleteDesiredIconState:(id *)fp8;
- (BOOL)deleteCurrentIconState:(id *)fp8;
- (BOOL)saveDesiredIconState:(id)fp8 error:(id *)fp12;
- (BOOL)saveCurrentIconState:(id)fp8 error:(id *)fp12;
- (void)dealloc;

@end
