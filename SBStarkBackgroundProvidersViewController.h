/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "SBStarkBackgroundProviderManagerObserver-Protocol.h"
#import "SBStarkBackgroundProviderRemoteViewControllerDelegate-Protocol.h"

@class SBStarkBackgroundProvider, SBStarkBackgroundProviderManager, SBStarkBackgroundProviderRemoteViewController, _UIAsyncInvocation;

@interface SBStarkBackgroundProvidersViewController : _ABAddressBookCopyLocalizedLabel <SBStarkBackgroundProviderManagerObserver, SBStarkBackgroundProviderRemoteViewControllerDelegate>
{
    _UIAsyncInvocation *_cancelRequest;
    SBStarkBackgroundProviderManager *_backgroundProviderManager;
    SBStarkBackgroundProviderRemoteViewController *_activeViewController;
    SBStarkBackgroundProvider *_transitioningToProvider;
    struct CGRect _viewportFrame;
    BOOL _makingInitialTransition;
    BOOL _firstTransitionOccurred;
    id <SBStarkBackgroundProvidersViewControllerDelegate> _delegate;
    unsigned int _reactivateAttempt;
    double _lastReactivationAttempt;
}

- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)removedBackgroundProvider:(id)fp8;
- (void)addedBackgroundProvider:(id)fp8;
- (void)didStopProvidingContent:(id)fp8;
- (void)_providerDidStopProvidingContent:(id)fp8;
- (BOOL)_isVisibleOrTransitioningTo:(id)fp8;
- (BOOL)_isVisible:(id)fp8;
- (BOOL)_isActive:(id)fp8;
- (void)_animateTo:(id)fp8 withTransition:(int)fp12;
- (void)_transitionToProvider:(id)fp8 withTransition:(int)fp12;
- (void)_finishInitialBackgroundTransitionIfNecessary;
- (void)loadView;
- (void)switchToState:(id)fp8 withAnimationName:(id)fp12;
- (void)setViewportFrame:(struct CGRect)fp8;
- (struct CGRect)viewportFrame;
- (void)dealloc;
- (id)initWithNibName:(id)fp8 bundle:(id)fp12;

@end
