/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookCopyLocalizedLabel.h"

@class CAMutableMeshTransform, UIView;

@interface SBStretchTransformer : _ABAddressBookCopyLocalizedLabel
{
    UIView *m_view;
    int m_anchorEdge;
    int m_orientation;
    CAMutableMeshTransform *m_mesh;
    float m_stretchFactor;
    id m_animationCompletionHandler;
}

- (float)stretchFactor;
- (void)setOrientation:(int)fp8;
- (int)orientation;
- (void)setAnchorEdge:(int)fp8;
- (int)anchorEdge;
- (void)setView:(id)fp8;
- (id)view;
- (void)animationDidStop:(id)fp8 finished:(BOOL)fp12;
- (void)animateToZeroStretchFactorWithCompletionHandler:(id)fp(null);
- (void)animateToZeroStretchFactor;
- (void)updateMeshTransform:(id)fp8 stretchFactor:(float)fp12;
- (void)setStretchFactor:(float)fp8;
- (id)meshTransform;
- (void)dealloc;
- (id)initWithView:(id)fp8 anchorEdge:(int)fp12 orientation:(int)fp16;

@end

