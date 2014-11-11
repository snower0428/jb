//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock, NSString;

@interface WVFileCache : NSObject
{
    NSString *_cachePath;
    NSRecursiveLock *_cacheLock;
}

@property(readonly, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
- (void).cxx_destruct;
- (void)invalidateAll;
- (void)invalidateSubDirectory:(id)arg1;
- (void)invalidateEntry:(id)arg1;
- (id)cacheDateForCacheKey:(id)arg1;
- (id)dataForCacheKey:(id)arg1;
- (id)dictionaryForCacheKey:(id)arg1;
- (void)writeData:(id)arg1 withCacheKey:(id)arg2;
- (void)writeDictionary:(id)arg1 withCacheKey:(id)arg2;
- (BOOL)hasEntry:(id)arg1;
- (id)pathForCacheKey:(id)arg1;
- (id)initWithPath:(id)arg1 subDirectories:(id)arg2;

@end

