//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCModel.h"

@class NSString;

@interface MtopArcticCircleRecommendDetailResponseData : ATCModel
{
    NSString *_content;
    NSString *_msgCode;
    NSString *_msgInfo;
    NSString *_contentId;
    NSString *_contentTitle;
    NSString *_summary;
    NSString *_pic;
    NSString *_tags;
    NSString *_type;
    NSString *_authorNick;
    NSString *_gmtCreate;
    NSString *_specialJson;
}

@property(copy, nonatomic) NSString *specialJson; // @synthesize specialJson=_specialJson;
@property(copy, nonatomic) NSString *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(copy, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(retain, nonatomic) NSString *msgInfo; // @synthesize msgInfo=_msgInfo;
@property(retain, nonatomic) NSString *msgCode; // @synthesize msgCode=_msgCode;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

