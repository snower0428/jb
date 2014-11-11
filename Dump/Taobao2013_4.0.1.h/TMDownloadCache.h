//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIDownloadCache.h"

@interface TMDownloadCache : ASIDownloadCache
{
    id <TMImageQualityStrategy> _imageStrategy;
}

+ (id)keyForURL:(id)arg1;
@property(nonatomic) id <TMImageQualityStrategy> imageStrategy; // @synthesize imageStrategy=_imageStrategy;
- (void)storeResponseForRequest:(id)arg1 maxAge:(double)arg2;
- (id)pathToStoreCachedResponseHeadersForRequest:(id)arg1;
- (id)pathToStoreCachedResponseDataForRequest:(id)arg1;
- (id)pathToCachedResponseHeadersForURL:(id)arg1;
- (id)pathToCachedResponseDataForURL:(id)arg1;
- (id)pathToFile:(id)arg1;

@end

