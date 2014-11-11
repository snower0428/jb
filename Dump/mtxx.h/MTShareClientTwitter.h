//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTShareBaseClient.h"

@class NSMutableDictionary, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MTShareClientTwitter : MTShareBaseClient
{
    NSString *_appKey;
    NSString *_appKeySecret;
    NSString *_oauthToken;
    NSString *_oauthTokenSecret;
    NSURL *_baseUrl;
    NSString *_nonce;
    NSString *_timestamp;
    NSMutableDictionary *_baseParameter;
}

+ (void)setDefaultTopic:(id)arg1 topicType:(int)arg2;
+ (id)shareImageClient;
@property(retain, nonatomic) NSMutableDictionary *baseParameter; // @synthesize baseParameter=_baseParameter;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSURL *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSString *oauthTokenSecret; // @synthesize oauthTokenSecret=_oauthTokenSecret;
@property(retain, nonatomic) NSString *oauthToken; // @synthesize oauthToken=_oauthToken;
@property(copy, nonatomic) NSString *appKeySecret; // @synthesize appKeySecret=_appKeySecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)errorRightMessage:(id)arg1 errorMessage:(id)arg2;
- (BOOL)isAccessTokenInvalid:(id)arg1;
- (id)oauthAuthentication:(id)arg1;
- (id)calculateSignatureWithAPI:(id)arg1 httpMetod:(id)arg2 parameters:(id)arg3;
- (id)signatureBaseString:(id)arg1 httpMethod:(id)arg2 parameters:(id)arg3;
- (void)generateBaseParameter;
- (void)generateTimestamp;
- (void)generateNonce;
- (id)extractInfoFromHTTPBody:(id)arg1 key:(id)arg2;
- (void)shareImage:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)requestAccessToken:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)authorizeURLRequest;
- (void)requestRequestToken:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)loginBySSO:(CDUnknownBlockType)arg1;
- (id)initWithAppkey:(id)arg1 appKeySecret:(id)arg2 loginUser:(id)arg3;
- (id)initWithLoginUser:(id)arg1;
- (id)init;
- (int)calculateTextNumber:(id)arg1;
- (void)removeDraftAndCursor;
- (void)saveDraft:(id)arg1 cursor:(struct _NSRange)arg2;
- (struct _NSRange)lastCursor;
- (id)lastDraft;
- (id)defaultTopic;
- (BOOL)isAuthorized;
- (void)cleanLoginedUserInfo:(id)arg1;
- (void)saveLoginedUserInfo:(id)arg1;
- (BOOL)isNeedSaveLoginedInfo;

@end
