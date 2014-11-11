//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache, NSFileManager, NSMutableArray, NSString;

@interface SDImageCache : NSObject
{
    NSFileManager *_fileManager;
    int _maxCacheAge;
    NSCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    struct dispatch_queue_s *_ioQueue;
    unsigned long long _maxCacheSize;
}

+ (id)sharedImageCache;
@property(nonatomic) struct dispatch_queue_s *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSCache *memCache; // @synthesize memCache=_memCache;
@property(nonatomic) unsigned long long maxCacheSize; // @synthesize maxCacheSize=_maxCacheSize;
@property(nonatomic) int maxCacheAge; // @synthesize maxCacheAge=_maxCacheAge;
- (void).cxx_destruct;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (int)getDiskCount;
- (unsigned long long)getSize;
- (void)backgroundCleanDisk;
- (void)cleanDisk;
- (void)clearDisk;
- (void)clearDiskSync;
- (void)clearMemory;
- (void)removeImageForKey:(id)arg1 fromDisk:(BOOL)arg2;
- (void)removeImageForKey:(id)arg1;
- (id)queryDiskCacheForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (BOOL)diskImageExistsWithKey:(id)arg1;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(BOOL)arg3;
- (void)storeImage:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toDisk:(BOOL)arg4;
- (id)cachedFileNameForKey:(id)arg1;
- (id)defaultCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)addReadOnlyCachePath:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1;
- (id)init;

@end

