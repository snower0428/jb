//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TCWebViewKit.h"

#import "TCWebViewKitDelegate.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString;

@interface TCLoginViewKit : TCWebViewKit <TCWebViewKitDelegate>
{
    BOOL _isUseSafari;
    BOOL _isBrowserError;
    BOOL _isUserCancel;
    unsigned int _loginCount;
    NSString *_accessToken;
    NSString *_openId;
    NSDate *_expirationDate;
    NSString *_appId;
    NSString *_redirectURI;
    NSArray *_permissions;
    id <TCLoginViewDelegate> _loginDelegate;
    NSDictionary *_extraParams;
    NSString *_serial;
    id <TencentLoginDelegate> _newloginDelegate;
    NSMutableDictionary *_loginDict;
    NSString *_errorUrl;
}

@property(retain, nonatomic) NSString *errorUrl; // @synthesize errorUrl=_errorUrl;
@property(retain, nonatomic) NSMutableDictionary *loginDict; // @synthesize loginDict=_loginDict;
@property(nonatomic) id <TencentLoginDelegate> newloginDelegate; // @synthesize newloginDelegate=_newloginDelegate;
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) id <TCLoginViewDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(retain, nonatomic) NSArray *permissions; // @synthesize permissions=_permissions;
@property(retain, nonatomic) NSString *redirectURI; // @synthesize redirectURI=_redirectURI;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(readonly, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void)clearData;
- (void)setAuthorData:(id)arg1 redirectURI:(id)arg2 permissions:(id)arg3;
- (id)parseURLParams:(id)arg1;
- (void)doJsFun:(id)arg1;
- (BOOL)handleOpenURL:(id)arg1;
- (BOOL)canHandleOpenURL:(id)arg1;
- (BOOL)webViewKit:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (BOOL)webViewKit:(id)arg1 shouldAutorotateToInterfaceOrientation:(int)arg2;
- (void)webViewKit:(id)arg1 didLoadWithNetworkError:(id)arg2;
- (void)webViewKit:(id)arg1 didLoadWithContentError:(id)arg2;
- (void)webViewKit:(id)arg1 didFinishedWithError:(id)arg2;
- (id)generateUrlString:(id)arg1 params:(id)arg2;
- (void)openWithUrl:(id)arg1 webTitle:(id)arg2 delegate:(id)arg3;
- (id)getOwnBaseUrl;
- (BOOL)isOldQQBrowserInstall;
- (BOOL)isNewQQBrowserInstall;
- (BOOL)openWithSafariAndExtraParams:(id)arg1;
- (BOOL)openWithSafari;
- (void)loadURL:(id)arg1 webTitle:(id)arg2 delegate:(id)arg3;
- (BOOL)openWithExtraParams:(id)arg1;
- (BOOL)open;
- (void)openWithAppId:(id)arg1 redirectURI:(id)arg2 permissions:(id)arg3 loginDelegate:(id)arg4;
- (void)cleanUp;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 redirectURI:(id)arg2 permissions:(id)arg3 loginDelegate:(id)arg4;
- (id)init;
- (void)setExpirationDate:(id)arg1;
- (void)setOpenId:(id)arg1;
- (void)setAccessToken:(id)arg1;

@end

