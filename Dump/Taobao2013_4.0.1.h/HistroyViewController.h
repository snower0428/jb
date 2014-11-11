//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDateFormatter, NSMutableArray, TBBarButtonItem, TBHistroyStatusInfo, TBItemSearchHelperService, TBModelStatusHandler, UIButton, UITableView;

@interface HistroyViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate>
{
    BOOL _isShowingSearchHistroy;
    NSMutableArray *_searchHistroyArray;
    NSMutableArray *_browsedHistroyArray;
    UIButton *_browsedHistroyBarButton;
    UIButton *_searchHistroyBarButton;
    UITableView *_searchHistroyTableView;
    UITableView *_browsedHistroyTableView;
    NSDateFormatter *_dateFormatter;
    TBItemSearchHelperService *_itemSearchHelperService;
    TBModelStatusHandler *_statusHandler;
    TBHistroyStatusInfo *_histroyStatusInfo;
    TBBarButtonItem *_clearButtonItem;
    id <HistroyViewControllerDelegate> _delegate;
}

+ (BOOL)tbNeedToolbar;
@property(nonatomic) id <HistroyViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *searchHistroyBarButton; // @synthesize searchHistroyBarButton=_searchHistroyBarButton;
@property(retain, nonatomic) UIButton *browsedHistroyBarButton; // @synthesize browsedHistroyBarButton=_browsedHistroyBarButton;
@property(nonatomic) BOOL isShowingSearchHistroy; // @synthesize isShowingSearchHistroy=_isShowingSearchHistroy;
- (void).cxx_destruct;
- (void)updateSearchHistory;
- (id)dataForUserTrack;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)handleWithEmptyStatus;
- (BOOL)deleteSearchKeyword:(id)arg1;
- (void)deleteBrowsedHistroyItem:(id)arg1;
- (void)cellButtonClicked:(id)arg1;
- (void)switchBetweenSearchAndBrowsedTableView:(id)arg1;
- (void)clearHistroy;
- (void)showClearConfirmSheet:(id)arg1;
- (void)loadData;
- (void)setupInitItems;
- (void)initialize;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

