//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABFavoritesEntry.h"

@class UIImage;

@interface PHFavoritesEntry : ABFavoritesEntry
{
    UIImage *_thumbnail;
    UIImage *_starkThumbnail;
    _Bool _isPersonImage;
}

+ (id)sharedStarkMonogrammer;
+ (id)sharedMonogrammer;
+ (_Bool)_usesFlatImages;
@property(nonatomic) _Bool isPersonImage; // @synthesize isPersonImage=_isPersonImage;
- (void)dealloc;
- (id)starkThumbnail;
- (id)thumbnail;
- (void)loadStarkThumbnailIfNecessary;
- (void)loadThumbnailIfNecessary;
- (id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void *)arg2;

@end
