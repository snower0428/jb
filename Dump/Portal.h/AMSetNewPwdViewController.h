/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "SCDTViewController.h"
#import "Portal-Structs.h"

@class MSUserRegisterService, UILabel, UIButton, NSString, ALPButton, ALPInputBox, MSPasswordManagerFacade;
@protocol SARSAService;

@interface AMSetNewPwdViewController : SCDTViewController <UITextFieldDelegate> {
@private
	NSString* _accountName;
	UILabel* _userAccLbl;
	ALPInputBox* _newPwdInb;
	UILabel* _pwdLbl;
	UIButton* _disPwdCkb;
	UILabel* _disPwdLbl;
	BOOL _selected;
	ALPButton* _nextBtn;
	id<SARSAService> _rsaService;
	MSPasswordManagerFacade* _pwdFacade;
	MSUserRegisterService* _service;
}
-(void).cxx_destruct;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)setFocus:(id)focus;
-(void)didReceiveMemoryWarning;
-(void)hideKeyboard;
-(void)setMobileNumber:(id)number;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)login:(id)login plainPassword:(id)password;
-(void)getRSAEncryptPwdDid:(id)getRSAEncryptPwd;
-(void)nextBtnClick:(id)click;
-(void)setSelected:(BOOL)selected;
-(void)toggleSelected;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
@end

