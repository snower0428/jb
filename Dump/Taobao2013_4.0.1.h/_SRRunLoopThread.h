//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSThread.h"

@class NSRunLoop;

__attribute__((visibility("hidden")))
@interface _SRRunLoopThread : NSThread
{
    struct dispatch_group_s *_waitGroup;
    NSRunLoop *_runLoop;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void)main;
- (id)init;
- (void)dealloc;

@end

