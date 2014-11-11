//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AsyncCallbackBase.h"
#import "MTOPLoginDelegate.h"
#import "MTopBaseDataRequestInf.h"

@class MAZeroingWeakRef, MTOPRequest, NSDictionary, NSString;

@interface MTopBaseDataRequest : NSObject <MTOPLoginDelegate, AsyncCallbackBase, MTopBaseDataRequestInf>
{
    NSDictionary *resDic;
    NSDictionary *reqParams;
    CDUnknownBlockType sidReqResBlock;
    MTOPRequest *requestIntrnal;
    MAZeroingWeakRef *_delegate;
    NSString *_strSelector;
    NSString *_tag;
    int _retryTimes;
}

+ (id)hintTextForError:(id)arg1;
+ (id)requestWithParams:(id)arg1 cancelNtfName:(id)arg2 andDelegate:(id)arg3;
+ (id)requestWithParams:(id)arg1 andDelegate:(id)arg2;
+ (void)runAndCleanQueueWithSid:(id)arg1;
+ (id)requestQueue;
@property(nonatomic) int retryTimes; // @synthesize retryTimes=_retryTimes;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *strSelector; // @synthesize strSelector=_strSelector;
@property(retain, nonatomic) MAZeroingWeakRef *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTOPRequest *requestIntrnal; // @synthesize requestIntrnal;
@property(copy, nonatomic) CDUnknownBlockType sidReqResBlock; // @synthesize sidReqResBlock;
@property(retain, nonatomic) NSDictionary *reqParams; // @synthesize reqParams;
@property(retain, nonatomic) NSDictionary *resDic; // @synthesize resDic;
- (void)MTOPRequestDidFinishFailed:(id)arg1;
- (void)MTOPRequestDidFinishSuccess:(id)arg1;
- (BOOL)doResponseGetToken:(BOOL)arg1 reqParam:(id)arg2 rspData:(id)arg3;
- (void)ResponseFail:(unsigned int)arg1 forReqParam:(id)arg2 forError:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)ResponseSuccess:(unsigned int)arg1 forReqParam:(id)arg2 forRspData:(id)arg3 forReserved:(unsigned short)arg4 forExtraHeadData:(id)arg5;
- (void)tbLoginRequest:(id)arg1 isSuccess:(BOOL)arg2;
- (void)requestMTopAutoLoginTimeout;
- (void)requestMTopAutoLogin;
- (void)updateMTopCookies:(id)arg1;
- (BOOL)doResponseGetToken:(id)arg1 andUserData:(id)arg2;
- (void)didRequestMTopServiceToken:(id)arg1 andUserData:(id)arg2 andError:(id)arg3;
- (void)requestWXMTopLoginInfoTimeout;
- (void)requestWXServiceMTopLoginInfo;
- (BOOL)askPassword;
- (BOOL)isSidRequired;
- (void)processResult:(id)arg1;
- (id)requestVersion;
- (id)requestMethod;
- (void)requestSuccess;
- (void)requestFailWithError:(id)arg1;
- (void)doRequestWithParams:(id)arg1;
- (void)loginToMTopWithPassword:(id)arg1;
- (void)requestWithSidCachedAndBlock:(CDUnknownBlockType)arg1;
- (void)cancelRequest:(id)arg1;
- (void)requestSidWithBlock:(CDUnknownBlockType)arg1 andPassword:(id)arg2;
- (void)requestSidWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithParams:(id)arg1 andDelegate:(id)arg2;
- (BOOL)getReqMTopAutoLoginFlag;
- (void)setReqMTopAutoLoginFlag:(BOOL)arg1;
- (BOOL)getReqWXMTopLoginInfoFlag;
- (void)setReqWXMTopLoginInfoFlag:(BOOL)arg1;

@end

