//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBFluidSlideGestureRecognizer.h"

@interface SBPanGestureRecognizer : SBFluidSlideGestureRecognizer
{
    float _arcCenter;
    float _arcSize;
    BOOL _recognizesHorizontalPanning;
    BOOL _recognizesVerticalPanning;
}

- (void)updateForBeganOrMovedTouches:(struct __SBGestureContext *)arg1;
- (float)computeIncrementalGestureMotion:(struct __SBGestureContext *)arg1;
- (id)initForVerticalPanning;
- (id)initForHorizontalPanning;
- (id)init;

@end

