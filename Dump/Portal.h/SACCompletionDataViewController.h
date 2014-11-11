/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "SCDTViewController.h"
#import "Portal-Structs.h"

@class UIScrollView, UIButton, NSString, ALPButton, ALPInputBox;
@protocol SACCompletionDataViewControllerDelegate, SAAccountService, SARSAService;

@interface SACCompletionDataViewController : SCDTViewController <UITextFieldDelegate> {
@private
	ALPInputBox* _nameInputBox;
	ALPInputBox* _passwordInputBox;
	UIButton* _disPwdCkb;
	BOOL _selected;
	ALPButton* _nextBtn;
	id<SARSAService> _rsaService;
	id<SAAccountService> _accInfoService;
	id<SACCompletionDataViewControllerDelegate> _delegate;
	NSString* _password;
	NSString* _alipayId;
	UIScrollView* _scrollView;
}
@property(assign, nonatomic) __weak UIScrollView* scrollView;
@property(retain, nonatomic) NSString* alipayId;
@property(retain, nonatomic) NSString* password;
@property(assign, nonatomic) __weak id<SACCompletionDataViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidChange:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)restorePage;
-(void)setSelected:(BOOL)selected;
-(void)toggleSelected;
-(void)nextBtnClick:(id)click;
-(void)back;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(id)initWithAlipayId:(id)alipayId passWord:(id)word;
@end

