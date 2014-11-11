//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicViewController.h"

#import "TBModelStatusDelegate.h"
#import "TBSNSFeedsListViewDelegate.h"

@class HUDActivityView, TBSNSFeedsListView, dynamicHeadView;

@interface TBSNSNewBasicFeedsListViewController : TBSNSBasicViewController <TBModelStatusDelegate, TBSNSFeedsListViewDelegate>
{
    TBSNSFeedsListView *_feedsListView;
    dynamicHeadView *_dynamicHeadView;
    HUDActivityView *_hudLoadingView;
}

+ (BOOL)tbNeedToolbar;
@property(retain, nonatomic) HUDActivityView *hudLoadingView; // @synthesize hudLoadingView=_hudLoadingView;
@property(retain, nonatomic) dynamicHeadView *dynamicHeadView; // @synthesize dynamicHeadView=_dynamicHeadView;
@property(retain, nonatomic) TBSNSFeedsListView *feedsListView; // @synthesize feedsListView=_feedsListView;
- (void).cxx_destruct;
- (void)clickLoadData:(id)arg1;
- (void)backBtnClicked:(id)arg1;
- (void)clickCommentsButtonWithSnsId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 andHomeType:(id)arg3;
- (void)completeLoadDataWithFeedCount:(int)arg1 forFeedsListView:(id)arg2;
- (void)selectedAccountHeaderOfItem:(int)arg1 forFeedsListView:(id)arg2;
- (void)selectedItem:(int)arg1 forFeedsListView:(id)arg2;
- (int)getWTExceptionType;
- (void)reloadData;
- (void)setServiceType:(int)arg1;
- (void)loadFeedListData;
- (void)loadData;
- (void)initDataTable;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setupTBToolbarItems;
- (BOOL)needLoadingView;
- (void)setUpView;
- (BOOL)needRefresh;
- (BOOL)needNextPage;

@end

