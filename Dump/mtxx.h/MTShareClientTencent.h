//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTShareBaseClient.h"

#import "TencentLoginDelegate.h"
#import "TencentSessionDelegate.h"

@class NSArray, TencentOAuth;

__attribute__((visibility("hidden")))
@interface MTShareClientTencent : MTShareBaseClient <TencentLoginDelegate, TencentSessionDelegate>
{
    NSArray *_permissions;
    TencentOAuth *_tencentOAuth;
    CDUnknownBlockType _qqHeadcompletionBlock;
}

+ (void)setQQWeiboDefaultTopic:(id)arg1 topicType:(int)arg2;
+ (void)setQzoneDefaultTopic:(id)arg1 topicType:(int)arg2;
@property(copy, nonatomic) CDUnknownBlockType qqHeadcompletionBlock; // @synthesize qqHeadcompletionBlock=_qqHeadcompletionBlock;
@property(retain, nonatomic) TencentOAuth *tencentOAuth; // @synthesize tencentOAuth=_tencentOAuth;
- (void).cxx_destruct;
- (id)asciiDecode:(id)arg1;
- (id)resultErrorInfoWith:(int)arg1 errorCode:(int)arg2;
- (BOOL)isAccessTokenInvalid:(id)arg1;
- (void)APIResponseDescrible:(id)arg1;
- (void)tencentFailedUpdate:(int)arg1;
- (void)tencentDidLogout;
- (void)tencentDidNotNetWork;
- (void)tencentDidNotLogin:(BOOL)arg1;
- (void)tencentDidLogin;
- (void)logOutSSO;
- (void)loginBySSO:(CDUnknownBlockType)arg1;
- (void)tencentOAuth:(id)arg1 doCloseViewController:(id)arg2;
- (void)setUserHeadpicResponse:(id)arg1;
- (id)editQQHeadImageViewControllerWithImage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetAppFriendInfoFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetAppFriendInfoSuccess:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAppFriend:(CDUnknownBlockType)arg1;
- (void)handleGetVipInfoFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetVipInfoSuccess:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUserVipInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetUserInfoFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetUserInfoSuccess:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUserInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)loginWithAccessToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)oauthURLRequest;
- (id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 params:(id)arg3;
- (void)initTencentOAuth:(id)arg1;
- (id)initWithAppID:(id)arg1 user:(id)arg2;
- (id)init;
- (void)dealloc;
- (id)defaultAlbumName;
- (id)defaultHeadImageUrl;
- (void)setDefaultHeadImageUrl:(id)arg1;
- (int)calculateTextNumber:(id)arg1;
- (id)albumName;
- (id)albumId;
- (void)setAlbumName:(id)arg1;
- (void)setAlbumId:(id)arg1;
- (void)removeDraftAndCursor;
- (void)saveDraft:(id)arg1 cursor:(struct _NSRange)arg2;
- (struct _NSRange)lastCursor;
- (id)lastDraft;
- (id)defaultTopic;
- (BOOL)needsRemindToFollowingMTXX;
- (void)setNoRemind;
- (BOOL)needCheckFollowerMeitu;
- (BOOL)isAuthorized;
- (void)saveAuthentication;
- (BOOL)isOauthInfoExist;
- (void)cleanLoginedUserInfo:(id)arg1;
- (void)saveLoginedUserInfo:(id)arg1;
- (BOOL)isNeedSaveLoginedInfo;

@end
