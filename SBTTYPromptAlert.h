/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBAlert.h"

@class NSString;

@interface SBTTYPromptAlert : SBAlert
{
    NSString *_number;
    int _uid;
}

+ (BOOL)dialNumberPromptingIfNecessary:(id)fp8 addressBookUID:(int)fp12 urlAddition:(id)fp16;
+ (void)displayForNumber:(id)fp8 addressBookUID:(int)fp12;
- (void)activate;
- (BOOL)hasTranslucentBackground;
- (int)addressBookUID;
- (id)number;
- (id)alertDisplayViewWithSize:(struct CGSize)fp8;
- (void)dealloc;
- (id)initWithNumber:(id)fp8 addressBookUID:(int)fp12;

@end

