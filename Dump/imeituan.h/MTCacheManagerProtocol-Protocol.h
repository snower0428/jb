//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTCacheEntity, NSString;

@protocol MTCacheManagerProtocol <NSObject>
@property(copy, nonatomic) NSString *publicCacheDirectory;
@property(copy, nonatomic) NSString *privateCacheDirectory;
- (MTCacheEntity *)setEntity:(MTCacheEntity *)arg1 error:(id *)arg2;
- (MTCacheEntity *)setPublicCache:(id)arg1 forKey:(NSString *)arg2 atPath:(NSString *)arg3 error:(id *)arg4;
- (MTCacheEntity *)setPublicCache:(id)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (void)publicCacheForKey:(NSString *)arg1 atPath:(NSString *)arg2 finished:(void (^)(MTCacheEntity *, SAKError *))arg3;
- (void)publicCacheForKey:(NSString *)arg1 finished:(void (^)(MTCacheEntity *, SAKError *))arg2;
- (MTCacheEntity *)publicCacheForKey:(NSString *)arg1 atPath:(NSString *)arg2 error:(id *)arg3;
- (MTCacheEntity *)publicCacheForKey:(NSString *)arg1 error:(id *)arg2;
- (MTCacheEntity *)setPrivateCache:(id)arg1 forKey:(NSString *)arg2 atPath:(NSString *)arg3 error:(id *)arg4;
- (MTCacheEntity *)setPrivateCache:(id)arg1 forKey:(NSString *)arg2 error:(id *)arg3;
- (void)privateCacheForKey:(NSString *)arg1 atPath:(NSString *)arg2 finished:(void (^)(MTCacheEntity *, SAKError *))arg3;
- (void)privateCacheForKey:(NSString *)arg1 finished:(void (^)(MTCacheEntity *, SAKError *))arg2;
- (MTCacheEntity *)privateCacheForKey:(NSString *)arg1 atPath:(NSString *)arg2 error:(id *)arg3;
- (MTCacheEntity *)privateCacheForKey:(NSString *)arg1 error:(id *)arg2;
- (void)cleanPublicCacheAtPath:(NSString *)arg1;
- (void)cleanPrivateCacheAtPath:(NSString *)arg1;
- (void)cleanCache;
- (unsigned long long)publicCacheSizeAtPath:(NSString *)arg1;
- (unsigned long long)privateCacheSizeAtPath:(NSString *)arg1;
- (unsigned long long)cacheSize;
@end

