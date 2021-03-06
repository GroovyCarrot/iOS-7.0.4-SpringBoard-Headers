/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBFileLoggerDelegate-Protocol.h"

@class NSMutableDictionary;

@interface SBFileLogManager : _ABAddressBookCopyLocalizedLabel <SBFileLoggerDelegate>
{
    NSMutableDictionary *_loggersByName;
}

+ (id)sharedInstance;
- (void)loggerEnabledStateChanged:(id)fp8;
- (void)_recordForLogNamed:(id)fp8 format:(id)fp12 arguments:(void *)fp16;
- (void)_enableOrDisableLoggerIfNecessary:(id)fp8;
- (void)_addLogger:(id)fp8;
- (BOOL)isClass:(Class)fp8 aKindOfClass:(Class)fp12;
- (void)_loadFileLoggers;
- (void)flush;
- (void)reloadFromDefaults;
- (id)loggerForName:(id)fp8;
- (void)dealloc;
- (id)init;

@end

