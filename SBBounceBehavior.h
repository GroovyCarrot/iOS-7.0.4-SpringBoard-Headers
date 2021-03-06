/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

#import "UICollisionBehaviorDelegate-Protocol.h"

@class UIAttachmentBehavior, UICollisionBehavior, UIDynamicItemBehavior, UIGravityBehavior;

@interface SBBounceBehavior : _ABAddressBookCopyLocalizedLabel <UICollisionBehaviorDelegate>
{
    float _midwayPosition;
    float _completionThreshold;
    struct CGRect _targetFrame;
    id <UIDynamicItem> _item;
    UIDynamicItemBehavior *_bodyBehavior;
    UICollisionBehavior *_collisionBehavior;
    UIGravityBehavior *_gravityBehavior;
    UIDynamicItemBehavior *_pushBehavior;
    UIAttachmentBehavior *_draggingBehavior;
    id <SBBounceBehaviorDelegate> _delegate;
    float _gravity;
    float _velocity;
    float _elasticity;
    float _friction;
    float _resistance;
    float _minVelocityToAssist;
    float _maxVelocityToAssist;
    float _maxVelocityAssistance;
    struct UIEdgeInsets _boundaryInsets;
}

- (struct UIEdgeInsets)boundaryInsets;
- (void)setMaxVelocityAssistance:(float)fp8;
- (float)maxVelocityAssistance;
- (void)setMaxVelocityToAssist:(float)fp8;
- (float)maxVelocityToAssist;
- (void)setMinVelocityToAssist:(float)fp8;
- (float)minVelocityToAssist;
- (float)resistance;
- (float)friction;
- (float)elasticity;
- (void)setVelocity:(float)fp8;
- (float)velocity;
- (float)gravity;
- (void)setDelegate:(id)fp8;
- (id)delegate;
- (void)collisionBehavior:(id)fp8 beganContactForItem:(id)fp12 withBoundaryIdentifier:(id)fp16 atPoint:(struct CGPoint)fp20;
- (BOOL)allowsAnimatorToStop;
- (float)_maxVelocityToAssist;
- (float)_minVelocityToAssist;
- (float)_velocityAssistance;
- (BOOL)_shouldAssistWithVelocity:(float)fp8;
- (float)_adjustedVelocity:(float)fp8;
- (float)_itemOriginY;
- (BOOL)_itemStopped;
- (BOOL)_itemCompleted;
- (BOOL)_itemPastMidway;
- (float)_percentRemaining;
- (float)_percentComplete;
- (void)_removeDraggingBehavior;
- (void)_beginInteraction;
- (void)finishInteraction;
- (void)finishInteractionWithVelocity:(struct CGPoint)fp8;
- (void)finishInteractionWithVelocity:(struct CGPoint)fp8 abortIfNotPastMidway:(BOOL)fp16;
- (void)updateInteractionWithPoint:(struct CGPoint)fp8;
- (void)initiateInteractionFromPoint:(struct CGPoint)fp8;
- (void)bounce;
- (void)setBoundaryInsets:(struct UIEdgeInsets)fp8;
- (void)setResistance:(float)fp8;
- (void)setFriction:(float)fp8;
- (void)setElasticity:(float)fp8;
- (void)setGravity:(float)fp8;
- (void)_setupCollisionBoundaries;
- (void)_frameCollisionBoundaryPoints:(struct CGPoint *)fp8;
- (BOOL)_isGravityDown;
- (BOOL)isActive;
- (void)dealloc;
- (id)initWithItem:(id)fp8;
- (id)initWithItem:(id)fp8 targetFrame:(struct CGRect)fp12;

@end

