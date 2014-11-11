//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TACommHttpInternal;

@interface TACommHttp : NSObject
{
    TACommHttpInternal *h_Internal;
}

+ (id)commHttpWithDelegate:(id)arg1 timeoutSeconds:(double)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)timeoutCancel;
- (void)manualCancel;
- (void)cancelComm:(unsigned int)arg1;
- (void)start:(BOOL)arg1;
- (unsigned int)receiveDataTimes;
- (int)commPhase;
- (void)setTimeoutPhase:(int)arg1;
- (int)timeoutPhase;
- (BOOL)commTimeout;
- (BOOL)communicating;
- (void)commHttpThrdFunc:(id)arg1;
- (void)execCommEnd;
- (void)execConnectDidFail;
- (void)execConnectDidFinish;
- (void)execCreateConnectDidFail;
- (void)execCancel:(id)arg1;
- (BOOL)willLogWholeLifecycle;
- (void)commWaitTimeoutCheckOver:(BOOL)arg1;
- (void)logWholeLifecycle:(BOOL)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 timeoutSeconds:(double)arg2;
- (id)initWithDelegate:(id)arg1 timeoutSeconds:(double)arg2 autoRelease:(BOOL)arg3;

@end
