/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "COCBaseViewController.h"

@class COCBalanceInfo, NSArray, NSString;

@interface COCQueryResultViewController : COCBaseViewController {
@private
	COCBalanceInfo* _info;
	NSString* _schoolName;
	NSArray* _rowTitle;
}
@property(copy, nonatomic) NSArray* rowTitle;
@property(retain, nonatomic) NSString* schoolName;
@property(retain, nonatomic) COCBalanceInfo* info;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewWillAppear:(BOOL)view;
-(void)charge;
-(void)back;
-(void)viewDidLoad;
@end

