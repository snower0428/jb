//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTA4QCDispatcher : NSObject
{
    struct dispatch_queue_s *task_queue;
    struct __CFArray *streams;
}

+ (id)getInstance;
- (void)send:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (BOOL)nsRequest:(id)arg1 responseData:(id *)arg2;
- (void)sendEvent:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)close;
- (id)init;

@end
