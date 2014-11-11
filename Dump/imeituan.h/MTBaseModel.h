//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTNetworkRequestProtocol.h"

@class MTCity, NSMutableDictionary, SAKUser;

@interface MTBaseModel : NSObject <MTNetworkRequestProtocol>
{
    SAKUser *_user;
    MTCity *_city;
    NSMutableDictionary *_runningOperations;
    BOOL _autowire;
    BOOL _MD5RequestHeader;
    BOOL _shouldDecodeResponse;
    int _parameterEncoding;
}

+ (void)setModelDelegate:(id)arg1;
+ (id)modelDelegate;
+ (id)UUID;
+ (id)comboRequest:(CDUnknownBlockType)arg1 userInfo:(id)arg2 finished:(CDUnknownBlockType)arg3;
+ (id)resourceArrayFromRequestArray:(id)arg1;
+ (id)comboRequestArrayFromBlock:(CDUnknownBlockType)arg1;
+ (CDUnknownBlockType)callbackForRequest:(id)arg1;
+ (void)setCallback:(CDUnknownBlockType)arg1 forRequest:(id)arg2;
+ (void)addComboRequest:(id)arg1;
+ (id)comboRequests;
+ (BOOL)currentThreadInCombo;
+ (void)setCurrentThreadInCombo:(BOOL)arg1;
+ (void)initialize;
@property(nonatomic) BOOL shouldDecodeResponse; // @synthesize shouldDecodeResponse=_shouldDecodeResponse;
@property(nonatomic) int parameterEncoding; // @synthesize parameterEncoding=_parameterEncoding;
@property(nonatomic) BOOL MD5RequestHeader; // @synthesize MD5RequestHeader=_MD5RequestHeader;
@property(nonatomic) BOOL autowire; // @synthesize autowire=_autowire;
- (void).cxx_destruct;
- (void)processTokenError:(id)arg1;
- (id)platform;
- (id)clientType;
- (id)statisticParameters;
- (id)operationKeyForURL:(id)arg1;
- (void)removeOperationsForURL:(id)arg1;
- (void)cancelOperationsForURL:(id)arg1;
- (void)addOperation:(id)arg1 forURL:(id)arg2;
- (void)cancelRequestForURL:(id)arg1;
- (id)putToURL:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 requestID:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (id)deleteFromURL:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 requestID:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (id)postToURL:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 uploadingFiles:(id)arg4 uploadProgress:(CDUnknownBlockType)arg5 requestID:(id)arg6 finished:(CDUnknownBlockType)arg7;
- (id)postToURL:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 requestID:(id)arg4 finished:(CDUnknownBlockType)arg5;
- (id)getFromURL:(id)arg1 withURLParameters:(id)arg2 requestID:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (id)requestWithBlock:(CDUnknownBlockType)arg1 andRequestID:(id)arg2;
- (id)processBodyParameters:(id)arg1;
- (id)processURLParameters:(id)arg1 requestIDPrefix:(id *)arg2;
- (id)processURL:(id)arg1;
@property(retain, nonatomic) MTCity *city;
@property(retain, nonatomic) SAKUser *user;
- (void)willExecuteHTTPRequest:(id)arg1;
- (id)init;
- (id)putToMobileBackendPath:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (id)deleteFromMobileBackendPath:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (id)postToMobileBackendPath:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (id)getFromMobileBackendPath:(id)arg1 withURLParameters:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)mobileBackendCommonCallback:(id)arg1 URLString:(id)arg2 requestID:(id)arg3 error:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (id)postToOpenBackendPath:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 uploadingFiles:(id)arg4 uploadProgress:(CDUnknownBlockType)arg5 finished:(CDUnknownBlockType)arg6;
- (id)postToOpenBackendPath:(id)arg1 withURLParameters:(id)arg2 bodyParameters:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (id)getFromOpenBackendPath:(id)arg1 withURLParameters:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)openBackendCommonCallback:(id)arg1 URLString:(id)arg2 requestID:(id)arg3 error:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)postPassportPath:(id)arg1 viaHTTPS:(BOOL)arg2 parameters:(id)arg3 finished:(CDUnknownBlockType)arg4;
- (void)callMethods:(id)arg1 withParameters:(id)arg2 URLParameters:(id)arg3 finished:(CDUnknownBlockType)arg4;

@end

