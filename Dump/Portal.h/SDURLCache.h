/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSOperation, NSString, NSMutableDictionary, NSOperationQueue, NSTimer;

@interface SDURLCache : XXUnknownSuperclass {
@private
	NSString* diskCachePath;
	NSMutableDictionary* diskCacheInfo;
	BOOL diskCacheInfoDirty;
	BOOL ignoreMemoryOnlyStoragePolicy;
	BOOL disabled;
	BOOL _enableForIOS5AndUp;
	unsigned diskCacheUsage;
	double minCacheInterval;
	NSOperationQueue* ioQueue;
	NSTimer* periodicMaintenanceTimer;
	NSOperation* periodicMaintenanceOperation;
}
@property(retain) NSOperation* periodicMaintenanceOperation;
@property(retain, nonatomic) NSOperationQueue* ioQueue;
@property(readonly, assign, nonatomic) NSMutableDictionary* diskCacheInfo;
@property(retain, nonatomic) NSString* diskCachePath;
@property(assign, nonatomic) BOOL ignoreMemoryOnlyStoragePolicy;
@property(assign, nonatomic) double minCacheInterval;
+(id)defaultCachePath;
+(id)expirationDateFromHeaders:(id)headers withStatusCode:(int)statusCode;
+(id)dateFromHttpDateString:(id)httpDateString;
+(id)cacheKeyForURL:(id)url;
+(id)canonicalRequestForRequest:(id)request;
-(void)dealloc;
-(BOOL)isCached:(id)cached;
-(void)removeAllCachedResponses;
-(void)removeCachedResponseForRequest:(id)request;
-(unsigned)currentDiskUsage;
-(id)cachedResponseForRequest:(id)request;
-(void)storeCachedResponse:(id)response forRequest:(id)request;
-(id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path enableForIOS5AndUp:(BOOL)ios5AndUp;
-(id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;
-(void)periodicMaintenance;
-(void)storeToDisk:(id)disk;
-(void)balanceDiskUsage;
-(void)removeCachedResponseForCachedKeys:(id)cachedKeys;
-(void)saveCacheInfo;
-(void)createDiskCachePath;
@end
