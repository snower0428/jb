/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"
#import "DamnVulnerableIOSApp-Structs.h"

@class NSString, UIButton, NSArray, UITextField, UIScrollView;

__attribute__((visibility("hidden")))
@interface SideChannelDataLeakageDetailsVC : XXUnknownSuperclass <UITextFieldDelegate> {
	int _vulnCode;
	UIScrollView* _logsView;
	UIScrollView* _screenshotView;
	UIScrollView* _pasteboardView;
	UIScrollView* _keystrokeView;
	NSArray* _vulnerabilities;
	UITextField* _nameTextField;
	UITextField* _passwordTextField;
	UITextField* _phoneNoTextField;
	UITextField* _emailTextField;
	UIButton* _signUpButton;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak UIButton* signUpButton;
@property(assign, nonatomic) __weak UITextField* emailTextField;
@property(assign, nonatomic) __weak UITextField* phoneNoTextField;
@property(assign, nonatomic) __weak UITextField* passwordTextField;
@property(assign, nonatomic) __weak UITextField* nameTextField;
@property(retain, nonatomic) NSArray* vulnerabilities;
@property(assign, nonatomic) __weak UIScrollView* keystrokeView;
@property(assign, nonatomic) __weak UIScrollView* pasteboardView;
@property(assign, nonatomic) __weak UIScrollView* screenshotView;
@property(assign, nonatomic) __weak UIScrollView* logsView;
@property(assign, nonatomic) int vulnCode;
-(void).cxx_destruct;
-(void)signUpTapped:(id)tapped;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)didReceiveMemoryWarning;
-(void)makeSignUpCall;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

