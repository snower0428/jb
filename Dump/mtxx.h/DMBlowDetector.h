//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioRecorder, NSTimer;

@interface DMBlowDetector : NSObject
{
    AVAudioRecorder *_recorder;
    NSTimer *_levelTimer;
    double _lowPassResults;
    CDUnknownBlockType _callBack;
}

- (void)stop;
- (void)levelTimerCallback:(id)arg1;
- (id)detectWithThresholdValue:(double)arg1;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

