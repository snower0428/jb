/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "Portal-Structs.h"
#import "SCDTViewController.h"

@class UILabel, UIButton, NSString, SCRegisterTextField;

@interface SCRegMessageVerifyViewController : SCDTViewController <UITextFieldDelegate> {
@private
	UILabel* _tipLabel;
	UILabel* _textLabel;
	SCRegisterTextField* _inputBox;
	UIButton* _resendButton;
	UIButton* _nextButton;
	double _startTime;
	id _sendMessageBlock;
	id _setCompeleteBlock;
	BOOL isFirst;
	BOOL isTimeShouldStop;
	NSString* _telNumber;
	double _waitTime;
}
@property(assign, nonatomic) double waitTime;
@property(retain, nonatomic) NSString* telNumber;
-(void).cxx_destruct;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)updateButtonTitleWithTimeLeft:(double)timeLeft timer:(id)timer;
-(void)onTimer:(id)timer;
-(void)startWaitAnimation;
-(void)resetClockLabel;
-(void)doResendMessage:(id)message;
-(void)nextBtnClick:(id)click;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)setResendBlock:(id)block andNextAction:(id)action;
-(void)dealloc;
-(void)viewWillDestroy;
-(void)viewDidLoad;
-(id)coreTextLabel;
@end
