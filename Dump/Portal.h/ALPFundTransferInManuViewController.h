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
#import "FundCommonTransferInDelegate.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"

@class NSRegularExpression, ALPFundTransferInService, AssetsBaseTableView, NSString, ALPTextFieldTitleCell, AssetsButtonFooterViewWithAgreement;

@interface ALPFundTransferInManuViewController : AssetsBaseController <FundCommonTransferInDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
@private
	AssetsBaseTableView* _tableView;
	AssetsButtonFooterViewWithAgreement* _tailView;
	ALPTextFieldTitleCell* _transferInCell;
	NSString* _amount;
	NSString* _sources;
	NSRegularExpression* _regularExpression;
	ALPFundTransferInService* _transferInService;
	int _tranferType;
}
-(void).cxx_destruct;
-(void)back;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidChanged:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)fundTransferInDidSuccess:(id)fundTransferIn;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)confirmClicked;
-(void)gotoManager;
-(void)initTableView;
-(void)showKeyboard;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithType:(int)type;
@end

