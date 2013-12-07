/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSArray;

@interface SBFakeDuet : _ABAddressBookCopyLocalizedLabel
{
    NSArray *_triggers;
    NSArray *_appsToLaunch;
    id _recommendationHandler;
}

+ (id)sharedInstance;
- (void)setRecommendationHandler:(id)fp(null);
- (id)recommendationHandler;
- (void)setAppsToLaunch:(id)fp8;
- (id)appsToLaunch;
- (void)setTriggers:(id)fp8;
- (id)triggers;
- (void)_frontDisplayChanged:(id)fp8;
- (void)_switcherRevealed:(id)fp8;
- (void)_wake:(id)fp8;
- (void)_handleTrigger:(id)fp8;
- (void)_refreshAppsToLaunch;
- (void)_refreshTriggers;
- (void)setAppLaunchRecommendationHandler:(id)fp(null);
- (void)okToLaunch:(id)fp8 forReasons:(id)fp12 withHandler:(id)fp(null);
- (void)dealloc;
- (id)init;

@end

