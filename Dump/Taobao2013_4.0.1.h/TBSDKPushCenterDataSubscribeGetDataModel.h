//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKPushCenterModel.h"

@class NSString, PushCenterSubscribeConfigObject;

@interface TBSDKPushCenterDataSubscribeGetDataModel : TBSDKPushCenterModel
{
    PushCenterSubscribeConfigObject *_pushCenterSubscribeConfigObject;
    NSString *_sessionID;
    NSString *_sToken;
    int _pushCenterNewsSubscribeType;
}

@property(nonatomic) int pushCenterNewsSubscribeType; // @synthesize pushCenterNewsSubscribeType=_pushCenterNewsSubscribeType;
@property(retain, nonatomic) NSString *sToken; // @synthesize sToken=_sToken;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) PushCenterSubscribeConfigObject *pushCenterSubscribeConfigObject; // @synthesize pushCenterSubscribeConfigObject=_pushCenterSubscribeConfigObject;
- (void).cxx_destruct;
- (void)main;
- (id)parse:(id)arg1;
- (id)getNewsSubscribeNewsListWithSessionID:(id)arg1 sToken:(id)arg2 type:(int)arg3;

@end

