//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCAPIRequest.h"

@class NSString;

@interface TCSendStoryDic : TCAPIRequest
{
    NSString *_paramSummary;
    NSString *_paramShareUrl;
    NSString *_paramPics;
    NSString *_paramAct;
    NSString *_paramTitle;
    NSString *_paramDescription;
}

+ (id)dictionary;
@property(retain, nonatomic) NSString *paramDescription; // @synthesize paramDescription=_paramDescription;
@property(retain, nonatomic) NSString *paramTitle; // @synthesize paramTitle=_paramTitle;
@property(retain, nonatomic) NSString *paramAct; // @synthesize paramAct=_paramAct;
@property(retain, nonatomic) NSString *paramPics; // @synthesize paramPics=_paramPics;
@property(retain, nonatomic) NSString *paramShareUrl; // @synthesize paramShareUrl=_paramShareUrl;
@property(retain, nonatomic) NSString *paramSummary; // @synthesize paramSummary=_paramSummary;
- (void).cxx_destruct;
- (id)init;

@end
