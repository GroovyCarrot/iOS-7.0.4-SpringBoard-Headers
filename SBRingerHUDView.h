/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBHUDView.h"

@interface SBRingerHUDView : SBHUDView
{
    BOOL _silent;
}

- (BOOL)isSilent;
- (void)setSilent:(BOOL)fp8;
- (id)init;
- (void)_updateSilentImage;

@end
