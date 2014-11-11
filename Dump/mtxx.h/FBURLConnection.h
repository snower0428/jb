//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURLConnection, NSURLResponse;

@interface FBURLConnection : NSObject
{
    BOOL _skipRoundtripIfCached;
    NSURLConnection *_connection;
    NSMutableData *_data;
    CDUnknownBlockType _handler;
    unsigned int _loggerSerialNumber;
    unsigned long _requestStartTime;
    NSURLResponse *_response;
    CDUnknownBlockType _upLoadProgressHandler;
}

+ (void)initialize;
@property(copy, nonatomic) CDUnknownBlockType upLoadProgressHandler; // @synthesize upLoadProgressHandler=_upLoadProgressHandler;
@property(nonatomic) BOOL skipRoundtripIfCached; // @synthesize skipRoundtripIfCached=_skipRoundtripIfCached;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(nonatomic) unsigned long requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) unsigned int loggerSerialNumber; // @synthesize loggerSerialNumber=_loggerSerialNumber;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (id)getCache;
- (BOOL)isCDNURL:(id)arg1;
- (BOOL)shouldShortCircuitRedirectResponse:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (void)logMessage:(id)arg1;
- (void)invokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2 response:(id)arg3 responseData:(id)arg4;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 cachedData:(id)arg2 forURL:(id)arg3;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 response:(id)arg2 responseData:(id)arg3;
- (void)logAndInvokeHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 uploadProgressHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

