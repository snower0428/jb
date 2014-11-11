//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, UIImage;

@interface ImageCacheObject : NSObject
{
    UIImage *_image;
    UIImage *_grayImage;
    UIImage *_showImage;
    NSData *_imageData;
    struct CGSize _imageFitSize;
}

@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *showImage; // @synthesize showImage=_showImage;
@property(retain, nonatomic) UIImage *grayImage; // @synthesize grayImage=_grayImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize imageFitSize; // @synthesize imageFitSize=_imageFitSize;
- (void)dealloc;

@end

