/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBDaemonHandler : _ABAddressBookCopyLocalizedLabel
{
}

+ (void)noteDaemonCanceled:(id)fp8;
+ (id)stateDescription;
+ (void)removeRequestForKey:(id)fp8 forDaemonPid:(int)fp12;
+ (BOOL)addRequest:(id)fp8 forKey:(id)fp12 forDaemonPid:(int)fp16;
+ (void)initialize;

@end

