/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "BBObserverDelegate-Protocol.h"
#import "SBUIBannerSource-Protocol.h"
#import "SBUIBannerTargetManagerObserver-Protocol.h"
#import "SBVolumePressBandit-Protocol.h"

@class BBObserver, NSMutableArray, NSMutableSet;

@interface SBBulletinBannerController : _ABAddressBookCopyLocalizedLabel <BBObserverDelegate, SBUIBannerSource, SBUIBannerTargetManagerObserver, SBVolumePressBandit>
{
    NSMutableArray *_bulletinQueue;
    BBObserver *_observer;
    NSMutableSet *_sectionIDsToPend;
    BOOL _quietModeEnabled;
    id <SBUIBannerTarget> _bannerTarget;
}

+ (id)sharedInstanceIfExists;
+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)fp8;
- (void)observer:(id)fp8 noteAlertBehaviorOverridesChanged:(unsigned int)fp12;
- (void)observer:(id)fp8 noteServerReceivedResponseForBulletin:(id)fp12;
- (void)observer:(id)fp8 noteServerConnectionStateChanged:(BOOL)fp12;
- (void)observer:(id)fp8 noteInvalidatedBulletinIDs:(id)fp12;
- (id)observer:(id)fp8 composedAttachmentImageForType:(int)fp12 thumbnailData:(id)fp16 key:(id)fp20;
- (id)observer:(id)fp8 thumbnailSizeConstraintsForAttachmentType:(int)fp12;
- (BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)fp8;
- (void)observer:(id)fp8 updateSectionInfo:(id)fp12;
- (void)observer:(id)fp8 removeBulletin:(id)fp12;
- (void)observer:(id)fp8 modifyBulletin:(id)fp12;
- (void)observer:(id)fp8 addBulletin:(id)fp12 forFeed:(unsigned int)fp16;
- (void)bannerTargetManager:(id)fp8 didRemoveTarget:(id)fp12;
- (void)bannerTargetManager:(id)fp8 didAddTarget:(id)fp12;
- (id)newBannerViewForContext:(id)fp8;
- (void)_syncLockScreenDismissalsForSeedBulletin:(id)fp8 additionalBulletins:(id)fp12;
- (id)dequeueNextBannerItemForTarget:(id)fp8;
- (id)peekNextBannerItemForTarget:(id)fp8;
- (void)_dismissWithdrawnBannerIfNecessaryFromBulletinIDs:(id)fp8;
- (void)_showTestBanner:(id)fp8;
- (void)_removeNextBulletinIfNecessary;
- (void)_queueBulletin:(id)fp8;
- (BOOL)_replaceBulletin:(id)fp8;
- (void)_removeBulletin:(id)fp8;
- (unsigned int)_indexOfQueuedBulletinID:(id)fp8;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)_reloadVolumePressBanditPreference;
- (void)dealloc;
- (id)init;

@end

