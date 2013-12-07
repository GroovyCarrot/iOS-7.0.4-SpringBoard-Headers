/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBBBBulletinInfo.h"

@class NSString;

@interface SBBBWidgetBulletinInfo : SBBBBulletinInfo
{
    NSString *_identifier;
    struct CGSize _preferredViewSize;
    BOOL _visible;
    struct {
        unsigned int isPreferredViewSizeValid:1;
    } _widgetBulletinInfoFlags;
}

- (void)populateReusableView:(id)fp8;
- (float)heightForReusableViewInTableView:(id)fp8;
- (Class)reusableViewClass;
- (id)originalSectionIdentifier;
- (id)identifier;
- (id)widgetIdentifier;
- (id)representedWidget;
- (id)representedBulletin;
- (void)setPreferredViewSize:(struct CGSize)fp8;
- (struct CGSize)preferredViewSize;
- (void)dealloc;

@end

