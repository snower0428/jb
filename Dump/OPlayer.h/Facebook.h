//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBLoginDialogDelegate.h"
#import "FBRequestDelegate.h"

@class FBDialog, FBFrictionlessRequestSettings, FBRequest, NSArray, NSDate, NSMutableSet, NSString;

@interface Facebook : NSObject <FBLoginDialogDelegate, FBRequestDelegate>
{
    NSString *_accessToken;
    NSDate *_expirationDate;
    id <FBSessionDelegate> _sessionDelegate;
    NSMutableSet *_requests;
    FBDialog *_loginDialog;
    FBDialog *_fbDialog;
    NSString *_appId;
    NSString *_urlSchemeSuffix;
    NSArray *_permissions;
    BOOL _isExtendingAccessToken;
    FBRequest *_requestExtendingAccessToken;
    NSDate *_lastAccessTokenUpdate;
    FBFrictionlessRequestSettings *_frictionlessRequestSettings;
}

@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *urlSchemeSuffix; // @synthesize urlSchemeSuffix=_urlSchemeSuffix;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(nonatomic) id <FBSessionDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)requestLoading:(id)arg1;
- (void)request:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didLoadRawResponse:(id)arg2;
- (void)request:(id)arg1 didLoad:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)fbDialogNotLogin:(BOOL)arg1;
- (void)fbDialogLogin:(id)arg1 expirationDate:(id)arg2;
- (BOOL)isSessionValid;
- (BOOL)isFrictionlessEnabledForRecipients:(id)arg1;
- (BOOL)isFrictionlessEnabledForRecipient:(id)arg1;
- (void)reloadFrictionlessRecipientCache;
- (void)enableFrictionlessRequests;
@property(readonly, nonatomic, getter=isFrictionlessRequestsEnabled) BOOL isFrictionlessRequestsEnabled;
- (void)dialog:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
- (void)dialog:(id)arg1 andDelegate:(id)arg2;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithGraphPath:(id)arg1 andParams:(id)arg2 andDelegate:(id)arg3;
- (id)requestWithGraphPath:(id)arg1 andDelegate:(id)arg2;
- (id)requestWithMethodName:(id)arg1 andParams:(id)arg2 andHttpMethod:(id)arg3 andDelegate:(id)arg4;
- (id)requestWithParams:(id)arg1 andDelegate:(id)arg2;
- (void)logout:(id)arg1;
- (void)logout;
- (BOOL)handleOpenURL:(id)arg1;
- (BOOL)shouldExtendAccessToken;
- (void)extendAccessTokenIfNeeded;
- (void)extendAccessToken;
- (void)authorize:(id)arg1;
- (id)parseURLParams:(id)arg1;
- (void)authorizeWithFBAppAuth:(BOOL)arg1 safariAuth:(BOOL)arg2;
- (id)getOwnBaseUrl;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)openUrl:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 delegate:(id)arg4;
- (void)invalidateSession;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 urlSchemeSuffix:(id)arg2 andDelegate:(id)arg3;
- (id)initWithAppId:(id)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
