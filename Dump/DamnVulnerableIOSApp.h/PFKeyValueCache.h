/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSCondition, NSCache, PFKeyValueDiskCacheDelegate;

@interface PFKeyValueCache : XXUnknownSuperclass {
	NSCache* memCache;
	NSString* cacheDir;
	PFKeyValueDiskCacheDelegate* diskDelegate;
	int diskOps;
	NSCondition* flushDoneCondition;
	unsigned maxDiskCacheBytes;
	unsigned maxDiskCacheRecords;
	unsigned maxMemCacheBytesPerRecord;
}
@property(assign, nonatomic) unsigned maxMemCacheBytesPerRecord;
@property(assign, nonatomic) unsigned maxDiskCacheRecords;
@property(assign, nonatomic) unsigned maxDiskCacheBytes;
@property(readonly, assign, nonatomic) NSString* cacheDir;
+(id)mainCache;
+(void)initialize;
-(void).cxx_destruct;
-(void)waitForDiskFlush;
-(unsigned)diskCacheRecordCount;
-(void)enableMemCache:(BOOL)cache;
-(void)clearMemCache;
-(void)clearDiskCache;
-(void)compactDiskCache;
-(void)setDiskCacheDelegate:(id)delegate;
-(id)cacheFileForKey:(id)key;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key maxAge:(double)age;
-(void)setObject:(id)object forKey:(id)key;
-(void)restoreDefaults;
-(void)dealloc;
-(id)initWithCacheDir:(id)cacheDir;
@end

