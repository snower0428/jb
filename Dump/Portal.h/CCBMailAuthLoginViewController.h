/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "ALPAgreementBoxDelegate.h"
#import "CCBBaseViewController.h"
#import "ALPLoginBoxDelegate.h"

@class ALPLoginBox, CCTextFieldDelegateImpl, ALPAgreementBox, UIAlertView, ALPLinkButton, UIImageView, NSArray, ALPButton;

@interface CCBMailAuthLoginViewController : CCBBaseViewController <ALPLoginBoxDelegate, ALPAgreementBoxDelegate, UIAlertViewDelegate> {
@private
	CCTextFieldDelegateImpl* _textFiledDelegateImpl;
	ALPLoginBox* _loginBox;
	ALPLinkButton* _supportMailLink;
	ALPLinkButton* _supportBankLink;
	ALPAgreementBox* _agreementBox;
	ALPButton* _loginButton;
	UIImageView* _mailImage;
	UIImageView* _bankImage;
	UIImageView* _securityImage;
	UIImageView* _autoImage;
	NSArray* _supportMailList;
	UIAlertView* _alertView;
}
@property(retain, nonatomic) UIAlertView* alertView;
@property(retain, nonatomic) NSArray* supportMailList;
@property(retain, nonatomic) UIImageView* autoImage;
@property(retain, nonatomic) UIImageView* securityImage;
@property(retain, nonatomic) UIImageView* bankImage;
@property(retain, nonatomic) UIImageView* mailImage;
@property(retain, nonatomic) ALPButton* loginButton;
@property(retain, nonatomic) ALPAgreementBox* agreementBox;
@property(retain, nonatomic) ALPLinkButton* supportBankLink;
@property(retain, nonatomic) ALPLinkButton* supportMailLink;
@property(retain, nonatomic) ALPLoginBox* loginBox;
-(void).cxx_destruct;
-(void)dealloc;
-(void)back;
-(void)agreementBoxLinkClicked:(id)clicked;
-(void)agreementBoxCheckboxClicked:(id)clicked;
-(void)notifyResetMailAndPwd:(id)pwd;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)isValidateEmail:(id)email;
-(void)submit;
-(void)showSupportBanksPage;
-(void)showSupportMailPage;
-(void)showCMSWebView:(id)view urlStr:(id)str;
-(void)loginBox:(id)box didDeleteHistoryItemAtIndex:(unsigned)index;
-(void)loginBox:(id)box didSelectHistoryItemAtIndex:(unsigned)index;
-(id)filterAutoPrompResult:(id)result prefix:(id)prefix;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)adjustHeight:(int)height;
-(void)textFieldDidChange:(id)textField;
-(void)userNameTextChanged:(id)changed;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
