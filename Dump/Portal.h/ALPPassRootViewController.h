/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "UITableViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "Portal-Structs.h"
#import "ALPPassGuideViewDelegate.h"
#import "DTViewController.h"
#import "UITableViewDataSource.h"

@class ODRefreshControl, NSString, ALPPassBaseGuider;

@interface ALPPassRootViewController : DTViewController <UITableViewDataSource, UITableViewDelegate, ALPPassGuideViewDelegate, UIScrollViewDelegate, UIAlertViewDelegate> {
	ALPPassBaseGuider* _guider;
	ODRefreshControl* _refreshControl;
@private
	BOOL _isMPed;
	NSString* sourceAppName;
}
@property(copy, nonatomic) NSString* sourceAppName;
@property(retain, nonatomic) ALPPassBaseGuider* guider;
-(void).cxx_destruct;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)refreshEventRecieved:(id)recieved;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)guider:(id)guider refreshHeaderViewReady:(id)ready;
-(void)guider:(id)guider tableViewReady:(id)ready;
-(void)addMonitorPoint;
-(void)currentAction;
-(void)historyAction:(id)action;
-(id)base64URL:(id)url;
-(void)viewWillDestroy;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithGuider:(id)guider;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
@end

