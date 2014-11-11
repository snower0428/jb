//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTOAuth2.h"

@interface MTRenren : MTOAuth2
{
}

- (void)sharePayload:(id)arg1 from:(id)arg2;
- (void)requestAccessWithAuthorizationCode:(id)arg1;
- (id)URLRequestAuthorization;
- (void)revokeAccessToken;
- (BOOL)checkAccessToken;
- (id)username;
- (id)accessToken;
- (id)oauthInfo;
- (id)generateSig:(id)arg1;
- (id)md5HexDigest:(id)arg1;

@end

