//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDMPhoto.h"

@class NSString, NSURL, UIImage;

@interface IDMPhoto : NSObject <IDMPhoto>
{
    NSString *_photoPath;
    UIImage *_underlyingImage;
    NSString *_caption;
    BOOL _loadingInProgress;
    NSURL *_photoURL;
    CDUnknownBlockType _progressUpdateBlock;
}

+ (id)photosWithURLs:(id)arg1;
+ (id)photosWithFilePaths:(id)arg1;
+ (id)photosWithImages:(id)arg1;
+ (id)photoWithURL:(id)arg1;
+ (id)photoWithFilePath:(id)arg1;
+ (id)photoWithImage:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType progressUpdateBlock; // @synthesize progressUpdateBlock=_progressUpdateBlock;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) NSURL *photoURL; // @synthesize photoURL=_photoURL;
@property(retain, nonatomic) UIImage *underlyingImage; // @synthesize underlyingImage=_underlyingImage;
- (void).cxx_destruct;
- (void)imageLoadingComplete;
- (void)loadImageFromFileAsync;
- (id)decodedImageWithImage:(id)arg1;
- (void)unloadUnderlyingImage;
- (void)loadUnderlyingImageAndNotify;
- (id)initWithURL:(id)arg1;
- (id)initWithFilePath:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

