//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage, UIImageView;

@interface TBMOperation : NSObject
{
    BOOL isRequestLogin;
    NSString *operationId;
    NSString *picUrl;
    NSString *h5Url;
    NSString *operType;
    NSString *picUrlForList;
    NSString *h5UrlForList;
    id _delegate;
    UIImageView *_imgView;
    UIImage *_img;
}

@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;
@property(retain, nonatomic) UIImageView *imgView; // @synthesize imgView=_imgView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *h5UrlForList; // @synthesize h5UrlForList;
@property(retain, nonatomic) NSString *picUrlForList; // @synthesize picUrlForList;
@property BOOL isRequestLogin; // @synthesize isRequestLogin;
@property(retain, nonatomic) NSString *operType; // @synthesize operType;
@property(retain, nonatomic) NSString *h5Url; // @synthesize h5Url;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(retain, nonatomic) NSString *operationId; // @synthesize operationId;
- (void)dealloc;
- (void)checkAndLoadImg;
- (void)fillListOperation:(id)arg1;
- (void)fillOperation:(id)arg1;

@end

