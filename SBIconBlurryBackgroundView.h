/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "_SBIconWallpaperColorClient-Protocol.h"

@interface SBIconBlurryBackgroundView : _ABAddressBookCopyLocalizedLabel <_SBIconWallpaperColorClient>
{
    struct CGRect _wallpaperRelativeBounds;
    BOOL _isBlurring;
    BOOL _suppressesExternalUpdates;
    id <SBIconBlurryBackgroundViewObserver> _observer;
    id _wantsBlurEvaluator;
    struct CGPoint _wallpaperRelativeCenter;
}

- (BOOL)isSuppressingExternalUpdates;
- (void)setWantsBlurEvaluator:(id)fp(null);
- (id)wantsBlurEvaluator;
- (BOOL)isBlurring;
- (struct CGPoint)wallpaperRelativeCenter;
- (void)setObserver:(id)fp8;
- (id)observer;
- (BOOL)_shouldAnimatePropertyWithKey:(id)fp8;
- (void)setSuppressesExternalUpdates:(BOOL)fp8;
- (void)setBlurring:(BOOL)fp8;
- (void)setWallpaperColor:(struct CGColor *)fp8 phase:(struct CGSize)fp12;
- (BOOL)wantsBlur:(id)fp8;
- (struct CGRect)wallpaperRelativeBounds;
- (void)didAddSubview:(id)fp8;
- (void)setWallpaperRelativeCenter:(struct CGPoint)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

