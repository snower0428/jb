//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBFileCache : NSObject
{
}

+ (void)removeImageCache;
+ (id)loadWithFilename:(id)arg1;
+ (void)saveWithFilename:(id)arg1 data:(id)arg2;
+ (id)loadImageWithFilename:(id)arg1;
+ (void)saveImageWithFilename:(id)arg1 data:(id)arg2;
+ (id)imageCacheDirectory;
+ (id)documentDirectory;

@end

