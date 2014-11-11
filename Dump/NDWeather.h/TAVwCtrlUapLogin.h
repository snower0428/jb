//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIVwCtrlWithSimpleAlert.h"

#import "UITextFieldDelegate.h"

@class TAVwCtrlUapLoginInternal, UIButton, UIImageView, UITextField, UIView;

__attribute__((visibility("hidden")))
@interface TAVwCtrlUapLogin : UIVwCtrlWithSimpleAlert <UITextFieldDelegate>
{
    UIImageView *topBar;
    UIButton *btnBack;
    UIButton *btnLogin;
    UIImageView *clientArea;
    UIImageView *clientOpPannel;
    UIButton *btnShowUserList;
    UIButton *btnRememberPassword;
    UIButton *btnAutoLogin;
    UIButton *btnRegister;
    UIButton *btnForgetPassword;
    UITextField *tfUserName;
    UITextField *tfPassword;
    UIImageView *ivUserName;
    UIImageView *ivPassword;
    UIView *registerView;
    TAVwCtrlUapLoginInternal *h_Internal;
}

+ (void)presentModalToLoginFreely:(id)arg1 appid:(int)arg2;
+ (void)presentModalWithAppointedUser:(id)arg1 loginDelegate:(id)arg2 appid:(int)arg3;
- (void)viewCtrlUapRegMobileLogin:(id)arg1 didLoginWithResult:(id)arg2;
- (void)viewCtrlUapRegister:(id)arg1 didRegisterWithResult:(id)arg2;
- (void)viewCtrlUapUsersSelect:(id)arg1 didDeleteUser:(id)arg2;
- (void)viewCtrlUapUsersSelect:(id)arg1 didSelectUser:(id)arg2;
- (void)UapLoginDidFailToLoginWithError:(id)arg1;
- (void)UapLoginDidLoginWithResult:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)onBack:(id)arg1;
- (void)onPressBackground:(id)arg1;
- (void)onShowUserList:(id)arg1;
- (void)onAutoLogin:(id)arg1;
- (void)onRememberPassword:(id)arg1;
- (void)onForgotPassword:(id)arg1;
- (void)onRegister:(id)arg1;
- (void)onLogin:(id)arg1;
- (void)procLoginFail:(id)arg1;
- (void)procLoginSuccess:(id)arg1;
- (void)restoreRegisterInfo:(id)arg1 defaultPwdInput:(id)arg2;
- (void)restoreLoginInfo:(id)arg1;
- (void)resignFirstResponderForAllInput;
- (void)clearInputAsEmptyLogin;
- (void)clearTicketLoginInfo;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initToLoginFreely:(id)arg1 appid:(int)arg2;
- (id)initWithAppointedUser:(id)arg1 LoginDelegate:(id)arg2 appid:(int)arg3;
- (void)initInternal;

@end
