//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ATCLanLanRequest.h"

@class NSString;

@interface ATCLanLanAuthorInfoRequest : ATCLanLanRequest
{
    NSString *_headPic;
    NSString *_weiTaoUrl;
    NSString *_backgroundImage;
    NSString *_authorNick;
}

+ (id)requestAuthorInfoById:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *authorNick; // @synthesize authorNick=_authorNick;
@property(retain, nonatomic) NSString *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) NSString *weiTaoUrl; // @synthesize weiTaoUrl=_weiTaoUrl;
@property(retain, nonatomic) NSString *headPic; // @synthesize headPic=_headPic;
- (void).cxx_destruct;
- (BOOL)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

