/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBIconModelApplicationDataSource <NSObject>
- (id)firstPageLeafIdentifiers;
- (BOOL)isNewsstandEnabled;
- (id)defaultIconState;
- (int)appVisibilityOverrideForBundleIdentifier:(id)fp8;
- (BOOL)updateAppIconVisibilityOverridesShowing:(id *)fp8 hiding:(id *)fp12;
- (id)allApplications;
@end

