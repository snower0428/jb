/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BLGestureCellDelegate.h"
#import "BLTradeListViewController.h"

@class UITapGestureRecognizer, NSString, UISwipeGestureRecognizer, BLGestureCell, UIView, NSIndexPath, UIViewController;

@interface BillAppRootController : BLTradeListViewController <BLGestureCellDelegate> {
@private
	BOOL isShowHelpTip;
	BOOL _isViewApear;
	int requestControlNumber;
	UIViewController* detailController;
	BLGestureCell* currentDeleteCell;
	NSIndexPath* deleteIndexPath;
	UIView* touchDeleteModeLayer;
	UISwipeGestureRecognizer* swipeGesturecognizer;
	UITapGestureRecognizer* tapRecognizer;
	NSString* _thirdAccountId;
}
@property(assign, nonatomic) BOOL isViewApear;
@property(copy, nonatomic) NSString* thirdAccountId;
@property(assign, nonatomic) BOOL isShowHelpTip;
@property(retain, nonatomic) UITapGestureRecognizer* tapRecognizer;
@property(retain, nonatomic) UISwipeGestureRecognizer* swipeGesturecognizer;
@property(retain, nonatomic) UIView* touchDeleteModeLayer;
@property(retain, nonatomic) NSIndexPath* deleteIndexPath;
@property(assign, nonatomic) BLGestureCell* currentDeleteCell;
@property(retain, nonatomic) UIViewController* detailController;
@property(assign, nonatomic) int requestControlNumber;
-(void).cxx_destruct;
-(void)didReceiveMemoryWarning;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(BOOL)allowAccessToDataNextMonth:(int)dataNextMonth;
-(void)showHelpView;
-(void)doCheckShowHelpView;
-(void)checkShowHelpView;
-(BOOL)isGestureWindow;
-(void)doNotifycation_TouchHeadButton:(id)button;
-(void)selectRowAction:(id)action;
-(BOOL)isPersonalBusinessFromBillType:(id)billType;
-(id)getFollowInfo:(id)info;
-(BOOL)needGotoPublicLW:(id)lw billType:(id)type;
-(void)gotoDialogViewController:(id)controller;
-(void)gotoDetailViewController:(id)controller;
-(void)dropDownOnClick:(id)click;
-(void)dataFinishSignal:(BOOL)signal;
-(BOOL)dataChangeNotify:(id)notify;
-(void)deleteRecordAnimated;
-(void)disposeDeleteBillInfo:(id)info;
-(void)disposeTradelist:(id)tradelist;
-(void)switchDataNotify:(id)notify;
-(void)updateData:(id)data;
-(BOOL)isSucceed:(id)succeed;
-(void)execResultCode:(id)code;
-(void)defaultExceptionAction:(id)action;
-(void)loadMoreData:(id)data;
-(void)loadPageDataWithMonthIndex:(int)monthIndex pageIndex:(int)index;
-(void)loadData;
-(void)deleteBillInfo:(id)info bizInNo:(id)no gmtCreate:(id)create indexPath:(id)path;
-(int)dataSourceId;
-(void)pamentButtonOnClick:(id)click;
-(void)closeWithIndex:(int)index isScroll:(BOOL)scroll;
-(void)closeFolderWithIndexPath:(id)indexPath;
-(void)autoCloseFolderWithIndexPath:(id)indexPath;
-(void)openAll;
-(void)openWithIndex:(int)index;
-(BOOL)canCloseWithIndex:(int)index;
-(BOOL)isAllClose;
-(BOOL)exceptionHandling:(int)handling;
-(void)showListView:(BOOL)view;
-(void)titleViewOnClick:(int)click;
-(BOOL)removeDataWithIndexPath:(id)indexPath;
-(void)cellWillRemove:(id)cell;
-(BOOL)slidingGesture:(unsigned)gesture cell:(id)cell;
-(void)handleSwipeFrom:(id)from;
-(void)tapAction:(id)action;
-(void)releaseGestureRecognizer;
-(void)setupGestureRecognizer;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(BOOL)selectMenuItemWithIndex:(int)index;
-(void)cancelAllTask;
-(void)dealloc;
-(void)initUI;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithBillType:(id)billType;
@end
