//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSDictionary;

@interface TBUploadModel : TBModel
{
    int _status;
    int _percent;
    NSDictionary *_imageInfo;
}

@property(retain, nonatomic) NSDictionary *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(nonatomic) int percent; // @synthesize percent=_percent;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
