//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface LZMAExtractor : NSObject
{
}

+ (BOOL)extractArchiveEntry:(id)arg1 archiveEntry:(id)arg2 outPath:(id)arg3;
+ (id)extract7zArchive:(id)arg1 destinationPath:(id)arg2 tmpDirName:(id)arg3;
+ (id)extract7zArchive:(id)arg1 tmpDirName:(id)arg2;
+ (id)extract7zArchive:(id)arg1 dirName:(id)arg2 preserveDir:(BOOL)arg3;
+ (void)recurseIntoDirectories:(id)arg1 dirName:(id)arg2 entryPrefix:(id)arg3;
+ (id)generateUniqueTmpCachePath;

@end

