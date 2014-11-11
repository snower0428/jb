/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APViewController2.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class UIScrollView, NSString, APButton, UIButton, UITableView, NSMutableArray, UIViewController, PublicBillsChargeInfo;

@interface PublicBillsChargeController : APViewController2 <UITableViewDelegate, UITableViewDataSource> {
	int _chargeType;
	UIScrollView* _scrollView;
	NSString* _navTitle;
	UITableView* _billsTv;
	NSMutableArray* _dataArr;
	UIButton* _checkedBtn;
	APButton* _nextBtn;
	NSString* _billId;
	NSString* _content;
	PublicBillsChargeInfo* _chargeInfo;
	BOOL _firstLoadFlag;
	int _checkedBtnTag;
	UIViewController* _rootViewController;
}
@property(retain, nonatomic) UIViewController* rootViewController;
@property(retain, nonatomic) NSString* content;
@property(retain, nonatomic) NSString* billId;
@property(assign, nonatomic) int chargeType;
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(void)nextBtnClick:(id)click;
-(void)checkBtnClick:(id)click;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)APNavigationBarDidClickBackButton;
-(void)viewDidLoad;
@end
