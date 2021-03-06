/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSMutableDictionary, NSString;

@interface SBPluginManager : _ABAddressBookCopyLocalizedLabel
{
    NSString *_pluginsDirectory;
    NSMutableDictionary *_plugins;
}

+ (id)sharedInstance;
- (Class)loadPluginBundle:(id)fp8;
- (Class)loadPluginNamed:(id)fp8;
- (void)loadAllLaunchPlugins;
- (id)springBoardPluginsDirectory;
- (void)dealloc;
- (id)init;

@end

