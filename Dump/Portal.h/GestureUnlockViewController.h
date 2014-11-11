/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "Portal-Structs.h"
#import "DTViewController.h"

@class GestureTipLabel, GestureInputView, DTButton, GestureHeadImageView;
@protocol GestrueViewControllerDelegate;

@interface GestureUnlockViewController : DTViewController <UIAlertViewDelegate> {
@private
	GestureHeadImageView* _headImageView;
	GestureTipLabel* _tipLabel;
	GestureInputView* _inputView;
	DTButton* _resetPswBtn;
	DTButton* _changeAccountBtn;
	int _retryCount;
	id<GestrueViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<GestrueViewControllerDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)gestureInputView:(id)view didFinishWithPassword:(id)password;
-(void)gestureInputViewFirstEffectiveTouch:(id)touch;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)gotoLoginForReset:(id)reset;
-(void)wantToQuite:(id)quite;
-(void)actionChangeAccountToLogin;
-(void)actionResetPswBtnClick;
-(void)resetPsw;
-(void)viewWillDisappear:(BOOL)view;
-(void)notifyFaceToFacePayReceivedData:(id)facePayReceivedData;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end
