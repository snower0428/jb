//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AsyncCallbackBase.h"

@class NSMutableArray, NSTimer;

@interface WXHTTPRequestProcessCenter : NSObject <AsyncCallbackBase>
{
    struct dispatch_queue_s *_processRequestDispatchQueue;
    BOOL _isRequestingWxWebToken;
    NSMutableArray *_waitingRequestQueue;
    NSTimer *_requestWxWebTokenTimer;
}

+ (id)sharedInstance;
- (id)getWxWebToken:(double *)arg1;
- (id)getLatestRecordWxWebTokenDate;
- (void)setWxWebToken:(id)arg1 withExpireDuration:(double)arg2;
- (id)getWxWebToken;
- (void)setWxWebToken:(id)arg1;
- (void)ResponseFail:(unsigned int)arg1 forReqParam:(id)arg2 forError:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)ResponseSuccess:(unsigned int)arg1 forReqParam:(id)arg2 forRspData:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)requestWxWebToken;
- (void)generateFailedRequest;
- (void)removeAndCancelHttpRequest:(id)arg1;
- (void)removeHttpRequest:(id)arg1;
- (void)processRequestsInWaitingQueueIfGetToken:(id)arg1;
- (void)cancelRequest:(id)arg1;
- (void)resendRequest:(id)arg1;
- (void)clearReqInQueueIfFailedToGetToken;
- (BOOL)isRequestingWxWebToken;
- (void)addToWaitingQueue:(id)arg1;
- (void)moveRequestToTop:(id)arg1;
- (void)didRequestWxWebTokenNotification:(id)arg1;
- (void)stopRequestWxWebTokenTimer;
- (void)didRequestWxWebTokenTimeout:(id)arg1;
- (void)restartRequestWxWebTokenTimer;
- (struct dispatch_queue_s *)getProcessRequestDispatchQueue;
- (void)processHttpRequestIfTokenInvalidate:(id)arg1;
- (BOOL)isRequestInWaitingQueue:(id)arg1;
- (void)dealloc;
- (id)init;

@end
