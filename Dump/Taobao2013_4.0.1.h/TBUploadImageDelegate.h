//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTOPUploadRequestDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, TBMPPicThumbnailView;

__attribute__((visibility("hidden")))
@interface TBUploadImageDelegate : NSObject <MTOPUploadRequestDelegate>
{
    long long hasSendSize;
    NSMutableDictionary *_photoPool;
    NSString *_path;
    NSMutableArray *_cellPhotos;
    TBMPPicThumbnailView *_cellThumnbailView;
    long long _size;
}

@property(readonly, nonatomic) TBMPPicThumbnailView *cellThumnbailView; // @synthesize cellThumnbailView=_cellThumnbailView;
@property(readonly, nonatomic) NSMutableArray *cellPhotos; // @synthesize cellPhotos=_cellPhotos;
@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSMutableDictionary *photoPool; // @synthesize photoPool=_photoPool;
- (void).cxx_destruct;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (id)initWithPool:(id)arg1 andPath:(id)arg2 andSize:(long long)arg3 andPhotos:(id)arg4 andThumbnailView:(id)arg5;

@end
