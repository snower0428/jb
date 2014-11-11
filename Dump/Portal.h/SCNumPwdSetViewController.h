/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ALPNumPwdInputViewDelegate.h"
#import "SCBaseViewController.h"

@class NSString, NSNumber, UILabel, ALPNumPwdInputView, DTRpcAsyncCaller;

@interface SCNumPwdSetViewController : SCBaseViewController <ALPNumPwdInputViewDelegate> {
@private
	NSString* _idCardNo;
	NSNumber* _finalResult;
	DTRpcAsyncCaller* _rpcCaller_openPwd;
	UILabel* _hintLabel;
	ALPNumPwdInputView* _pwdInputView;
	int _openPwdPhase;
	NSString* _pwdEntered1stTime;
}
@property(retain, nonatomic) NSString* pwdEntered1stTime;
@property(assign, nonatomic) int openPwdPhase;
@property(assign, nonatomic) __weak ALPNumPwdInputView* pwdInputView;
@property(assign, nonatomic) __weak UILabel* hintLabel;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcCaller_openPwd;
@property(retain, nonatomic) NSNumber* finalResult;
@property(copy, nonatomic) NSString* idCardNo;
-(void).cxx_destruct;
-(void)exitServiceProvUI;
-(BOOL)isPasswordQualified:(id)qualified error:(id*)error;
-(void)openWithPassword:(id)password;
-(void)onGotoPhase_2ndTimeCheck;
-(void)onGotoPhase_1stTimeInput;
-(void)onPasswordDidChange:(id)onPassword;
-(void)onBack;
-(void)createSubViews;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
