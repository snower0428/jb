//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"

@class NSMutableData, NSURL, NSURLConnection, NSURLResponse;

__attribute__((visibility("hidden")))
@interface GADURLConnection : NSObject <NSURLConnectionDataDelegate>
{
    BOOL _isInProgress;
    BOOL _allowCache;
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    id <GADURLConnectionDelegate> _delegate;
    NSURLConnection *_connection;
    NSURLResponse *_response;
    NSMutableData *_receivedData;
}

+ (void)clearCache;
+ (id)cacheKeyForURL:(id)arg1;
+ (id)defaultCachePath;
+ (id)memoryCache;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GADURLConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL allowCache; // @synthesize allowCache=_allowCache;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) BOOL isInProgress; // @synthesize isInProgress=_isInProgress;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (BOOL)tryToStoreResponseAndData;
- (id)cachedResponseForURL:(id)arg1;
- (id)requestForURL:(id)arg1 withData:(id)arg2 andType:(id)arg3;
- (id)connectionFactory;
- (void)dealloc;
- (void)cancel;
- (void)stop;
- (BOOL)startWithURL:(id)arg1 withData:(id)arg2 andType:(id)arg3 forDelegate:(id)arg4 error:(id *)arg5;
- (BOOL)startWithURL:(id)arg1 withData:(id)arg2 andType:(id)arg3 forDelegate:(id)arg4;
- (BOOL)startWithURL:(id)arg1 forDelegate:(id)arg2 error:(id *)arg3;
- (BOOL)startWithURL:(id)arg1 forDelegate:(id)arg2;

@end

