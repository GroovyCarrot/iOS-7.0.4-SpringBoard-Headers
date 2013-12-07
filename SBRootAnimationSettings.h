/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class SBCenterAppZoomSettings, SBCenterZoomSettings, SBCrossfadeZoomSettings, SBFolderZoomSettings, SBReducedMotionFadeSettings;

@interface SBRootAnimationSettings : _ABAddressBookCopyLocalizedLabel
{
    SBReducedMotionFadeSettings *_reducedMotionSettings;
    SBCenterZoomSettings *_unlockSettings;
    SBCenterAppZoomSettings *_centerLaunchSettings;
    SBCenterAppZoomSettings *_centerSuspendSettings;
    SBCrossfadeZoomSettings *_crossfadeLaunchSettings;
    SBCrossfadeZoomSettings *_crossfadeSuspendSettings;
    SBFolderZoomSettings *_folderOpenSettings;
    SBFolderZoomSettings *_folderCloseSettings;
}

+ (id)settingsControllerModule;
- (void)setFolderCloseSettings:(id)fp8;
- (id)folderCloseSettings;
- (void)setFolderOpenSettings:(id)fp8;
- (id)folderOpenSettings;
- (void)setCrossfadeSuspendSettings:(id)fp8;
- (id)crossfadeSuspendSettings;
- (void)setCrossfadeLaunchSettings:(id)fp8;
- (id)crossfadeLaunchSettings;
- (void)setCenterSuspendSettings:(id)fp8;
- (id)centerSuspendSettings;
- (void)setCenterLaunchSettings:(id)fp8;
- (id)centerLaunchSettings;
- (void)setUnlockSettings:(id)fp8;
- (id)unlockSettings;
- (void)setReducedMotionSettings:(id)fp8;
- (id)reducedMotionSettings;
- (void)setDefaultValues;

@end
