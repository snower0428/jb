/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DTViewController.h"
#import "UITableViewDataSource.h"
#import "Portal-Structs.h"
#import "UITableViewDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, ALPTableView;

@interface ALPMyMobiPhoneViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate> {
	ALPTableView* _mobiPhoneTableView;
	NSString* _usedSources;
	BOOL _isCurrentController;
@private
	BOOL _inRefresh;
	BOOL _showRefreshBtn;
	NSString* _phoneTitle;
}
@property(retain) NSString* phoneTitle;
@property(assign) BOOL showRefreshBtn;
@property(assign) BOOL inRefresh;
@property(retain, nonatomic) NSString* usedSources;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)viewWillDisappear:(BOOL)view;
-(void)updateCellNode:(id)node;
-(void)updateMobilePhoneData:(id)data;
-(void)updateMobilePhoneDataWithCompletionBlock:(id)completionBlock;
-(void)viewWillAppear:(BOOL)view;
-(void)didReceiveMemoryWarning;
-(void)initTableView;
-(void)backAction:(id)action;
-(void)refreshData;
-(void)refreshDataAction;
-(void)initFromCacheOfUserId:(id)userId;
-(void)viewWillDestroy;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)viewDidLoad;
-(id)initWithUsedSource:(id)usedSource phoneTitle:(id)title showRefreshBtn:(BOOL)btn;
-(id)initWithUsedSource:(id)usedSource phoneTitle:(id)title;
@end
