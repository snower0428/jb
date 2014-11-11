//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSMutableData, NSURL, NSURLConnection;

__attribute__((visibility("hidden")))
@interface AsyncImageConnection : NSObject
{
    BOOL _loading;
    BOOL _cancelled;
    NSURLConnection *_connection;
    NSMutableData *_data;
    NSURL *_URL;
    NSCache *_cache;
    id _target;
    SEL _success;
    SEL _failure;
}

@property(readonly, nonatomic) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(readonly, nonatomic, getter=isLoading) BOOL loading; // @synthesize loading=_loading;
@property(nonatomic) SEL failure; // @synthesize failure=_failure;
@property(nonatomic) SEL success; // @synthesize success=_success;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)start;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)processDataInBackground:(id)arg1;
- (void)cacheImage:(id)arg1;
- (void)loadFailedWithError:(id)arg1;
- (BOOL)isInCache;
- (id)cachedImage;
- (id)initWithURL:(id)arg1 cache:(id)arg2 target:(id)arg3 success:(SEL)arg4 failure:(SEL)arg5;

@end
