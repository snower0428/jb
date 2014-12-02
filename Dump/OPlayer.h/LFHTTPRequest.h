//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMessagePort, NSMutableData, NSString, NSTimer;

@interface LFHTTPRequest : NSObject
{
    id _delegate;
    double _timeoutInterval;
    NSString *_userAgent;
    NSString *_contentType;
    NSDictionary *_requestHeader;
    NSMutableData *_receivedData;
    NSString *_receivedContentType;
    struct __CFReadStream *_readStream;
    NSTimer *_receivedDataTracker;
    double _lastReceivedDataUpdateTime;
    NSTimer *_requestMessageBodyTracker;
    double _lastSentDataUpdateTime;
    unsigned int _requestMessageBodySize;
    unsigned int _expectedDataLength;
    unsigned int _lastReceivedBytes;
    unsigned int _lastSentBytes;
    void *_readBuffer;
    unsigned long _readBufferSize;
    id _sessionInfo;
    BOOL _shouldWaitUntilDone;
    NSMessagePort *_synchronousMessagePort;
}

@property BOOL shouldWaitUntilDone;
- (void)setReadBufferSize:(unsigned long)arg1;
- (unsigned long)readBufferSize;
@property(retain) id sessionInfo;
@property id delegate;
@property(readonly) unsigned int expectedDataLength;
- (id)receivedContentType;
@property(readonly) NSData *receivedData;
@property(copy) NSString *contentType;
@property(copy) NSString *userAgent;
@property double timeoutInterval;
@property(copy) NSDictionary *requestHeader;
- (id)getReceivedDataAndDetachFromRequest;
- (void)cancelWithoutDelegateMessage;
- (void)cancel;
- (BOOL)performMethod:(id)arg1 onURL:(id)arg2 withInputStream:(id)arg3 knownContentSize:(unsigned int)arg4;
- (BOOL)performMethod:(id)arg1 onURL:(id)arg2 withData:(id)arg3;
- (BOOL)_performMethod:(id)arg1 onURL:(id)arg2 withData:(id)arg3 orWithInputStream:(id)arg4 knownContentSize:(unsigned int)arg5;
@property(readonly) BOOL isRunning;
- (id)init;
- (void)readStreamErrorOccurred;
- (void)readStreamEndEncountered;
- (void)readStreamHasBytesAvailable;
- (void)handleReceivedDataTrackerTick:(id)arg1;
- (void)handleRequestMessageBodyTrackerTick:(id)arg1;
- (void)handleTimeout;
- (void)_exitRunLoop;
- (void)finalize;
- (void)dealloc;
- (void)cleanUp;

@end
