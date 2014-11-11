//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CPEGORefreshTableHeaderDelegate.h"
#import "CPFunctionHelperObserver.h"
#import "TBGridViewDataSource.h"
#import "TBGridViewDelegate.h"
#import "TBPageControlViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class CPButtonBar, CPEGORefreshTableHeaderView, MKNetworkOperation, NSArray, NSMutableArray, NSString, TBGridView, TBPageControlView, UIScrollView;

@interface LotteryHallController : UIViewController <CPEGORefreshTableHeaderDelegate, UIScrollViewDelegate, TBGridViewDataSource, TBGridViewDelegate, CPFunctionHelperObserver, TBPageControlViewDelegate>
{
    UIScrollView *_backgroundScroller;
    TBPageControlView *_pageControlView;
    NSMutableArray *_bannerImageArray;
    NSArray *_downLoadImageArray;
    int _blockCount;
    CPButtonBar *_buttonBar;
    TBGridView *_digitalLotteryGridView;
    TBGridView *_pickspalLotteryGridView;
    CPEGORefreshTableHeaderView *_refreshHeaderView;
    BOOL _isIssueGetSuccess;
    NSString *_refreshTime;
    BOOL _isLoading;
    NSMutableArray *_downloadImageOperations;
    MKNetworkOperation *_getActivityInfoOperation;
    NSArray *_activityInfos;
}

+ (void)insertLotteryHallPreController:(id)arg1;
+ (id)findLotteryHallFromController:(id)arg1;
+ (BOOL)goLotteryHallFromController:(id)arg1;
+ (void)creatLotteryHallFromController:(id)arg1 AndPopPreviewCount:(int)arg2;
+ (BOOL)isSurpportLottery:(int)arg1;
+ (void)load;
@property(retain, nonatomic) NSArray *activityInfos; // @synthesize activityInfos=_activityInfos;
- (void).cxx_destruct;
- (void)gotoRequestLotteryWith:(id)arg1;
- (void)gotoPresentLottery;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)gridView:(id)arg1 willRemoveCell:(id)arg2;
- (int)gridView:(id)arg1 didSelectGridAtIndex:(int)arg2;
- (id)GridView:(id)arg1 itemForIndex:(int)arg2;
- (int)GridView:(id)arg1 numberOfCellsInSection:(int)arg2;
- (void)TBPageControlView:(id)arg1 didTouchedAtIndex:(unsigned int)arg2;
- (void)initWithFunctionHelper;
- (void)CPFunctionHelperDidLoadFaild:(id)arg1;
- (void)CPFunctionHelperDidLoadFinish:(id)arg1;
- (void)cancelDownloadImage;
- (void)downLoadBannerImages;
- (void)goRandomStakeOfSSQ:(id)arg1;
- (BOOL)backPanGestureRecoginzed;
- (void)setupToolbarItems;
- (void)lotteryBackItemClicked:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)loginCancel;
- (void)loginSuccess;
- (void)handleButtonBarClick:(id)arg1;
- (void)RecieveGetIssueNotification:(id)arg1;
- (void)gotoBetView:(int)arg1;
- (void)getActivityInfosFinished:(id)arg1;
- (void)getActivityInfos;
- (void)getIssues;
- (void)adjustmentIssueInfoOfJXSSC:(id)arg1;
- (void)doneLoadingTableViewData;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)initPullRefreshControl;
- (void)layoutViews;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;

@end
