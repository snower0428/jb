//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SSZipArchive : NSObject
{
    NSString *_path;
    NSString *_filename;
    void *_zip;
}

+ (id)_dateWithMSDOSFormat:(unsigned long)arg1;
+ (BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5 delegate:(id)arg6;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id *)arg5;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
- (void).cxx_destruct;
- (BOOL)close;
- (BOOL)writeData:(id)arg1 filename:(id)arg2;
- (BOOL)writeFile:(id)arg1;
- (void)zipInfo:(CDStruct_e359c197 *)arg1 setDate:(id)arg2;
- (BOOL)open;
- (id)initWithPath:(id)arg1;

@end

