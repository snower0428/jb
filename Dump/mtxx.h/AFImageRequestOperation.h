//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class UIImage;

__attribute__((visibility("hidden")))
@interface AFImageRequestOperation : AFHTTPRequestOperation
{
    BOOL _automaticallyInflatesResponseImage;
    UIImage *_responseImage;
    float _imageScale;
}

+ (BOOL)canProcessRequest:(id)arg1;
+ (id)acceptableContentTypes;
+ (id)imageRequestOperationWithRequest:(id)arg1 imageProcessingBlock:(CDUnknownBlockType)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
+ (id)imageRequestOperationWithRequest:(id)arg1 success:(CDUnknownBlockType)arg2;
@property(nonatomic) BOOL automaticallyInflatesResponseImage; // @synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage;
@property(nonatomic) float imageScale; // @synthesize imageScale=_imageScale;
@property(retain, nonatomic) UIImage *responseImage; // @synthesize responseImage=_responseImage;
- (void).cxx_destruct;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithRequest:(id)arg1;

@end
