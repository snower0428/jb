//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewItem.h"

@class NSString;

@interface TBImageButtonItem : TBViewItem
{
    NSString *_imageURL;
    float _imageWidth;
    float _imageHeight;
    float _imageRadius;
    int _imageContentMode;
}

@property(nonatomic) int imageContentMode; // @synthesize imageContentMode=_imageContentMode;
@property(nonatomic) float imageRadius; // @synthesize imageRadius=_imageRadius;
@property(nonatomic) float imageHeight; // @synthesize imageHeight=_imageHeight;
@property(nonatomic) float imageWidth; // @synthesize imageWidth=_imageWidth;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
- (id)viewAttributes;
- (id)imageButtonStyleWithState:(id)arg1 size:(id)arg2 contentMode:(int)arg3;
- (id)init;
- (void)dealloc;

@end

