//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate.h"
#import "TBSearchBusinessViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBItemSearchHelperService, TBModelStatusHandler, TBSearchBusinessView, UITableView;

@interface TBSearchHomeNativeViewController : TBViewController <UISearchBarDelegate, UITableViewDataSource, UITableViewDelegate, TBSearchBusinessViewDelegate, UIAlertViewDelegate, TBModelStatusDelegate>
{
    TBItemSearchHelperService *_itemSearchHelperService;
    BOOL _isInitiativeSearch;
    NSString *_searchKeyword;
    UITableView *_hotSearchWordTableView;
    TBSearchBusinessView *_searchBusinessView;
    NSMutableArray *_hotSearchWordArray;
    TBModelStatusHandler *_modelStatusHandler;
}

@property(retain, nonatomic) TBModelStatusHandler *modelStatusHandler; // @synthesize modelStatusHandler=_modelStatusHandler;
@property(retain, nonatomic) NSMutableArray *hotSearchWordArray; // @synthesize hotSearchWordArray=_hotSearchWordArray;
@property(retain, nonatomic) TBSearchBusinessView *searchBusinessView; // @synthesize searchBusinessView=_searchBusinessView;
@property(nonatomic) UITableView *hotSearchWordTableView; // @synthesize hotSearchWordTableView=_hotSearchWordTableView;
@property(nonatomic) BOOL isInitiativeSearch; // @synthesize isInitiativeSearch=_isInitiativeSearch;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void).cxx_destruct;
- (id)userTrackArgsForNextPage;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelDidCancelLoad:(id)arg1;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidStartLoad:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)searchBarDidBeginEditing;
- (void)searchDidCanceled;
- (void)willSearchWithKeyWord:(id)arg1 AndType:(int)arg2 CatID:(id)arg3;
- (void)saveHotSearchKeyWordToCache;
- (void)loadHotSearchKeyWordFromCache;
- (id)hotSearchWords;
- (id)hotSearchWordsCachePath;
- (void)writeHotKeyWordToDocuments;
- (void)loadData;
- (void)searchWithKeyWord:(id)arg1 AndType:(int)arg2 CatID:(id)arg3;
- (void)showBannerViewWithAnimation;
- (void)hideBannerViewWithAnimation;
- (void)configPullToRefresh;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

