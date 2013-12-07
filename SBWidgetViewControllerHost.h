/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString;

@interface SBWidgetViewControllerHost : _ABAddressBookCopyLocalizedLabel
{
    id <SBWidgetViewControllerHostDelegate> _delegate;
    int _widgetIdiom;
    NSString *_widgetIdentifier;
    NSString *_appBundleID;
    NSString *_displayName;
    struct {
        unsigned int _didFetchDisplayName:1;
    } _widgetViewControllerHostFlags;
}

+ (id)requestViewController:(id)fp8 context:(id)fp12 handler:(id)fp(null);
+ (id)_requestLocalViewControllerOfClass:(Class)fp8 context:(id)fp12 handler:(id)fp(null);
+ (BOOL)canLoadWidgetWithIdentifier:(id)fp8 forWidgetIdiom:(int)fp12 bundlePath:(id)fp16;
+ (id)widgetViewControllerWithIdentifier:(id)fp8 forWidgetIdiom:(int)fp12 bundlePath:(id)fp16;
+ (void)_invalidateVendedWidgetClass;
- (int)widgetIdiom;
- (id)appBundleID;
- (id)widgetIdentifier;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)hostDidDismiss;
- (void)hostWillDismiss;
- (void)hostDidPresent;
- (void)hostWillPresent;
- (void)_requestLaunchOfURL:(id)fp8;
- (void)_requestPresentationOfViewController:(id)fp8 presentationStyle:(int)fp12 context:(id)fp16 completion:(id)fp(null);
- (void)requestPreferredViewSizeWithHandler:(id)fp(null);
- (id)displayName;
- (void)dealloc;
- (id)initWithWidgetIdentifier:(id)fp8 forWidgetIdiom:(int)fp12 bundlePath:(id)fp16;

@end
