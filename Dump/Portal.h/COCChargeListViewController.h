/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "COCBaseViewController.h"

@class NSMutableArray;

@interface COCChargeListViewController : COCBaseViewController {
@private
	BOOL _isCacheData;
	NSMutableArray* _cardList;
}
@property(assign, nonatomic) BOOL isCacheData;
@property(retain, nonatomic) NSMutableArray* cardList;
-(void).cxx_destruct;
-(void)_cardDataShouldRefresh:(id)_cardData;
-(void)didReceiveMemoryWarning;
-(void)_addCardButtonClick;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)_enterRechargeViewWithCardInfo:(id)cardInfo;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)_convertTableViewRowToCardDisplayCellRow:(int)cardDisplayCellRow;
-(id)_targetCardControllerForRow:(int)row;
-(int)_rowNumbers;
-(id)sourceArray;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)back;
-(void)viewDidLoad;
-(float)contentInsetTopOffset;
-(void)_createSubviews;
@end
