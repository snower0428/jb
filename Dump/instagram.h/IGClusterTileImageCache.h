//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCache.h"

@interface IGClusterTileImageCache : NSCache
{
}

+ (id)sharedClusterTileImageCache;
- (void)addImage:(id)arg1 forUrl:(id)arg2;
- (id)imageForUrl:(id)arg1;
- (void)clear;
- (id)init;

@end

