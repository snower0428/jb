//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTImageInfo.h"

@class NSData, NSString;

@interface MTUploadImageInfo : MTImageInfo
{
    int _imageID;
    int _uploadImageState;
    NSString *_imageFilePath;
    float _progress;
}

+ (id)instanceWithOrderReviewPicInfo:(id)arg1;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSString *imageFilePath; // @synthesize imageFilePath=_imageFilePath;
@property(nonatomic) int uploadImageState; // @synthesize uploadImageState=_uploadImageState;
@property(nonatomic) int imageID; // @synthesize imageID=_imageID;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSData *imageData;

@end
