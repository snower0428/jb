//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ImageCacheManager : NSObject
{
    NSMutableDictionary *imageCaches;
}

@property(retain, nonatomic) NSMutableDictionary *imageCaches; // @synthesize imageCaches;
- (void)clearCache;
- (id)cacheImageNamed:(id)arg1 withSize:(struct CGSize)arg2;
- (id)cacheImageNamed:(id)arg1;
- (void)dealloc;
- (id)init;

@end
