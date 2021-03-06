/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBCenterZoomSettings.h"

@class SBFAnimationSettings;

@interface SBCenterAppZoomSettings : SBCenterZoomSettings
{
    SBFAnimationSettings *_appZoomSettings;
    SBFAnimationSettings *_appFadeSettings;
    double _appHeadStart;
}

+ (id)settingsControllerModule;
- (void)setAppFadeSettings:(id)fp8;
- (id)appFadeSettings;
- (void)setAppZoomSettings:(id)fp8;
- (id)appZoomSettings;
- (void)setAppHeadStart:(double)fp8;
- (double)appHeadStart;

@end

