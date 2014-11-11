//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface QQApiURLObject : QQApiObject
{
    NSURL *_url;
    NSData *_previewImageData;
    int _targetContentType;
    NSURL *_previewImageURL;
}

+ (id)objectWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageURL:(id)arg4 targetContentType:(int)arg5;
+ (id)objectWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageData:(id)arg4 targetContentType:(int)arg5;
+ (id)objectWithURL:(id)arg1;
@property(retain, nonatomic) NSURL *previewImageURL; // @synthesize previewImageURL=_previewImageURL;
@property(nonatomic) int targetContentType; // @synthesize targetContentType=_targetContentType;
@property(retain, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;
- (id)initWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageURL:(id)arg4 targetContentType:(int)arg5;
- (id)initWithURL:(id)arg1 title:(id)arg2 description:(id)arg3 previewImageData:(id)arg4 targetContentType:(int)arg5;
- (id)initWithURL:(id)arg1;

@end

