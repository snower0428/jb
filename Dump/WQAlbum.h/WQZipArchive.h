//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WQZipArchive : NSObject
{
}

+ (BOOL)unzipWithFile:(id)arg1 toPath:(id)arg2;
+ (BOOL)zipManyFiles:(id)arg1 withNewNameArray:(id)arg2 toDestPath:(id)arg3;
+ (BOOL)zipSingleFile:(id)arg1 withNewName:(id)arg2 toDestPath:(id)arg3;

@end

