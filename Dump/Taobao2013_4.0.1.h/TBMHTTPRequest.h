//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"

@class ASIFormDataRequest, ASIHTTPRequest, MTOPRequest, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface TBMHTTPRequest : NSObject <ASIHTTPRequestDelegate>
{
    BOOL isAuthenticating;
    BOOL _mtopNeedEcodeSign;
    BOOL _mtopAutoLogin;
    BOOL _isKeepSidIfNotLoginSign;
    BOOL _universalMTOPUseLogin;
    id _delegate;
    MTOPRequest *_autoLoginRequest;
    int _httpRequestType;
    MTOPRequest *_mtopRequest;
    NSString *_mtopMethod;
    NSMutableDictionary *_topParams;
    MTOPRequest *_universalMTOPRequest;
    NSDictionary *_universalMTOPInputDic;
    ASIHTTPRequest *_asigetRequest;
    ASIFormDataRequest *_asipostRequest;
    NSString *_url;
    NSMutableDictionary *_requestParams;
    NSData *_result;
    SEL _requestDidStartedSelector;
    SEL _requestDidFailedSelector;
    SEL _requestDidFinishedSelector;
    SEL _requestDidCanceledSelector;
}

+ (id)httpRequestForUniversalMTOPWithInputDic:(id)arg1 usingLogin:(BOOL)arg2 delegate:(id)arg3;
+ (id)httpRequestForASIPOSTWithURL:(id)arg1 delegate:(id)arg2;
+ (id)httpRequestForASIGETWithURL:(id)arg1 delegate:(id)arg2;
+ (id)httpRequestForMTOPWithMethod:(id)arg1 delegate:(id)arg2;
@property(nonatomic) SEL requestDidCanceledSelector; // @synthesize requestDidCanceledSelector=_requestDidCanceledSelector;
@property(nonatomic) SEL requestDidFinishedSelector; // @synthesize requestDidFinishedSelector=_requestDidFinishedSelector;
@property(nonatomic) SEL requestDidFailedSelector; // @synthesize requestDidFailedSelector=_requestDidFailedSelector;
@property(nonatomic) SEL requestDidStartedSelector; // @synthesize requestDidStartedSelector=_requestDidStartedSelector;
@property(retain, nonatomic) NSData *result; // @synthesize result=_result;
@property(retain, nonatomic) NSMutableDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) ASIFormDataRequest *asipostRequest; // @synthesize asipostRequest=_asipostRequest;
@property(retain, nonatomic) ASIHTTPRequest *asigetRequest; // @synthesize asigetRequest=_asigetRequest;
@property(nonatomic) BOOL universalMTOPUseLogin; // @synthesize universalMTOPUseLogin=_universalMTOPUseLogin;
@property(retain, nonatomic) NSDictionary *universalMTOPInputDic; // @synthesize universalMTOPInputDic=_universalMTOPInputDic;
@property(retain, nonatomic) MTOPRequest *universalMTOPRequest; // @synthesize universalMTOPRequest=_universalMTOPRequest;
@property(retain, nonatomic) NSMutableDictionary *topParams; // @synthesize topParams=_topParams;
@property(nonatomic) BOOL isKeepSidIfNotLoginSign; // @synthesize isKeepSidIfNotLoginSign=_isKeepSidIfNotLoginSign;
@property(nonatomic) BOOL mtopAutoLogin; // @synthesize mtopAutoLogin=_mtopAutoLogin;
@property(nonatomic) BOOL mtopNeedEcodeSign; // @synthesize mtopNeedEcodeSign=_mtopNeedEcodeSign;
@property(retain, nonatomic) NSString *mtopMethod; // @synthesize mtopMethod=_mtopMethod;
@property(retain, nonatomic) MTOPRequest *mtopRequest; // @synthesize mtopRequest=_mtopRequest;
@property(nonatomic) int httpRequestType; // @synthesize httpRequestType=_httpRequestType;
@property(retain, nonatomic) MTOPRequest *autoLoginRequest; // @synthesize autoLoginRequest=_autoLoginRequest;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isAuthenticating; // @synthesize isAuthenticating;
- (void)dealloc;
- (id)getResultAccordingToImage;
- (id)getResultAccordingToData;
- (id)getResultAccordingToArray;
- (id)getResultAccordingToDictionary;
- (id)getResultAccordingToString;
- (void)requestDidCanceled;
- (void)requestDidFailed;
- (void)requestDidFinished;
- (void)requestDidStarted;
- (void)requestRedirected:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 willRedirectToURL:(id)arg2;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)TBSDKRequestFailed:(id)arg1;
- (void)TBSDKRequestSuccess:(id)arg1;
- (void)TBSDKRequestStarted:(id)arg1;
- (void)cancel;
- (BOOL)startUniversalMTOPRequest;
- (BOOL)startASIPOSTRequest;
- (BOOL)startASIGETRequest;
- (BOOL)startMTOPRequest;
- (BOOL)sendRequest;
- (BOOL)removeRequestParamForKey:(id)arg1;
- (BOOL)addRequestParam:(id)arg1 forKey:(id)arg2;
- (BOOL)removeTopParamForKey:(id)arg1;
- (BOOL)addTopParam:(id)arg1 forKey:(id)arg2;
- (id)initWithType:(int)arg1 delegate:(id)arg2;

@end
