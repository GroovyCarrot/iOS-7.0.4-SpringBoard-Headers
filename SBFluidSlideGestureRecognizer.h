/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "SBGestureRecognizer.h"

@interface SBFluidSlideGestureRecognizer : SBGestureRecognizer
{
    int m_degreeOfFreedom;
    unsigned int m_minTouches;
    BOOL m_blocksIconController;
    float _animationDistance;
    float _commitDistance;
    float _accelerationThreshold;
    float _accelerationPower;
    int _requiredDirectionality;
    float _defaultHandSize;
    float _handSizeCompensationPower;
    float _incrementalMotion;
    float _smoothedIncrementalMotion;
    float _cumulativeMotion;
    float _cumulativeMotionEnvelope;
    float _cumulativeMotionSkipped;
    BOOL _hasSignificantMotion;
    struct CGPoint _movementVelocityInPointsPerSecond;
    struct CGPoint _centroidPoint;
    double _recognitionStartTimestamp;
}

- (struct CGPoint)centroidPoint;
- (struct CGPoint)movementVelocityInPointsPerSecond;
- (void)setRequiredDirectionality:(int)fp8;
- (int)requiredDirectionality;
- (void)setAccelerationPower:(float)fp8;
- (float)accelerationPower;
- (void)setAccelerationThreshold:(float)fp8;
- (float)accelerationThreshold;
- (void)setAnimationDistance:(float)fp8;
- (float)animationDistance;
- (void)setMinTouches:(unsigned int)fp8;
- (unsigned int)minTouches;
- (int)degreeOfFreedom;
- (void)touchesCancelled:(struct __SBGestureContext *)fp8;
- (void)touchesEnded:(struct __SBGestureContext *)fp8;
- (void)touchesMoved:(struct __SBGestureContext *)fp8;
- (void)touchesBegan:(struct __SBGestureContext *)fp8;
- (void)updateActiveTouches:(struct __SBGestureContext *)fp8;
- (void)updateForEndedOrCancelledTouches:(struct __SBGestureContext *)fp8;
- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)fp8;
- (void)setState:(int)fp8;
- (int)completionTypeProjectingMomentumForInterval:(double)fp8;
- (float)projectMotionForInterval:(double)fp8;
- (void)computeCentroidPoint:(struct __SBGestureContext *)fp8;
- (void)computeHasSignificantMotionIfNeeded:(struct __SBGestureContext *)fp8;
- (float)computeIncrementalGestureMotion:(struct __SBGestureContext *)fp8;
- (void)computeGestureMotion:(struct __SBGestureContext *)fp8;
- (float)computeHandSizeCompensationGain:(float)fp8;
- (float)computeNonlinearSpeedGain:(float)fp8;
- (void)skipCumulativeMotion;
- (void)reset;
- (double)activeTouchTimestamp;
- (double)activeRecognitionDuration;
- (float)incrementalMotion;
- (float)cumulativeMotion;
- (float)cumulativePercentage;
- (float)skippedCumulativePercentage;
- (id)init;

@end
