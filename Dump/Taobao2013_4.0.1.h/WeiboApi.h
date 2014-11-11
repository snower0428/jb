//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString, UIViewController;

@interface WeiboApi : NSObject
{
    NSString *appKey;
    NSString *appSecret;
    NSString *redirectUri;
    id authDelegate;
    NSString *userName;
    NSString *userNick;
    NSString *openid;
    NSString *accessToken;
    NSString *refreshToken;
    NSMutableDictionary *reqDic;
    double expires;
    BOOL isSSOAuth;
    int reqCount;
    UIViewController *rootViewCtrl;
}

@property(retain, nonatomic) UIViewController *rootViewCtrl; // @synthesize rootViewCtrl;
@property(nonatomic) id authDelegate; // @synthesize authDelegate;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
@property(nonatomic) double expires; // @synthesize expires;
@property(copy, nonatomic) NSString *openid; // @synthesize openid;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(copy, nonatomic) NSString *redirectUri; // @synthesize redirectUri;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick;
@property(copy, nonatomic) NSString *userName; // @synthesize userName;
- (void)onLoginSuccessed:(id)arg1 token:(id)arg2;
- (void)onLoginFailed:(int)arg1 msg:(id)arg2;
- (void)didFailWithError:(id)arg1 reqNo:(int)arg2;
- (void)didReceiveRawData:(id)arg1 reqNo:(int)arg2;
- (void)authorize:(id)arg1 didFailuredWithError:(id)arg2;
- (void)authorize:(id)arg1 didSucceedWithAccessToken:(id)arg2;
- (BOOL)saveAuth:(id)arg1;
- (id)createDicforAccesstoken:(id)arg1;
- (int)requestWithParams:(id)arg1 apiName:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4;
- (BOOL)handleOpenURL:(id)arg1;
- (BOOL)isAuthValid;
- (BOOL)isAuthorizeExpired;
- (BOOL)isAuthed;
- (void)cancelAuth;
- (int)refreshAuthWithAppKey:(id)arg1 andRefreshToken:(id)arg2 andDelegate:(id)arg3;
- (int)refreshAuthWithDelegate:(id)arg1;
- (void)loginWithAccesstoken:(id)arg1 andOpenId:(id)arg2 andExpires:(double)arg3 andRefreshToken:(id)arg4 andDelegate:(id)arg5;
- (int)getReqNo;
- (void)loginWithDelegate:(id)arg1 andRootController:(id)arg2;
- (id)initWithAppKey:(id)arg1 andSecret:(id)arg2 andRedirectUri:(id)arg3;
- (void)requestDidFinish:(id)arg1;

@end

