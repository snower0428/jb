//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSMutableDictionary, UIImage;

@interface IGAssetWriter : NSObject
{
    NSMutableDictionary *_metadata;
    UIImage *_image;
    CLLocation *_location;
}

+ (void)writeVideo:(id)arg1 toInstagramAlbum:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
+ (void)writeVideoToInstagramAlbum:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (void)writeVideoToCameraRoll:(id)arg1;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)showLibraryAccessMessage;
- (void)writeToInstagramAlbum:(BOOL)arg1;
- (void)writeToInstagramAlbum;
- (void)writeToCameraRoll;
- (id)initWithImage:(id)arg1 metadata:(id)arg2;
- (id)init;

@end

