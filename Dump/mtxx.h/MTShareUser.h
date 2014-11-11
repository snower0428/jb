//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface MTShareUser : NSObject
{
    NSString *_nickName;
    NSString *_userID;
    NSString *_accessToken;
    NSString *_accessTokenSecret;
    NSDate *_accessTokenExpirationDate;
    int _authorizedMethod;
    NSString *_albumId;
    NSString *_albumName;
    NSMutableArray *_albumsList;
    NSString *_headImageUrl;
    int _vipLevel;
    NSDate *_lastCheckVipInfoDate;
    NSString *_lastDraft;
    struct _NSRange _lastCursor;
}

@property(readonly, nonatomic) struct _NSRange lastCursor; // @synthesize lastCursor=_lastCursor;
@property(readonly, nonatomic) NSString *lastDraft; // @synthesize lastDraft=_lastDraft;
@property(copy, nonatomic) NSDate *lastCheckVipInfoDate; // @synthesize lastCheckVipInfoDate=_lastCheckVipInfoDate;
@property(nonatomic) int vipLevel; // @synthesize vipLevel=_vipLevel;
@property(copy, nonatomic) NSString *headImageUrl; // @synthesize headImageUrl=_headImageUrl;
@property(retain, nonatomic) NSMutableArray *albumsList; // @synthesize albumsList=_albumsList;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(copy, nonatomic) NSString *albumId; // @synthesize albumId=_albumId;
@property(nonatomic) int authorizedMethod; // @synthesize authorizedMethod=_authorizedMethod;
@property(copy, nonatomic) NSDate *accessTokenExpirationDate; // @synthesize accessTokenExpirationDate=_accessTokenExpirationDate;
@property(copy, nonatomic) NSString *accessTokenSecret; // @synthesize accessTokenSecret=_accessTokenSecret;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
- (void).cxx_destruct;
- (void)clear;

@end
