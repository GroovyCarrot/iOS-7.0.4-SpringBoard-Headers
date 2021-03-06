/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBNotificationsModeViewController.h"

@class NSMutableSet;

@interface SBNotificationsMissedModeViewController : SBNotificationsModeViewController
{
    NSMutableSet *_lockScreenBulletinIDs;
}

+ (void)_sortBulletinsChronologically:(id)fp8;
+ (id)_referenceDate;
+ (id)_sortByDateForBulletin:(id)fp8;
+ (id)sharedSectionInfo;
- (void)_updateSectionForChangeInNumberOfLines:(id)fp8;
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)fp8;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)fp8 withProcessingBlock:(id)fp(null);
- (void)commitMoveOfBulletin:(id)fp8 inSection:(id)fp12 beforeBulletin:(id)fp16 inSection:(id)fp20;
- (void)commitReplacementWithBulletin:(id)fp8 ofBulletin:(id)fp12 inSection:(id)fp16;
- (void)commitRemovalOfBulletin:(id)fp8 fromSection:(id)fp12;
- (void)willDisassociateBulletin:(id)fp8 fromSection:(id)fp12;
- (void)commitInsertionOfBulletin:(id)fp8 beforeBulletin:(id)fp12 inSection:(id)fp16 forFeed:(unsigned int)fp20;
- (void)_sortBulletins:(id)fp8 forSection:(id)fp12;
- (void)_pruneBulletins;
- (id)_expiredBulletins;
- (void)_updateSectionOrderForOperationInSection:(id)fp8;
- (void)commitReloadOfSections:(id)fp8;
- (void)commitReplacementWithSection:(id)fp8 ofSection:(id)fp12;
- (void)commitMoveOfSection:(id)fp8 beforeSection:(id)fp12;
- (void)commitRemovalOfSection:(id)fp8;
- (void)commitInsertionOfSection:(id)fp8 beforeSection:(id)fp12;
- (void)_sortSectionIDs;
- (void)didAssociateBulletin:(id)fp8 withSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)willAssociateBulletin:(id)fp8 withSection:(id)fp12 forFeed:(unsigned int)fp16;
- (void)populateBulletinInfo:(id)fp8 inSection:(id)fp12;
- (void)populateIconIfNecessaryForBulletinInfo:(id)fp8;
- (id)infoForBulletin:(id)fp8 inSection:(id)fp12;
- (id)infoForBulletinSection:(id)fp8;
- (struct UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(int)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end

