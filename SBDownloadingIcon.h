/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

@interface SBDownloadingIcon : SBLeafIcon
{
    BOOL _wasUninstalledByUser;
    BOOL _isNewsstandDownload;
    SBApplicationPlaceholder *_appPlaceholder;
}

+ (id)leafIdentifierForApplicationPlaceholder:(id)fp8;
+ (id)leafIdentifierForApplicationPlaceholderBundleID:(id)fp8;
- (void)cancelDownload;
- (BOOL)iconAppearsInNewsstand;
- (void)_showAlertForError:(id)fp8;
- (id)uninstallAlertCancelTitle;
- (id)uninstallAlertConfirmTitle;
- (id)uninstallAlertBody;
- (id)uninstallAlertTitle;
- (void)setUninstalledByUser:(BOOL)fp8;
- (BOOL)uninstalledByUser;
- (void)setNewsstandDownload:(BOOL)fp8;
- (BOOL)isNewsstandDownload;
- (BOOL)matchesApplicationIcon:(id)fp8;
- (id)appPlaceholder;
- (void)setApplicationPlaceholder:(id)fp8;
- (void)reloadForStatusChange;
- (void)completeUninstall;
- (id)realDisplayName;
- (id)homescreenIconImage;
- (id)_darkenedIconImageForImage:(id)fp8;
- (id)gridCellImage;
- (id)identifierForCorrespondingApplicationIcon;
- (id)description;
- (id)representation;
- (BOOL)matchesRepresentation:(id)fp8;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)dealloc;
- (id)initWithApplicationPlaceholder:(id)fp8;

@end

