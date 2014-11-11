//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ImageDiskCache : NSObject
{
    NSString *_strSavePath;
}

+ (void)clearAllResidualCache;
- (void).cxx_destruct;
- (BOOL)clearCache;
- (id)imageWithName:(id)arg1;
- (BOOL)saveImage:(id)arg1 withName:(id)arg2;
- (BOOL)saveImageData:(char *)arg1 width:(int)arg2 height:(int)arg3 withName:(id)arg4;
- (id)strSavePath;
- (BOOL)isFileExistsWithFileName:(id)arg1;
- (BOOL)createCacheFolder:(id)arg1;
- (void)dealloc;

@end
