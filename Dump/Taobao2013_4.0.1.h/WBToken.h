//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WBToken : NSObject
{
    NSString *_openid;
    NSString *_reserver;
    NSString *_omasKey;
    NSString *_omasToken;
    NSString *_refreshToken;
    unsigned int _expires;
    NSString *_accessToken;
}

@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) unsigned int expires; // @synthesize expires=_expires;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(retain, nonatomic) NSString *omasToken; // @synthesize omasToken=_omasToken;
@property(retain, nonatomic) NSString *omasKey; // @synthesize omasKey=_omasKey;
@property(retain, nonatomic) NSString *reserver; // @synthesize reserver=_reserver;
@property(retain, nonatomic) NSString *openid; // @synthesize openid=_openid;
- (void).cxx_destruct;

@end
