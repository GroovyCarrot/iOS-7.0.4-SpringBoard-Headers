/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class NSString;

@interface SBApplicationIcon : SBLeafIcon
{
    NSString *_displayIdentifier;
}

- (id)applicationBundleID;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)fp8;
- (id)automationID;
- (id)tags;
- (id)getUnmaskedIconImage:(int)fp8;
- (id)generateIconImage:(int)fp8;
- (BOOL)canGenerateImageInBackgroundForFormat:(int)fp8;
- (void)generateIconImageInBackground:(id)fp(null);
- (id)blockForGeneratingIconImageInBackgroundWithFormat:(SEL)fp4;
- (id)_blockForGeneratingIconImageInBackgroundWithFormat:(SEL)fp4 complete:(int)fp8;
- (id)__loadIconImageForDataSource:(id)fp8 format:(int)fp12;
- (id)application;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (id)initWithApplication:(id)fp8;

@end

