//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityModel.h"

@class NSString;

@interface TBCityUploadFileItem : TBCityModel
{
    NSString *_tryNum;
    NSString *_accessToken;
    NSString *_validTime;
    NSString *_fileSize;
    NSString *_status;
    NSString *_tfsKey;
    NSString *_resourceUri;
}

@property(retain, nonatomic) NSString *resourceUri; // @synthesize resourceUri=_resourceUri;
@property(retain, nonatomic) NSString *tfsKey; // @synthesize tfsKey=_tfsKey;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *validTime; // @synthesize validTime=_validTime;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *tryNum; // @synthesize tryNum=_tryNum;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

