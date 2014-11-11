//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTShareBaseClient.h"

#import "SinaWeiboDelegate.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MTShareClientSina : MTShareBaseClient <SinaWeiboDelegate>
{
    int _imagesCount;
    NSMutableDictionary *_picIDDic;
}

+ (void)setDefaultTopic:(id)arg1 topicType:(int)arg2;
@property(retain, nonatomic) NSMutableDictionary *picIDDic; // @synthesize picIDDic=_picIDDic;
- (void).cxx_destruct;
- (void)applicationDidFailedOpenSinaWeiBoClient;
- (void)sinaweibo:(id)arg1 accessTokenInvalidOrExpired:(id)arg2;
- (void)sinaweibo:(id)arg1 logInDidFailWithError:(id)arg2;
- (void)sinaweiboLogInDidCancel:(id)arg1;
- (void)sinaweiboDidLogOut:(id)arg1;
- (void)sinaweiboDidLogIn:(id)arg1;
- (void)logOutSSO;
- (void)loginBySSO:(CDUnknownBlockType)arg1;
- (id)sinaErrorCN:(id)arg1;
- (BOOL)isAccessTokenInvalid:(id)arg1;
- (void)handleSearchFriendResponseError:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleSearchFriendResponseInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)searchFriendsWithKeyWord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)shareImageIDs:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)uploadImagesToSinaServer:(id)arg1 description:(id)arg2 imageIndex:(int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)shareImages:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleUpLoadImageFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleUpLoadImageCompletion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)shareImage:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)uploadImage:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)shareImageUrl:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)getShortUrlFor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)handleFollowingMeiTuFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleFollowingMeiTuCompletion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)followUserID:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleCheckFollowedMeiTuFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleCheckFollowedMeiTuCompletion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)checkFollowedUser:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetCurrentUserInfoFailure:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleGetCurrentUserInfoCompletion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getUserInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleRequestAccessTokenFailure:(id)arg1 responseString:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)handleRequestAccessTokenCompletion:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)requestAccessTokenWith:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)oauthURLRequest;
- (id)sinaOauthUrl;
- (id)multipartFormRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (void)dealloc;
- (id)initWithUser:(id)arg1;
- (id)init;
- (void)removeDraftAndCursor;
- (void)saveDraft:(id)arg1 cursor:(struct _NSRange)arg2;
- (struct _NSRange)lastCursor;
- (id)lastDraft;
- (id)defaultTopic;
- (BOOL)isOauthInfoExist;
- (BOOL)isAuthorized;
- (void)cleanLoginedUserInfo:(id)arg1;
- (void)saveLoginedUserInfo:(id)arg1;
- (BOOL)isNeedSaveLoginedInfo;

@end

