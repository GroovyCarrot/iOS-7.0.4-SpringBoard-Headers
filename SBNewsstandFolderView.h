/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBFolderView.h"

#import "SBIconIndexNodeObserver-Protocol.h"

@class SBNewsstandBackgroundView, UIButton;

@interface SBNewsstandFolderView : SBFolderView <SBIconIndexNodeObserver>
{
    UIButton *_storeButton;
    UIButton *_emptyImageButton;
    SBNewsstandBackgroundView *_backgroundView;
}

- (void)node:(id)fp8 didRemoveContainedNodeIdentifiers:(id)fp12;
- (void)node:(id)fp8 didAddContainedNodeIdentifiers:(id)fp12;
- (void)_updateEmptyState;
- (void)_storeButtonTapped:(id)fp8;
- (void)_newsstandStoreAvailabilityDidChangeNotification:(id)fp8;
- (void)_layoutSubviews;
- (void)setLegibilitySettings:(id)fp8;
- (float)_titleFontSize;
- (BOOL)_showsTitle;
- (void)setFolder:(id)fp8;
- (void)dealloc;
- (id)initWithFolder:(id)fp8 orientation:(int)fp12;

@end
