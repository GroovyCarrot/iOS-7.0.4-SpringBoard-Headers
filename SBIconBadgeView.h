/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBDarkeningImageViewDelegate-Protocol.h"
#import "SBIconAccessoryView-Protocol.h"

@class NSString, SBDarkeningImageView, SBIconAccessoryImage;

@interface SBIconBadgeView : _ABAddressBookCopyLocalizedLabel <SBDarkeningImageViewDelegate, SBIconAccessoryView>
{
    NSString *_text;
    SBDarkeningImageView *_incomingTextView;
    BOOL _animating;
    id _queuedAnimation;
    BOOL _displayingAccessory;
    SBIconAccessoryImage *_backgroundImage;
    SBDarkeningImageView *_backgroundView;
    SBIconAccessoryImage *_textImage;
    SBDarkeningImageView *_textView;
}

+ (id)_createImageForText:(id)fp8 highlighted:(BOOL)fp12;
+ (id)_checkoutImageForText:(id)fp8 highlighted:(BOOL)fp12;
+ (id)_checkoutBackgroundImage;
+ (id)checkoutAccessoryImagesForIcon:(id)fp8 location:(int)fp12;
- (void)_resizeForTextImage:(id)fp8;
- (void)_clearText;
- (void)_zoomOutWithPreparation:(id)fp(null) animation:(void)fp8 completion:(id)fp(null);
- (void)_zoomInWithTextImage:(id)fp8 preparation:(id)fp(null) animation:(void)fp12 completion:(id)fp(null);
- (void)_crossfadeToTextImage:(id)fp8 withPreparation:(id)fp(null) animation:(void)fp12 completion:(id)fp(null);
- (void)_configureAnimatedForText:(id)fp8 highlighted:(BOOL)fp12 withPreparation:(id)fp(null) animation:(void)fp16 completion:(id)fp(null);
- (id)darkeningImageView:(id)fp8 settableImageForImage:(id)fp12;
- (void)setAccessoryBrightness:(float)fp8;
- (struct CGPoint)accessoryOriginForIconBounds:(struct CGRect)fp8;
- (void)prepareForReuse;
- (BOOL)displayingAccessory;
- (void)configureForIcon:(id)fp8 location:(int)fp12 highlighted:(BOOL)fp16;
- (void)configureAnimatedForIcon:(id)fp8 location:(int)fp12 highlighted:(BOOL)fp16 withPreparation:(id)fp(null) animation:(void)fp20 completion:(id)fp(null);
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

@end
