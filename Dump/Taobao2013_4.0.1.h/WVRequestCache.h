//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WVFileCache, WVMemCache;

@interface WVRequestCache : NSObject
{
    int _storagePolicy;
    WVFileCache *_cache;
    WVMemCache *_memCache;
}

@property(nonatomic) int storagePolicy; // @synthesize storagePolicy=_storagePolicy;
- (void).cxx_destruct;
- (void)invalidateAll;
- (void)invalidateWithStoragePolicy:(int)arg1;
- (void)invalidateRequest:(id)arg1;
- (id)cacheDateForRequest:(id)arg1;
- (id)responseForRequest:(id)arg1;
- (void)storeResponse:(id)arg1 forRequest:(id)arg2;
- (BOOL)hasResponseForRequest:(id)arg1;
- (id)pathForRequest:(id)arg1;
@property(readonly, nonatomic) NSString *path;
- (id)initWithPath:(id)arg1 storagePolicy:(int)arg2;

@end
