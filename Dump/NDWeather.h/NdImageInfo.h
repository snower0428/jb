//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface NdImageInfo : NSObject
{
    BOOL bScreenShot;
    UIImage *imgCustomed;
    NSString *strImgFile;
}

+ (id)imageInfoWithFile:(id)arg1;
+ (id)imageInfoWithImage:(id)arg1;
+ (id)imageInfoWithScreenShot;
@property(readonly, nonatomic) NSString *strImgFile; // @synthesize strImgFile;
@property(readonly, nonatomic) UIImage *imgCustomed; // @synthesize imgCustomed;
@property(readonly, nonatomic) BOOL bScreenShot; // @synthesize bScreenShot;
- (void)setData:(BOOL)arg1 image:(id)arg2 file:(id)arg3;
- (void)dealloc;

@end
