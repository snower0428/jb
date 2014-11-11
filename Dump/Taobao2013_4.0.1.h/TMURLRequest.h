//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASIFormDataRequest.h"

#import "NSCopying.h"

@class NSString;

@interface TMURLRequest : ASIFormDataRequest <NSCopying>
{
    BOOL _needSid;
    int _publicCMDID;
    id _responseDelegate;
    NSString *_apiMethod;
    NSString *_paramString;
}

+ (id)requestWithTmsUrl:(id)arg1 api:(id)arg2 params:(id)arg3 userInfo:(id)arg4;
+ (id)requestWithTmsApi:(id)arg1 params:(id)arg2 userInfo:(id)arg3;
+ (id)requestWithWhtUrl:(id)arg1 api:(id)arg2 params:(id)arg3 userInfo:(id)arg4;
+ (id)requestWithWhtApi:(id)arg1 params:(id)arg2 userInfo:(id)arg3;
+ (id)requestWithMtopUrl:(id)arg1 api:(id)arg2 params:(id)arg3 userInfo:(id)arg4;
+ (id)requestWithMtopApi:(id)arg1 params:(id)arg2 userInfo:(id)arg3;
+ (id)requestWithTmallUrl:(id)arg1 api:(id)arg2 params:(id)arg3 userInfo:(id)arg4;
+ (id)requestWithTmallApi:(id)arg1 params:(id)arg2 userInfo:(id)arg3;
@property BOOL needSid; // @synthesize needSid=_needSid;
@property(copy) NSString *paramString; // @synthesize paramString=_paramString;
@property(copy) NSString *apiMethod; // @synthesize apiMethod=_apiMethod;
@property(nonatomic) id responseDelegate; // @synthesize responseDelegate=_responseDelegate;
@property int publicCMDID; // @synthesize publicCMDID=_publicCMDID;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getTmallParamsSign:(id)arg1;
- (id)getTmallPostParams:(id)arg1 dataJson:(id)arg2;

@end
