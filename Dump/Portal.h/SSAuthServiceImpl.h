/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SSAuthService.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSCondition, SAUserInfo;
@protocol SAAccountService;

@interface SSAuthServiceImpl : XXUnknownSuperclass <SSAuthService> {
@private
	BOOL _isGestureUnlockedAfterWapLogin;
	BOOL _wapLoginFlag;
	BOOL _isPerformingAccountCheck;
	id<SAAccountService> _accountService;
	NSCondition* _wapLoginCondition;
	NSCondition* _accountCheckCondition;
}
@property(readonly, assign) SAUserInfo* userInfo;
@property(retain, nonatomic) NSCondition* accountCheckCondition;
@property(retain, nonatomic) NSCondition* wapLoginCondition;
@property(assign) BOOL isPerformingAccountCheck;
@property(assign) BOOL wapLoginFlag;
@property(assign, nonatomic) id<SAAccountService> accountService;
-(void).cxx_destruct;
-(void)loginPureForegroundAyncWithUser:(id)user hideKeyboard:(BOOL)keyboard onComplete:(id)complete;
-(id)loginForegroundAyncWithUser:(id)user onComplete:(id)complete;
-(void)loginForegroundAync:(id)aync;
-(void)loginPureForegroundAyncWithUser:(id)user onComplete:(id)complete;
-(void)loginPureForegroundAync:(id)aync;
-(id)loginBackgroundAyncWithUser:(id)user onComplete:(id)complete;
-(void)loginBackgroundAync:(id)aync;
-(BOOL)isUserLoggedOut:(id)anOut;
-(void)testGestureWithUser:(id)user completion:(id)completion;
-(void)waitUtilLoginCompleteAsync:(id)async;
-(void)signalAccountCheckCondition;
-(void)signalWapLoginCondition;
-(BOOL)isGestureUnlockedAfterWapLogin;
-(BOOL)isPerformingWapLogin;
-(BOOL)isPerformingAccountCheckWhileStartUp;
-(BOOL)startSelectAccountApp;
-(id)findCookieByDomain:(id)domain;
-(void)doLogout:(id)logout;
-(BOOL)isLoggedIn;
-(void)postLoginNotification:(BOOL)notification;
-(void)postLoginNotification;
-(void)authWithWapAsync:(id)wapAsync onComplete:(id)complete;
-(BOOL)authWithUserInfo:(id)userInfo mode:(BOOL)mode;
-(BOOL)authWithLoginId:(id)loginId andLoginType:(unsigned)type isForegroundMode:(BOOL)mode;
-(void)doAuthWithBackgroundMode;
-(void)doAuthWithForegroundMode;
-(void)doAuthWithMode:(BOOL)mode;
-(void)onSessionInvalid;
-(void)checkAccountAsync;
-(void)importAccountOnlyAsync;
-(void)start;
@end

