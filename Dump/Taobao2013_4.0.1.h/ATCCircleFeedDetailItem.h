//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface ATCCircleFeedDetailItem : NSObject
{
    NSString *_extTitle;
    NSString *_content;
    NSString *_url;
    NSArray *_picUrl;
    NSString *_extHeadPic;
    NSString *_extDistance;
    NSString *_extCollectNum;
    NSString *_extOriPrice;
    NSString *_extPrice;
    NSString *_exRate;
    NSString *_includeId;
}

+ (id)randItem;
+ (id)itemFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *includeId; // @synthesize includeId=_includeId;
@property(retain, nonatomic) NSString *extRate; // @synthesize extRate=_exRate;
@property(retain, nonatomic) NSString *extPrice; // @synthesize extPrice=_extPrice;
@property(retain, nonatomic) NSString *extOriPrice; // @synthesize extOriPrice=_extOriPrice;
@property(retain, nonatomic) NSString *extCollectNum; // @synthesize extCollectNum=_extCollectNum;
@property(retain, nonatomic) NSString *extDistance; // @synthesize extDistance=_extDistance;
@property(retain, nonatomic) NSString *extHeadPic; // @synthesize extHeadPic=_extHeadPic;
@property(retain, nonatomic) NSArray *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *extTitle; // @synthesize extTitle=_extTitle;
- (void).cxx_destruct;

@end

