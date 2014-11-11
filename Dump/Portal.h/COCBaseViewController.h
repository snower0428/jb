/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "Portal-Structs.h"
#import "DTViewController.h"
#import "UITableViewDataSource.h"

@class UIView, NSMutableArray, UIViewController, UITableView, UIGestureRecognizer;

@interface COCBaseViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate> {
@private
	UITableView* _tableView;
	UIView* _baseView;
	UIViewController* _fromViewController;
	UIView* _activeField;
	UIGestureRecognizer* _tapRecognizer;
	NSMutableArray* _rpcArray;
	CGPoint _tempOffset;
}
@property(assign, nonatomic) CGPoint tempOffset;
@property(retain) NSMutableArray* rpcArray;
@property(retain, nonatomic) UIGestureRecognizer* tapRecognizer;
@property(retain, nonatomic) UIView* activeField;
@property(assign, nonatomic) __weak UIViewController* fromViewController;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) UIView* baseView;
-(void).cxx_destruct;
-(void)cancelAllRPCInPool;
-(void)_addRPCPool:(id)pool;
-(id)callAsyncBlock:(id)block completion:(id)completion;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)didTapOnTableView:(id)view;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)_keyboardWillBeHidden:(id)_keyboard;
-(void)_keyboardWasShown:(id)shown;
-(void)cancelKeyboardActive;
-(void)removeKeyboardNotification;
-(void)registerKeyboardNotification;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_createSubviews;
-(float)contentInsetTopOffset;
-(void)back;
-(void)_initNavigationBar;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
@end
