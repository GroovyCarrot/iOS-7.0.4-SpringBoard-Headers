/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBBulletinObserverViewController.h"

@class NSMutableArray, NSMutableDictionary;

@interface SBNotificationsModeViewController : SBBulletinObserverViewController
{
    struct {
        unsigned int suppliesInsertionAnimation:1;
        unsigned int suppliesRemovalAnimation:1;
        unsigned int suppliesReplacementAnimation:1;
        unsigned int handlesBulletinActions:1;
    } _notificationsModeViewControllerDelegateFlags;
    NSMutableArray *_orderedSectionIDs;
    NSMutableDictionary *_sectionIDsToOrderedBulletins;
}

- (BOOL)handleActionForBulletin:(id)fp8;
- (int)bulletinViewController:(id)fp8 replacementAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (int)bulletinViewController:(id)fp8 removalAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (int)bulletinViewController:(id)fp8 insertionAnimationForBulletin:(id)fp12 inSection:(id)fp16;
- (void)updateForChangeInMessagePrivacy;
- (void)hostWillPresent;
- (void)updateSection:(id)fp8 withParameters:(id)fp12;
- (void)updateSection:(id)fp8 withInfo:(id)fp12;
- (void)_updateSectionForChangeInNumberOfLines:(id)fp8;
- (void)_updateSection:(id)fp8 withLockState:(BOOL)fp12;
- (void)_updateSectionForChangeInMessagePrivacyIfNecessary:(id)fp8;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)fp8 withLockState:(BOOL)fp12 updatedSubsectionIDs:(id)fp16;
- (void)_updateSectionForChangeInLockScreenVisibility:(id)fp8 withProcessingBlock:(id)fp(null);
- (void)populateBulletinInfo:(id)fp8 inSection:(id)fp12;
- (id)infoForBulletinInfo:(id)fp8 inSection:(id)fp12;
- (void)commitMoveOfBulletin:(id)fp8 inSection:(id)fp12 beforeBulletin:(id)fp16 inSection:(id)fp20;
- (void)commitReplacementWithBulletin:(id)fp8 ofBulletin:(id)fp12 inSection:(id)fp16;
- (void)commitRemovalOfBulletin:(id)fp8 fromSection:(id)fp12;
- (void)commitInsertionOfBulletin:(id)fp8 beforeBulletin:(id)fp12 inSection:(id)fp16 forFeed:(unsigned int)fp20;
- (void)_updateSectionOrderForOperationInSection:(id)fp8;
- (void)_sortBulletins:(id)fp8 forSection:(id)fp12;
- (void)commitReplacementWithSection:(id)fp8 ofSection:(id)fp12;
- (void)commitMoveOfSection:(id)fp8 beforeSection:(id)fp12;
- (void)commitRemovalOfSection:(id)fp8;
- (void)commitInsertionOfSection:(id)fp8 beforeSection:(id)fp12;
- (void)_sortSectionIDs;
- (id)sectionIDsToOrderedBulletins;
- (id)orderedSectionIDs;
- (void)setDelegate:(id)fp8;
- (void)viewWillAppear:(BOOL)fp8;
- (void)dealloc;
- (id)initWithObserverFeed:(unsigned int)fp8;

@end

