//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BaiduMobAdResourceManager : NSObject
{
}

+ (id)sharedResourceManager;
- (BOOL)clearCacheDirectory:(int)arg1;
- (id)listOfDirectoryContents;
- (BOOL)deleteFileByName:(id)arg1;
- (int)countOfCachedFile;
- (id)addDataToCacheDir:(id)arg1 url:(id)arg2;
- (id)directoryPathForUrl:(id)arg1 shouldExist:(BOOL)arg2;
- (id)pathForUrl:(id)arg1 shouldExist:(BOOL)arg2;
- (id)cacheDir;
- (BOOL)isDirectoryThere;
- (id)getURLExtension:(id)arg1;

@end
