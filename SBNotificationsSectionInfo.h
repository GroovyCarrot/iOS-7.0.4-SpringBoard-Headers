/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBBBSectionInfo.h"

@interface SBNotificationsSectionInfo : SBBBSectionInfo
{
    id _clearPossibleAction;
    id _clearAction;
}

- (void)setClearAction:(id)fp(null);
- (id)clearAction;
- (void)setClearPossibleAction:(id)fp(null);
- (id)clearPossibleAction;
- (void)populateReusableView:(id)fp8;
- (BOOL)shouldSuppressBulletinMessageForPrivacy:(id)fp8;
- (float)heightForReusableViewInTableView:(id)fp8;
- (Class)reusableViewClass;
- (id)identifier;
- (id)representedListSection;
- (void)dealloc;

@end

