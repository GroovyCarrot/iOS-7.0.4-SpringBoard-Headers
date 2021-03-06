/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@interface SBFolderSettings : _ABAddressBookCopyLocalizedLabel
{
    BOOL _allowNestedFolders;
    BOOL _pinchToClose;
    BOOL _blurFolderBackground;
    BOOL _oneColumnAtATime;
}

+ (id)settingsControllerModule;
- (void)setOneColumnAtATime:(BOOL)fp8;
- (BOOL)oneColumnAtATime;
- (void)setBlurFolderBackground:(BOOL)fp8;
- (BOOL)blurFolderBackground;
- (void)setPinchToClose:(BOOL)fp8;
- (BOOL)pinchToClose;
- (void)setAllowNestedFolders:(BOOL)fp8;
- (BOOL)allowNestedFolders;
- (void)setDefaultValues;

@end

