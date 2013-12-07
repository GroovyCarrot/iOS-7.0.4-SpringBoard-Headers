/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBIconIndexNodeObserver-Protocol.h"
#import "SBIconObserver-Protocol.h"
#import "SBIconViewObserver-Protocol.h"

@class NSMapTable, SBIconModel, _UILegibilitySettings;

@interface SBIconViewMap : _ABAddressBookCopyLocalizedLabel <SBIconObserver, SBIconIndexNodeObserver, SBIconViewObserver>
{
    SBIconModel *_model;
    NSMapTable *_iconViewsForIcons;
    id <SBIconViewMapDelegate> _delegate;
    id <SBIconViewDelegate> _viewDelegate;
    NSMapTable *_recycledIconViewsByType;
    NSMapTable *_labelsForIcons;
    NSMapTable *_lightLegibilityImagesForIcons;
    NSMapTable *_darkLegibilityImagesForIcons;
    NSMapTable *_accessoryImagesForIcons;
    _UILegibilitySettings *_legibilitySettings;
}

+ (id)switcherMap;
+ (id)homescreenMap;
- (id)legibilitySettings;
- (void)setViewDelegate:(id)fp8;
- (id)viewDelegate;
- (void)iconViewDidChangeLocation:(id)fp8;
- (void)node:(id)fp8 didRemoveContainedNodeIdentifiers:(id)fp12;
- (void)node:(id)fp8 didAddContainedNodeIdentifiers:(id)fp12;
- (void)iconAccessoriesDidUpdate:(id)fp8;
- (void)_modelReloadedState;
- (void)_modelReloadedIcons;
- (void)_modelRemovedIcon:(id)fp8;
- (void)_cacheAccessoryImagesForIcon:(id)fp8 location:(int *)fp12;
- (void)_cacheLabelImagesForIcon:(id)fp8 location:(int *)fp12;
- (void)_cacheImagesForIcon:(id)fp8;
- (void)setLegibilitySettings:(id)fp8;
- (void)purgeRecycledIconViewsForClass:(Class)fp8;
- (void)recycleAndPurgeAll;
- (void)recycleIconView:(id)fp8;
- (id)extraIconViewForIcon:(id)fp8;
- (void)recycleViewForIcon:(id)fp8;
- (void)_recycleIconView:(id)fp8;
- (void)purgeIconFromMap:(id)fp8;
- (void)_addIconView:(id)fp8 forIcon:(id)fp12;
- (void)tryToReplaceIcon:(id)fp8 withIcon:(id)fp12;
- (id)iconViewForIcon:(id)fp8;
- (id)_iconViewForIcon:(id)fp8;
- (id)mappedIconViewForIcon:(id)fp8;
- (id)iconModel;
- (void)dealloc;
- (id)initWithIconModel:(id)fp8 delegate:(id)fp12;

@end

