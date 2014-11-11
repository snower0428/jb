/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ALPNumPwdInputViewDelegate.h"

@class ALPLinkButton, ALPNumPwdInputView;

@interface SWNumPwdPopupView : XXUnknownSuperclass <ALPNumPwdInputViewDelegate> {
@private
	ALPNumPwdInputView* _pwdInputView;
	id _cancelBlock;
	id _confirmBlock;
	ALPLinkButton* _confirmBtn;
}
@property(assign, nonatomic) __weak ALPLinkButton* confirmBtn;
@property(copy, nonatomic) id confirmBlock;
@property(copy, nonatomic) id cancelBlock;
@property(assign, nonatomic) __weak ALPNumPwdInputView* pwdInputView;
-(void).cxx_destruct;
-(void)onPasswordDidChange:(id)onPassword;
-(void)clearBlock;
-(void)dismiss;
-(void)presentWithinWindow:(id)window;
-(void)onConfirm:(id)confirm;
-(void)onCancel:(id)cancel;
-(void)dealloc;
-(id)initWithTitle:(id)title cancelButtonTitle:(id)title2 confirmButtonTitle:(id)title3;
@end
