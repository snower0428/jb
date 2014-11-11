/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "AssetsBaseController.h"
#import "UIAlertViewDelegate.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"

@class ALPFundSumAmountCell, ALPFundTransferHintLabel, AssetsBaseTableView, NSString, ALPTextFieldTitleCell, AssetsButtonFooterView;

@interface ALPFundTransferOutBalanceViewController : AssetsBaseController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIAlertViewDelegate> {
@private
	BOOL buttonCanEnable;
	ALPFundSumAmountCell* _balanceCell;
	ALPTextFieldTitleCell* _outMoneyCell;
	ALPFundTransferHintLabel* _hintLabel;
	AssetsButtonFooterView* _tailView;
	NSString* _balanceAmount;
	NSString* _transferOutQuotaString;
	NSString* _transferOutQuotaAmount;
	NSString* _passwordType;
	BOOL _isFirst;
	float _stableViewStartY;
	AssetsBaseTableView* _tableView;
}
@property(retain, nonatomic) AssetsBaseTableView* tableView;
-(void).cxx_destruct;
-(void)doOutClick;
-(void)updateData;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setConfirmBtnEnabled;
-(void)textFieldDidChange:(id)textField;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)gotoInit;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)createSubviews;
@end

