/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBLeafIconDataSource-Protocol.h"

@class LSApplicationProxy, NSMutableDictionary, NSMutableSet, NSProgress, NSString;

@interface SBApplicationPlaceholder : _ABAddressBookCopyLocalizedLabel <SBLeafIconDataSource>
{
    LSApplicationProxy *_appProxy;
    NSString *_applicationBundleID;
    NSString *_applicationDisplayName;
    NSProgress *_progress;
    double _fractionProgress;
    BOOL _installing;
    BOOL _isNewsstand;
    BOOL _observingKVO;
    unsigned int _installType;
    BOOL _invalidated;
    NSMutableDictionary *_generatedIconImagesByKey;
    NSMutableSet *_formatsPendingGeneration;
}

+ (id)backgroundQueue;
- (void)setApplicationDisplayName:(id)fp8;
- (id)applicationDisplayName;
- (void)setApplicationBundleID:(id)fp8;
- (void)setAppProxy:(id)fp8;
- (id)appProxy;
- (BOOL)icon:(id)fp8 launchFromLocation:(int)fp12;
- (BOOL)iconAllowsLaunch:(id)fp8;
- (BOOL)iconCompleteUninstall:(id)fp8;
- (BOOL)iconAllowsUninstall:(id)fp8;
- (BOOL)iconIsRecentlyUpdated:(id)fp8;
- (id)iconFormattedAccessoryString:(id)fp8;
- (id)iconBadgeNumberOrString:(id)fp8;
- (int)iconAccessoryType:(id)fp8;
- (BOOL)iconProgressIsPaused:(id)fp8;
- (float)iconProgressPercent:(id)fp8;
- (int)iconProgressState:(id)fp8;
- (BOOL)iconAppearsInNewsstand:(id)fp8;
- (BOOL)iconCanEllipsizeLabel:(id)fp8;
- (id)icon:(id)fp8 defaultImageWithFormat:(int)fp12;
- (id)icon:(id)fp8 imageWithFormat:(int)fp12;
- (unsigned int)iconPriority:(id)fp8;
- (id)iconDisplayName:(id)fp8;
- (void)_reloadThumbnailImage;
- (void)_generatePendingIconFormats;
- (void)_generateIconImageWithFormat:(int)fp8;
- (id)_iconImageKeyForBundleID:(id)fp8 format:(int)fp12;
- (int)_newsstandImageOptions;
- (id)_defaultIconImageWithFormat:(int)fp8;
- (id)_getOrGenerateIconImageWithFormat:(int)fp8;
- (void)observeValueForKeyPath:(id)fp8 ofObject:(id)fp12 change:(id)fp16 context:(void *)fp20;
- (void)_addKVOObserversForProgress;
- (void)_removeKVOObserversForProgress;
- (void)_progressChanged;
- (void)_progressMayHaveChanged;
- (BOOL)_shouldDisplayAppName;
- (id)_downloadingLabel;
- (void)_prioritize;
- (void)cancel;
- (void)resume;
- (void)pause;
- (BOOL)isNewsstand;
- (BOOL)isContentRestricted;
- (BOOL)isInstalling;
- (BOOL)isDownloading;
- (BOOL)isCancelable;
- (BOOL)isPausable;
- (BOOL)isFailed;
- (BOOL)isPaused;
- (BOOL)isActive;
- (BOOL)isDone;
- (unsigned int)installType;
- (id)fetchIconImageWithFormat:(int)fp8;
- (void)iconChanged;
- (void)setApplicationProxy:(id)fp8;
- (void)noteDownloadStatusChanged;
- (id)applicationBundleID;
- (id)proxy;
- (id)description;
- (BOOL)isEqual:(id)fp8;
- (void)invalidate;
- (void)dealloc;
- (id)initWithProxy:(id)fp8;

@end
