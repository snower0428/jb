/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ALPNumPwdInputViewDelegate.h"

@class UITextField, UIWindow, ALPLinkButton, ALPNumPwdInputView;

@interface AssetMMPPopupView : XXUnknownSuperclass <ALPNumPwdInputViewDelegate> {
@private
	BOOL _bIs;
	ALPLinkButton* _confirmBtn;
	ALPNumPwdInputView* _numInputView;
	UITextField* _passWordTextField;
	UIWindow* _window;
	id _handleBlock;
}
@property(copy, nonatomic) id handleBlock;
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) UITextField* passWordTextField;
@property(retain, nonatomic) ALPNumPwdInputView* numInputView;
@property(retain, nonatomic) ALPLinkButton* confirmBtn;
-(void).cxx_destruct;
-(void)didMoveToWindow;
-(void)becomeActive;
-(void)clearText;
-(void)showAlertView;
-(void)hideWithCompletionBlock:(id)completionBlock;
-(id)pwd;
-(void)onPasswordDidChange:(id)onPassword;
-(void)onCancel:(id)cancel;
-(void)onConfirm:(id)confirm;
-(void)setHandlerBlock:(id)block;
-(id)initWithTitle:(id)title bPassword:(BOOL)password;
@end
