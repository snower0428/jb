//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTCacheManagerProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface MTMemoryCacheManager : NSObject <MTCacheManagerProtocol>
{
    unsigned long long _privateCacheSize;
    unsigned long long _publicCacheSize;
    NSString *_privateCacheDirectory;
    NSString *_publicCacheDirectory;
    NSMutableDictionary *_memoryCache;
    NSMutableDictionary *_cachePathDictionary;
    NSMutableArray *_privateCacheKeys;
    NSMutableArray *_publicCacheKeys;
    NSMutableArray *_recentlyAccessedKeys;
    int _limit;
}

@property(nonatomic) int limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSMutableArray *recentlyAccessedKeys; // @synthesize recentlyAccessedKeys=_recentlyAccessedKeys;
@property(retain, nonatomic) NSMutableArray *publicCacheKeys; // @synthesize publicCacheKeys=_publicCacheKeys;
@property(retain, nonatomic) NSMutableArray *privateCacheKeys; // @synthesize privateCacheKeys=_privateCacheKeys;
@property(retain, nonatomic) NSMutableDictionary *cachePathDictionary; // @synthesize cachePathDictionary=_cachePathDictionary;
@property(retain, nonatomic) NSMutableDictionary *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(copy, nonatomic) NSString *publicCacheDirectory; // @synthesize publicCacheDirectory=_publicCacheDirectory;
@property(copy, nonatomic) NSString *privateCacheDirectory; // @synthesize privateCacheDirectory=_privateCacheDirectory;
- (void).cxx_destruct;
- (id)setPublicCache:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (id)setPublicCache:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)publicCacheForKey:(id)arg1 atPath:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)publicCacheForKey:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)publicCacheForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)publicCacheForKey:(id)arg1 error:(id *)arg2;
- (id)setPrivateCache:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (id)setPrivateCache:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (void)privateCacheForKey:(id)arg1 atPath:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)privateCacheForKey:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)privateCacheForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (id)privateCacheForKey:(id)arg1 error:(id *)arg2;
- (void)cleanPublicCacheAtPath:(id)arg1;
- (void)cleanPrivateCacheAtPath:(id)arg1;
- (void)cleanCache;
- (unsigned long long)publicCacheSizeAtPath:(id)arg1;
- (unsigned long long)privateCacheSizeAtPath:(id)arg1;
- (unsigned long long)cacheSize;
- (id)setEntity:(id)arg1 error:(id *)arg2;
- (id)getEntityForKey:(id)arg1 error:(id *)arg2;
- (id)init;

@end
