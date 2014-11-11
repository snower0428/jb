/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AssetsBaseScrollViewController.h"
#import "UITextFieldDelegate.h"
#import "Portal-Structs.h"

@class ALPAuthCodeBox, ALPButton;

@interface ALPCreditOpenCheckCodeViewController : AssetsBaseScrollViewController <UITextFieldDelegate> {
	ALPAuthCodeBox* _checkCodeBox;
	ALPButton* _nextButton;
}
-(void).cxx_destruct;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)didReceiveMemoryWarning;
-(void)nextStepClicked;
-(void)getCheckCodeClick;
-(void)initNextStepBtn;
-(void)initCheckCodeBox;
-(void)initTipLabel;
-(void)backAction;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

