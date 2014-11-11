//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "NdApSDWebImageManagerDelegate.h"

@interface UIImageView (NdApWebCache) <NdApSDWebImageManagerDelegate>
- (void)ndapSetImageWithURL:(id)arg1;
- (void)ndapSetImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)ndapSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3;
- (void)ndapSetImageWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)ndapSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)ndapSetImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(int)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)ndapCancelCurrentImageLoad;
- (id)rotateImage:(id)arg1 toOrient:(int)arg2;
- (void)webImageManager:(id)arg1 didFinishWithImage:(id)arg2;
@end
