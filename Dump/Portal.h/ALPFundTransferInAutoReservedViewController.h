/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "AssetsBaseController.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"

@class UIView, ALPFundTransferHintLabel, AssetsBaseTableView, ALPTextFieldTitleCell, NSString, AssetsButtonFooterView;

@interface ALPFundTransferInAutoReservedViewController : AssetsBaseController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate> {
@private
	NSString* _reservedAmount;
	AssetsBaseTableView* _tableView;
	AssetsButtonFooterView* _tableFooterView;
	ALPTextFieldTitleCell* _reservedAmountCell;
	UIView* _allFooter;
	ALPFundTransferHintLabel* _hint;
	BOOL _customReservedEnabled;
}
@property(assign, nonatomic) BOOL customReservedEnabled;
-(void).cxx_destruct;
-(void)commit:(id)commit;
-(void)doCommit:(id)commit;
-(void)updateLabel;
-(void)textFieldDidChanged:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)viewDidLoad;
-(id)initWithReservedAmount:(id)reservedAmount;
@end

