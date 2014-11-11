//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"

@class ASIHTTPRequest, MAZeroingWeakRef, NSDictionary, NSError, NSMutableData, NSString, NSURL, TBSDKDownloadCache;

@interface TBSDKRequest : NSObject <ASIHTTPRequestDelegate>
{
    BOOL _useHTTPCache;
    BOOL _forceRefresh;
    BOOL _isMTOPRequest;
    ASIHTTPRequest *_request;
    NSError *_error;
    NSMutableData *_responseData;
    NSString *_responseString;
    int _responseStatusCode;
    NSURL *_url;
    NSDictionary *_responseHeaders;
    NSDictionary *_requestHeaders;
    NSString *_apiMethod;
    TBSDKDownloadCache *_downloadCache;
    MAZeroingWeakRef *_delegateMAZeroingWeakRef;
    MAZeroingWeakRef *_dataSourceMAZeroingWeakRef;
    MAZeroingWeakRef *_requestProgressDelegateMAZeroingWeakRef;
    double _timeOutSeconds;
}

+ (void)cancelTBSDKAllRequest;
+ (void)initialize;
@property(retain, nonatomic) MAZeroingWeakRef *requestProgressDelegateMAZeroingWeakRef; // @synthesize requestProgressDelegateMAZeroingWeakRef=_requestProgressDelegateMAZeroingWeakRef;
@property(retain, nonatomic) MAZeroingWeakRef *dataSourceMAZeroingWeakRef; // @synthesize dataSourceMAZeroingWeakRef=_dataSourceMAZeroingWeakRef;
@property(retain, nonatomic) MAZeroingWeakRef *delegateMAZeroingWeakRef; // @synthesize delegateMAZeroingWeakRef=_delegateMAZeroingWeakRef;
@property(retain, nonatomic) TBSDKDownloadCache *downloadCache; // @synthesize downloadCache=_downloadCache;
@property(nonatomic) BOOL isMTOPRequest; // @synthesize isMTOPRequest=_isMTOPRequest;
@property(retain, nonatomic) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(nonatomic) BOOL forceRefresh; // @synthesize forceRefresh=_forceRefresh;
@property(nonatomic) BOOL useHTTPCache; // @synthesize useHTTPCache=_useHTTPCache;
@property(retain, nonatomic) NSDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int responseStatusCode; // @synthesize responseStatusCode=_responseStatusCode;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString=_responseString;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) ASIHTTPRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)request:(id)arg1 didSendBytes:(long long)arg2;
- (void)setProgress:(float)arg1;
- (void)request:(id)arg1 didReceiveData:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)request:(id)arg1 didReceiveResponseHeaders:(id)arg2;
- (void)requestStarted:(id)arg1;
- (void)addUseTrackForDNS;
- (void)installCookies:(id)arg1;
@property(nonatomic) id <TBSDKRequestProgressProtocol> requestProgressDelegate;
@property(nonatomic) id <TBSDKRequestDataSource> dataSource;
@property(nonatomic) id <TBSDKRequestDelegate> delegate;
- (void)setResponse;
- (BOOL)isResponseCompressed;
- (void)cancelTBSDKAllRequest;
- (void)cancelRequest;
- (void)haveError:(id)arg1;
- (void)startAsynchronous;
- (BOOL)startSynchronous;
- (id)getMTOPCookies;
- (void)setCookies;
- (void)setASIRequestPostData;
- (void)setASIRequestPostValue;
- (void)setHTTPRequestHeader;
- (void)instalRequest;
- (void)clearData;
- (id)init;
- (void)dealloc;

@end

