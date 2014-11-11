//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WWASIHTTPBaseRequest.h"

@class NSLock;

@interface WXASIHTTPBaseRequest : WWASIHTTPBaseRequest
{
    int _requestTimesWithWxWebToken;
    NSLock *_cancelLock;
}

@property(nonatomic) int requestTimesWithWxWebToken; // @synthesize requestTimesWithWxWebToken=_requestTimesWithWxWebToken;
- (BOOL)willHandleRequestResultString:(id)arg1;
- (void)doRequestWithParamsImmediately:(id)arg1;
- (void)doRequestWithParams:(id)arg1;
- (BOOL)requestWillStart;
- (void)makeRequestFailed;
- (void)cancelRequest;
- (id)WXHttpInterfaceVersion;
- (id)getStaticParams;
- (void)dealloc;
- (id)init;

@end

