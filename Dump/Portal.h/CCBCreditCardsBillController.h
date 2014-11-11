/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "CCBCreditCardsBillCellDelegate.h"
#import "UITableViewDataSource.h"
#import "Portal-Structs.h"
#import "CCBBaseViewController.h"
#import "UITableViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, UITableView;

@interface CCBCreditCardsBillController : CCBBaseViewController <UITableViewDataSource, UITableViewDelegate, CCBCreditCardsBillCellDelegate, UIAlertViewDelegate> {
@private
	BOOL _needFresh;
	BOOL _isInitWithData;
	UITableView* _tableView;
	NSMutableArray* _dataSourceArray;
}
@property(assign, nonatomic) BOOL isInitWithData;
@property(assign, nonatomic) BOOL needFresh;
@property(retain, nonatomic) NSMutableArray* dataSourceArray;
@property(retain, nonatomic) UITableView* tableView;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(void)back;
-(void)didReceiveMemoryWarning;
-(void)creditCardsBillCellButtonAction:(id)action buttonIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)setData:(id)data;
-(void)jumpToCCBEmailManagerController;
-(void)setTopForPublicPlatform;
-(void)checkPublicPlatform;
-(void)requestData;
-(void)settingAction:(id)action;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)needFreshNotify:(id)notify;
-(void)addNotify;
-(id)initBankBills:(id)bills;
-(id)initBankBillInfoResult:(id)result;
-(id)init;
@end

