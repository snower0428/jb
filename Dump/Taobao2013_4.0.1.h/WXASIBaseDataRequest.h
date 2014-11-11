//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIBaseDataRequest.h"

@class NSLock;

@interface WXASIBaseDataRequest : ASIBaseDataRequest
{
    int _requestTimesWithWxWebToken;
    NSLock *_cancelLock;
}

@property(nonatomic) int requestTimesWithWxWebToken; // @synthesize requestTimesWithWxWebToken=_requestTimesWithWxWebToken;
- (BOOL)willHandleRequestResultString:(id)arg1;
- (void)cancelRequest;
- (void)makeRequestFailed;
- (id)WXHttpInterfaceVersion;
- (BOOL)requestWillStart;
- (void)doRequestWithParamsImmediately:(id)arg1;
- (void)doRequestWithParams:(id)arg1;
- (id)getStaticParams;
- (void)dealloc;
- (id)init;

@end

