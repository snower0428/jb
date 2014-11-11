//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTSharePipeProtocol.h"

@class MTBaseModel, NSString;

@interface MTOAuth2 : NSObject <MTSharePipeProtocol>
{
    MTBaseModel *_model;
    id <MTOAuth2Delegate> _delegate;
    NSString *_accessToken;
    NSString *_username;
    NSString *_redirectMTURL;
    double _expirationTime;
}

@property(retain, nonatomic) NSString *redirectMTURL; // @synthesize redirectMTURL=_redirectMTURL;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(nonatomic) __weak id <MTOAuth2Delegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)oauthInfo;
- (void)beforeSharePayload:(id)arg1 from:(id)arg2;
- (void)sharePayload:(id)arg1 from:(id)arg2;
- (int)isAvailable;
- (void)saveByImplicitGrant:(id)arg1;
- (void)requestOpenIDByAcessToken:(id)arg1 andExpiresIn:(double)arg2;
- (void)requestUserInfo;
- (void)requestAccessWithAuthorizationCode:(id)arg1;
- (id)URLRequestAuthorization;
- (void)revokeAccessToken;
- (BOOL)checkAccessToken;
- (id)init;

@end
