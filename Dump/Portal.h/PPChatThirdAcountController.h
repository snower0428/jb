/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPChatBaseController.h"
#import "UITableViewDataSource.h"
#import "UIAlertViewDelegate.h"

@class ThirdPartyAccount, UITableViewCell, UIButton, UITableView;

@interface PPChatThirdAcountController : PPChatBaseController <UITableViewDataSource, UIAlertViewDelegate> {
@private
	ThirdPartyAccount* _account;
	UITableView* _tableView;
	UITableViewCell* _accountCell;
	UIButton* _backButton;
}
@property(assign, nonatomic) UIButton* backButton;
@property(retain, nonatomic) UITableViewCell* accountCell;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) ThirdPartyAccount* account;
-(void).cxx_destruct;
-(void)removeThirdPartyAccount;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)onAccountCellClick;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)onRemoveButtonClick;
-(void)initUI;
-(id)footerView;
-(id)headerView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithThirdPartyAccount:(id)thirdPartyAccount;
@end

