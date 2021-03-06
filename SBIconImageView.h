/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconObserver-Protocol.h"
#import "SBIconProgressViewDelegate-Protocol.h"

@class SBIcon, SBIconProgressView, UIImage, UIImageView;

@interface SBIconImageView : _ABAddressBookCopyLocalizedLabel <SBIconObserver, SBIconProgressViewDelegate>
{
    UIImageView *_overlayView;
    SBIconProgressView *_progressView;
    BOOL _isPaused;
    UIImage *_cachedSquareContentsImage;
    BOOL _showsSquareCorners;
    SBIcon *_icon;
    float _brightness;
    float _overlayAlpha;
}

+ (id)dequeueRecycledIconImageViewOfClass:(Class)fp8;
+ (void)recycleIconImageView:(id)fp8;
+ (float)cornerRadius;
- (BOOL)showsSquareCorners;
- (float)overlayAlpha;
- (float)brightness;
- (id)icon;
- (BOOL)_shouldAnimatePropertyWithKey:(id)fp8;
- (void)iconImageDidUpdate:(id)fp8;
- (struct CGRect)visibleBounds;
- (struct CGSize)sizeThatFits:(struct CGSize)fp8;
- (id)squareDarkeningOverlayImage;
- (id)darkeningOverlayImage;
- (id)squareContentsImage;
- (id)contentsImage;
- (void)_clearCachedImages;
- (id)_generateSquareContentsImage;
- (void)_updateProgressMask;
- (void)_updateOverlayImage;
- (id)_currentOverlayImage;
- (void)updateImageAnimated:(BOOL)fp8;
- (id)snapshot;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setShowsSquareCorners:(BOOL)fp8;
- (void)setPaused:(BOOL)fp8;
- (void)setProgressAlpha:(float)fp8;
- (void)_clearProgressView;
- (void)progressViewCanBeRemoved:(id)fp8;
- (void)setProgressState:(int)fp8 paused:(BOOL)fp12 percent:(float)fp16 animated:(BOOL)fp20;
- (void)_updateOverlayAlpha;
- (void)setOverlayAlpha:(float)fp8;
- (void)setBrightness:(float)fp8;
- (void)setIcon:(id)fp8 animated:(BOOL)fp12;
- (void)setIcon:(id)fp8;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)fp8;

@end

