/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBBulletinListSubsection : _ABAddressBookCopyLocalizedLabel
{
    BOOL _showsInLockScreen;
    BOOL _showsMessagePreview;
    NSString *_subsectionID;
}

- (void)setShowsMessagePreview:(BOOL)fp8;
- (BOOL)showsMessagePreview;
- (void)setShowsInLockScreen:(BOOL)fp8;
- (BOOL)showsInLockScreen;
- (id)subsectionID;
- (void)dealloc;
- (id)initWithBulletinListSection:(id)fp8 subsectionID:(id)fp12;

@end

