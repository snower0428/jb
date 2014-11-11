/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SACCompletionDataViewControllerDelegate.h"
#import "Portal-Structs.h"
#import "SACBindingAlipayViewControllerDelegate.h"
#import "SCBaseViewController.h"

@class SAUserInfo, DTRpcAsyncCaller, NSString, MSUserLoginResult, NSDictionary;

@interface SCLoginBaseViewController : SCBaseViewController <SACBindingAlipayViewControllerDelegate, SACCompletionDataViewControllerDelegate> {
@private
	SAUserInfo* _historyUser;
	NSDictionary* _launchOptions;
	DTRpcAsyncCaller* _loginRpcCaller;
	id _didLaunchedCallback;
	id _didFinishedCallback;
	int _prevStatusBarStyle;
	NSString* _loginIdUsedLastTime;
	NSString* _passwordUsedLastTime;
	NSDictionary* _externParamsUsedLastTime;
	NSDictionary* _verifyInfoUsedLastTime;
	unsigned _loginTypeUsedLastTime;
}
@property(assign, nonatomic) unsigned loginTypeUsedLastTime;
@property(copy, nonatomic) NSDictionary* verifyInfoUsedLastTime;
@property(copy, nonatomic) NSDictionary* externParamsUsedLastTime;
@property(copy, nonatomic) NSString* passwordUsedLastTime;
@property(copy, nonatomic) NSString* loginIdUsedLastTime;
@property(assign, nonatomic) int prevStatusBarStyle;
@property(copy, nonatomic) id didFinishedCallback;
@property(copy, nonatomic) id didLaunchedCallback;
@property(retain, nonatomic) DTRpcAsyncCaller* loginRpcCaller;
@property(readonly, assign, nonatomic) BOOL isAddNewAccount;
@property(readonly, assign, nonatomic) MSUserLoginResult* loginResultPassedIn;
@property(readonly, assign, nonatomic) NSString* passwordPassedIn;
@property(readonly, assign, nonatomic) NSString* loginIdPassedIn;
@property(readonly, assign, nonatomic) NSDictionary* launchOptions;
@property(retain, nonatomic) SAUserInfo* historyUser;
-(void).cxx_destruct;
-(void)loginInViewController:(id)viewController withLoginId:(id)loginId withPassword:(id)password loginType:(unsigned)type externParams:(id)params verifyInfo:(id)info;
-(void)bindAlipayDataSucess:(id)sucess;
-(void)completeAlipayDataSucess:(id)sucess;
-(void)defaultLoginResultHandler:(id)handler loginId:(id)anId password:(id)password;
-(void)doLoginWithLoginId:(id)loginId password:(id)password loginType:(unsigned)type externParams:(id)params verifyInfo:(id)info onComplete:(id)complete;
-(BOOL)isLoginSuc;
-(void)exitLoginApp:(BOOL)app;
-(BOOL)isGuildViewPresented;
-(BOOL)shouldBecomeFirstResponder;
-(void)onBack;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithParams:(id)params;
@end
