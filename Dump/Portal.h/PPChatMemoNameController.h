/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPChatBaseController.h"
#import "UITextFieldDelegate.h"
#import "Portal-Structs.h"

@class ALPInputBox, ThirdPartyAccount, UIButton;

@interface PPChatMemoNameController : PPChatBaseController <UITextFieldDelegate> {
@private
	ThirdPartyAccount* _account;
	ALPInputBox* _inputBox;
	UIButton* _leftButton;
	UIButton* _rightButton;
}
@property(assign, nonatomic) UIButton* rightButton;
@property(assign, nonatomic) UIButton* leftButton;
@property(retain, nonatomic) ALPInputBox* inputBox;
@property(retain, nonatomic) ThirdPartyAccount* account;
-(void).cxx_destruct;
-(void)updateMemoName;
-(void)onSaveButtonClick;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithThirdPartyAccount:(id)thirdPartyAccount;
@end

