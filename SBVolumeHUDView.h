/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBHUDView.h"

@interface SBVolumeHUDView : SBHUDView
{
    int _mode;
    BOOL _headphonesPresent;
    float _euVolumeLimit;
}

+ (BOOL)wouldShowAtLeastAYellowBlockForVolume:(float)fp8 euVolumeLimit:(float)fp12;
+ (float)volumeStepDownForCurrentVolume:(float)fp8 euVolumeLimit:(float)fp12;
+ (float)volumeStepUpForCurrentVolume:(float)fp8 euVolumeLimit:(float)fp12;
- (float)EUVolumeLimit;
- (BOOL)headphonesPresent;
- (int)mode;
- (void)_updateBlockView:(id)fp8 value:(float)fp12 blockSize:(struct CGSize)fp16 point:(struct CGPoint)fp24;
- (id)_blockColorForValue:(float)fp8;
- (void)setEUVolumeLimit:(float)fp8;
- (void)setProgress:(float)fp8;
- (void)setHeadphonesPresent:(BOOL)fp8;
- (void)setMode:(int)fp8;
- (id)init;
- (void)_updateLabels;
- (void)_updateImage;

@end
