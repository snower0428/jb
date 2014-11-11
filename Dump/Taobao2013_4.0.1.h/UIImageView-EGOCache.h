//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "EGOImageLoaderObserver.h"

@interface UIImageView (EGOCache) <EGOImageLoaderObserver>
@property(nonatomic) id <UIImageLoaderEGOCacheDelegate> delegate; // @dynamic delegate;
- (void)updateProgressView:(id)arg1;
- (void)imageLoaderDidReceiveProgress:(id)arg1;
- (void)imageLoaderDidFailToLoad:(id)arg1;
- (void)imageLoaderDidLoad:(id)arg1;
- (void)cancelImageLoad;
- (void)loadImageURLs:(id)arg1 placeHolderImage:(id)arg2 usingIndicator:(BOOL)arg3 delay:(float)arg4;
- (void)loadImageURL:(id)arg1 placeHolderImage:(id)arg2 usingIndicator:(BOOL)arg3 delay:(float)arg4;
- (void)removeIndicator;
- (void)initIndicator:(BOOL)arg1;
@end

