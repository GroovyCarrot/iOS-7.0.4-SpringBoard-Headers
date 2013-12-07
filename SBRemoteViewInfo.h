/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class NSString, SBApplication, SBProxyRemoteView;

@interface SBRemoteViewInfo : _ABAddressBookCopyLocalizedLabel
{
    NSString *_remoteViewIdentifier;
    SBProxyRemoteView *_proxyRemoteView;
    unsigned int _contextID;
    SBApplication *_application;
    struct CGSize _viewSize;
}

- (void)setViewSize:(struct CGSize)fp8;
- (struct CGSize)viewSize;
- (void)setApplication:(id)fp8;
- (id)application;
- (void)setProxyRemoteView:(id)fp8;
- (id)proxyRemoteView;
- (void)setContextID:(unsigned int)fp8;
- (unsigned int)contextID;
- (void)setRemoteViewIdentifier:(id)fp8;
- (id)remoteViewIdentifier;
- (void)dealloc;

@end

