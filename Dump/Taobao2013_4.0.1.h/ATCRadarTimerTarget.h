//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ATCRadarTimerTarget : NSObject
{
    id _target;
    SEL _selector;
}

- (void)dealloc;
- (void)timerAction:(id)arg1;
- (id)initWithOriginalTarget:(id)arg1 selector:(SEL)arg2;

@end
