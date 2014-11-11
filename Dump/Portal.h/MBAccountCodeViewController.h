/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MBViewController.h"
#import "SafePayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIAlertViewDelegate.h"
#import "Portal-Structs.h"

@class MBAmountCell, DTUIAlertView, DTRpcAsyncCaller, ALPBaseTableView, UIButton;

@interface MBAccountCodeViewController : MBViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, SafePayDelegate, UITextFieldDelegate> {
@private
	DTRpcAsyncCaller* _rpcAsyncCaller;
	ALPBaseTableView* _tableView;
	MBAmountCell* _amountCell;
	UIButton* _nextButton;
	DTUIAlertView* _alertView;
}
@property(assign, nonatomic) __weak DTUIAlertView* alertView;
@property(assign, nonatomic) __weak UIButton* nextButton;
@property(assign, nonatomic) __weak MBAmountCell* amountCell;
@property(assign, nonatomic) __weak ALPBaseTableView* tableView;
@property(retain, nonatomic) DTRpcAsyncCaller* rpcAsyncCaller;
-(void).cxx_destruct;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)payAccount;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)textFieldValuedDidChanged:(id)textFieldValued;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)textFieldDidEndEditing:(id)textField;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)payAction:(id)action;
-(void)refreshNextButton;
-(void)refreshAccountInfo;
-(void)responsePanGesture:(id)gesture;
-(void)addPanGesture;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)createTableView;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)dealloc;
-(id)testData;
@end
