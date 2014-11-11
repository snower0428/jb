//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBCDNImageCache : NSObject
{
}

+ (void)getCachedImageOfURL:(id)arg1 imageSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)getCachedImageOfURL:(id)arg1 imageSize:(struct CGSize)arg2 needCliping:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)getCachedImageOfURL:(id)arg1 imageSize:(struct CGSize)arg2 needAutoResize:(BOOL)arg3 needCliping:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)getCachedImageOfURL:(id)arg1 fromDisk:(BOOL)arg2 imageSize:(struct CGSize)arg3 needAutoResize:(BOOL)arg4 needCliping:(BOOL)arg5 needPlaceHolder:(BOOL)arg6 completion:(CDUnknownBlockType)arg7;
+ (void)getCachedImageOfURL:(id)arg1 fromDisk:(BOOL)arg2 imageSize:(struct CGSize)arg3 needAutoResize:(BOOL)arg4 needCliping:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)getMemoryCachedImageOfURL:(id)arg1 imageSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)clearMemory;
+ (id)cachedCDNImageSize;
+ (struct dispatch_queue_s *)sharedComputeQueue;

@end
