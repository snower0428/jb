/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SCLoginBaseViewController.h"

@class NSString, SCMessageVerifyViewController, UIViewController, DTRpcAsyncCaller;

@interface SCLoginSMSCodeVerifyViewController : SCLoginBaseViewController {
@private
	NSString* _mobileNO;
	DTRpcAsyncCaller* _rpcCallerVerifySMSCode;
	DTRpcAsyncCaller* _rpcCallerRequireSMS;
	DTRpcAsyncCaller* _rpcCallerGetPhoneNumUserInfo;
	DTRpcAsyncCaller* _rpcCallerSetPayword;
	SCMessageVerifyViewController* _childVc;
	UIViewController* _setPhonePayPwdController;
}
@property(assign, nonatomic) __weak UIViewController* setPhonePayPwdController;
@property(assign, nonatomic) __weak SCMessageVerifyViewController* childVc;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCallerSetPayword;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCallerGetPhoneNumUserInfo;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCallerRequireSMS;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCallerVerifySMSCode;
@property(retain, nonatomic) NSString* mobileNO;
-(void).cxx_destruct;
-(void)taobaoUser;
-(void)nonAlipayAccount;
-(void)uniqueAlipayQUser;
-(void)uniqueAlipayTUser;
-(void)bindedSingleAlipayUserWith:(id)with;
-(void)nonMobileUserWithMultipleBindedAccounts:(id)multipleBindedAccounts;
-(void)mobileDomainQUserSetPassword;
-(void)mobileDomainTUser;
-(void)getPhoneNumUserInfo;
-(void)onNext:(id)next;
-(void)onResend:(id)resend;
-(void)onBack;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
