//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface YMLQuartzToolkit : NSObject
{
}

+ (void)cubeTransitionSuperView:(id)arg1 fromView:(id)arg2 toView:(id)arg3 duration:(double)arg4 options:(int)arg5 completionBlock:(CDUnknownBlockType)arg6;
+ (void)drawRadialGradient:(struct CGRect)arg1 colors:(const float *)arg2 locations:(const float *)arg3 startPoint:(struct CGPoint)arg4 startRadius:(float)arg5 endPoint:(struct CGPoint)arg6 endRadius:(float)arg7 extendsPastStart:(BOOL)arg8 extendsPastEnd:(BOOL)arg9;
+ (void)drawLinearGradient:(struct CGRect)arg1 colors:(const float *)arg2 locations:(const float *)arg3 startPoint:(struct CGPoint)arg4 endPoint:(struct CGPoint)arg5 extendsPastStart:(BOOL)arg6 extendsPastEnd:(BOOL)arg7;
+ (void)drawImage:(struct CGImage *)arg1 rect:(struct CGRect)arg2;
+ (void)strokeLine:(const float *)arg1 startPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3 width:(float)arg4;
+ (void)strokeRect:(struct CGRect)arg1 stroke:(const float *)arg2 width:(float)arg3;
+ (void)drawRect:(struct CGRect)arg1 fill:(const float *)arg2 radius:(float)arg3;
+ (void)drawRect:(struct CGRect)arg1 stroke:(const float *)arg2 radius:(float)arg3 width:(float)arg4;
+ (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 width:(float)arg3 height:(float)arg4;
+ (void)addRoundedRectToPath:(struct CGContext *)arg1 rect:(struct CGRect)arg2 radius:(float)arg3;
+ (id)cubicAnimationLeftToCenterWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationRightToCenterWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationTopToCenterWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationBottomToCenterWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationCenterToRightWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationCenterToLeftWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationCenterToBottomWithDuration:(double)arg1 radius:(float)arg2;
+ (id)cubicAnimationCenterToTopWithDuration:(double)arg1 radius:(float)arg2;
+ (id)animationInterpolationCurveWithKeyPath:(id)arg1 withInterPolationCount:(int)arg2 withDuration:(double)arg3 withProcessingBlock:(CDUnknownBlockType)arg4;

@end

