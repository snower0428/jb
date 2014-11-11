/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "Portal-Structs.h"
#import "UITableViewDelegate.h"
#import "SCBaseViewController.h"

@class NSArray, UITableView;

@interface SCLoginAccountSelectViewController : SCBaseViewController <UITableViewDataSource, UITableViewDelegate> {
@private
	NSArray* _accounts;
	UITableView* _tableView;
}
@property(assign, nonatomic) __weak UITableView* tableView;
@property(retain, nonatomic) NSArray* accounts;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)onLoginWithLoginId:(id)loginId;
-(void)viewWillLayoutSubviews;
-(void)createSubviews;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

