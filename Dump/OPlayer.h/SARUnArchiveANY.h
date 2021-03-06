//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SSZipArchiveDelegate.h"

@class NSString, SSZipArchive;

__attribute__((visibility("hidden")))
@interface SARUnArchiveANY : NSObject <SSZipArchiveDelegate>
{
    SSZipArchive *_zipArchive;
    NSString *_fileType;
    CDUnknownBlockType completionBlock;
    CDUnknownBlockType failureBlock;
    NSString *_filePath;
    NSString *_destinationPath;
}

@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock;
- (void).cxx_destruct;
- (void)moveFilesToDestinationPathFromCompletePaths:(id)arg1 withFilePaths:(id)arg2;
- (id)applicationDocumentsDirectory;
- (void)zipArchiveDidUnzipArchiveAtPath:(id)arg1 zipInfo:(struct unz_global_info_s)arg2 unzippedPath:(id)arg3 WithFilePaths:(id)arg4;
- (void)decompress7z;
- (void)zipDecompress;
- (void)rarDecompress;
- (void)decompress;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

