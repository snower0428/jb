/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPBaseTableViewController.h"
#import "Portal-Structs.h"

@class UIScrollView, PPIconListView, NSMutableArray, PPAddPublicAccountService;

@interface PPAddPublicAccountMainViewController : PPBaseTableViewController {
@private
	NSMutableArray* _callerArray;
	PPAddPublicAccountService* _service;
	PPIconListView* recommendListView;
	UIScrollView* _scrollView;
	BOOL isLoad;
	int _selectRow;
}
@property(assign, nonatomic) int selectRow;
-(void).cxx_destruct;
-(void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
-(void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
-(void)updateTableListView;
-(void)didReceiveMemoryWarning;
-(id)placeHoldString;
-(id)officialType;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)defaultImage;
-(void)configureCell:(id)cell withData:(id)data;
-(Class)cellClass;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)iconListDidClicked:(id)iconList;
-(void)typeListDidClicked:(id)typeList;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)addMainObjcSuccess:(id)success;
-(void)setDisplayCustomTitleText:(id)text;
-(void)addMainNetWorkException;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDestroy;
-(void)dealloc;
-(id)initWithRecommendListView:(id)recommendListView service:(id)service;
@end
