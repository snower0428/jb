//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASIHTTPRequestDelegate.h"
#import "NSCopying.h"

@class ASIFormDataRequest, NSData, NSDictionary, NSMutableDictionary, NSString, TBErrorResponse;

@interface TOPRequest : NSObject <ASIHTTPRequestDelegate, NSCopying>
{
    NSString *apiMethod;
    NSMutableDictionary *params;
    BOOL isRequesting;
    id delegate;
    BOOL usePOST;
    BOOL needsUserSession;
    int delegateRetainedCount;
    SEL requestWillStartSelector;
    SEL requestDidStartSelector;
    SEL requestDidFinishSelector;
    SEL requestDidFailedSelector;
    SEL requestDidCanceledSelector;
    SEL requestNeedLoginSelector;
    NSDictionary *userInfo;
    NSDictionary *responseJSON;
    NSString *responseString;
    NSData *responseData;
    TBErrorResponse *responseError;
    NSString *sentData;
    double requestStartTime;
    NSString *_keyOfCache;
    NSString *_actionIdentifier;
    BOOL useSynchronousRequest;
    BOOL _isCache;
    BOOL _isUseCache;
    BOOL _memoryOrDisk;
    BOOL _isFromCache;
    ASIFormDataRequest *_httpRequest;
    int _publicCMDID;
    id _responseDelegate;
    int tag;
    id _httpUploadRequestDelegate;
    double _timeOutSeconds;
    double _validTimestamp;
}

+ (id)requestWithMethod:(id)arg1;
+ (void)initialize;
@property(nonatomic) id httpUploadRequestDelegate; // @synthesize httpUploadRequestDelegate=_httpUploadRequestDelegate;
@property(readonly, nonatomic) BOOL isFromCache; // @synthesize isFromCache=_isFromCache;
@property(nonatomic) BOOL memoryOrDisk; // @synthesize memoryOrDisk=_memoryOrDisk;
@property(nonatomic) double validTimestamp; // @synthesize validTimestamp=_validTimestamp;
@property(nonatomic) BOOL isUseCache; // @synthesize isUseCache=_isUseCache;
@property(nonatomic) BOOL isCache; // @synthesize isCache=_isCache;
@property(nonatomic) double timeOutSeconds; // @synthesize timeOutSeconds=_timeOutSeconds;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, nonatomic) NSString *keyOfCache; // @synthesize keyOfCache=_keyOfCache;
@property(nonatomic) int tag; // @synthesize tag;
@property(nonatomic) id responseDelegate; // @synthesize responseDelegate=_responseDelegate;
@property(nonatomic) int publicCMDID; // @synthesize publicCMDID=_publicCMDID;
@property(nonatomic) BOOL useSynchronousRequest; // @synthesize useSynchronousRequest;
@property(copy, nonatomic) NSString *apiMethod; // @synthesize apiMethod;
@property(retain, nonatomic) NSString *sentData; // @synthesize sentData;
@property(nonatomic) BOOL needsUserSession; // @synthesize needsUserSession;
@property(retain, nonatomic) TBErrorResponse *responseError; // @synthesize responseError;
@property(retain, nonatomic) NSDictionary *responseJSON; // @synthesize responseJSON;
@property(retain, nonatomic) NSString *responseString; // @synthesize responseString;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData;
@property(readonly, nonatomic) double requestStartTime; // @synthesize requestStartTime;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;
@property(nonatomic) SEL requestNeedLoginSelector; // @synthesize requestNeedLoginSelector;
@property(nonatomic) SEL requestDidCanceledSelector; // @synthesize requestDidCanceledSelector;
@property(nonatomic) SEL requestDidFailedSelector; // @synthesize requestDidFailedSelector;
@property(nonatomic) SEL requestDidFinishSelector; // @synthesize requestDidFinishSelector;
@property(nonatomic) SEL requestDidStartSelector; // @synthesize requestDidStartSelector;
@property(nonatomic) SEL requestWillStartSelector; // @synthesize requestWillStartSelector;
@property(nonatomic) BOOL usePOST; // @synthesize usePOST;
@property(readonly, nonatomic) NSMutableDictionary *params; // @synthesize params;
@property(nonatomic) id delegate; // @synthesize delegate;
@property(retain, nonatomic) ASIFormDataRequest *httpRequest; // @synthesize httpRequest=_httpRequest;
- (id)urlForGetRequest;
- (id)urlForRequest;
- (id)dataForRequest;
- (id)host;
- (id)sign;
- (id)dictToQueryString:(id)arg1;
- (void)removeParam:(id)arg1;
- (void)addParam:(id)arg1 forKey:(id)arg2;
- (id)md5Data:(id)arg1;
- (id)md5:(id)arg1;
- (void)responseFailed;
- (void)responseNeedLogin;
- (void)responseSuccess;
- (void)responseStart;
- (void)responseWillStart;
- (void)addTraceRecord;
- (void)responseSelector:(SEL)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)requestStarted:(id)arg1;
- (void)sendRequest;
- (void)cancel;
- (void)processRequestParams;
- (void)storageCache:(id)arg1 checkIsSuccess:(BOOL)arg2;
- (id)getKeyOfCache;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithMethod:(id)arg1;
- (id)init;
- (void)setup;
- (id)requestParamNames;

@end

