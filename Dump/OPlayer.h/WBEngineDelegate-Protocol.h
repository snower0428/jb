//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, WBEngine;

@protocol WBEngineDelegate <NSObject>

@optional
- (void)engine:(WBEngine *)arg1 requestDidSucceedWithResult:(id)arg2;
- (void)engine:(WBEngine *)arg1 requestDidFailWithError:(NSError *)arg2;
- (void)engineAuthorizeExpired:(WBEngine *)arg1;
- (void)engineNotAuthorized:(WBEngine *)arg1;
- (void)engineDidLogOut:(WBEngine *)arg1;
- (void)engine:(WBEngine *)arg1 didFailToLogInWithError:(NSError *)arg2;
- (void)engineDidLogIn:(WBEngine *)arg1;
- (void)engineAlreadyLoggedIn:(WBEngine *)arg1;
@end
