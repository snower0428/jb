//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString;

@interface TCAddShareDic : TCAPIRequest
{
    NSString *_paramPlayurl;
    NSString *_paramSite;
    NSString *_paramSummary;
    NSString *_paramImages;
    NSString *_paramType;
    NSString *_paramUrl;
    NSString *_paramComment;
    NSString *_paramFromurl;
    NSString *_paramTitle;
    NSString *_paramNswb;
}

+ (id)dictionary;
@property(retain, nonatomic) NSString *paramNswb; // @synthesize paramNswb=_paramNswb;
@property(retain, nonatomic) NSString *paramTitle; // @synthesize paramTitle=_paramTitle;
@property(retain, nonatomic) NSString *paramFromurl; // @synthesize paramFromurl=_paramFromurl;
@property(retain, nonatomic) NSString *paramComment; // @synthesize paramComment=_paramComment;
@property(retain, nonatomic) NSString *paramUrl; // @synthesize paramUrl=_paramUrl;
@property(retain, nonatomic) NSString *paramType; // @synthesize paramType=_paramType;
@property(retain, nonatomic) NSString *paramImages; // @synthesize paramImages=_paramImages;
@property(retain, nonatomic) NSString *paramSummary; // @synthesize paramSummary=_paramSummary;
@property(retain, nonatomic) NSString *paramSite; // @synthesize paramSite=_paramSite;
@property(retain, nonatomic) NSString *paramPlayurl; // @synthesize paramPlayurl=_paramPlayurl;
- (void).cxx_destruct;

@end

