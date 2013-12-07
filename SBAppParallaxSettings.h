/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBFHomeScreenWallpaperParallaxSettings, SBFLockScreenWallpaperParallaxSettings, SBFParallaxSettings;

@interface SBAppParallaxSettings : _ABAddressBookCopyLocalizedLabel
{
    SBFLockScreenWallpaperParallaxSettings *_lockscreenWallpaperSettings;
    SBFHomeScreenWallpaperParallaxSettings *_homescreenWallpaperSettings;
    SBFParallaxSettings *_iconSettings;
    SBFParallaxSettings *_iconBadgeSettings;
}

+ (id)settingsControllerModule;
- (void)setIconBadgeSettings:(id)fp8;
- (id)iconBadgeSettings;
- (void)setIconSettings:(id)fp8;
- (id)iconSettings;
- (void)setHomescreenWallpaperSettings:(id)fp8;
- (id)homescreenWallpaperSettings;
- (void)setLockscreenWallpaperSettings:(id)fp8;
- (id)lockscreenWallpaperSettings;
- (void)setDefaultValues;

@end

