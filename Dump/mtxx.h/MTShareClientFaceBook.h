//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTShareBaseClient.h"

@class FBRequestConnection;

__attribute__((visibility("hidden")))
@interface MTShareClientFaceBook : MTShareBaseClient
{
    FBRequestConnection *_requestConnetion;
}

+ (void)setDefaultTopic:(id)arg1 topicType:(int)arg2;
@property(retain, nonatomic) FBRequestConnection *requestConnetion; // @synthesize requestConnetion=_requestConnetion;
- (void).cxx_destruct;
- (void)cancelCurrentOperation;
- (BOOL)isAccessTokenInvalid:(id)arg1;
- (id)errorMapMessage:(id)arg1 errorSubcode:(id)arg2 messageDescription:(id)arg3;
- (id)getMTShareBaseRespFromFBResponseError:(id)arg1;
- (void)shareImage:(id)arg1 description:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)checkPerimissionsComplete:(CDUnknownBlockType)arg1;
- (void)getUserInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)logOutSSO;
- (void)loginBySSO:(CDUnknownBlockType)arg1;
- (BOOL)isFacebookInstalled;
- (BOOL)handleOpenURL:(id)arg1 sourceApplication:(id)arg2;
- (id)initWithUser:(id)arg1;
- (id)shareSession;
- (id)init;
- (void)removeDraftAndCursor;
- (void)saveDraft:(id)arg1 cursor:(struct _NSRange)arg2;
- (struct _NSRange)lastCursor;
- (id)lastDraft;
- (id)defaultTopic;
- (int)calculateTextNumber:(id)arg1;
- (BOOL)isAuthorized;
- (void)cleanLoginedUserInfo:(id)arg1;
- (void)saveLoginedUserInfo:(id)arg1;
- (BOOL)isNeedSaveLoginedInfo;

@end
