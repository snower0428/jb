//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "HistroyViewControllerDelegate.h"
#import "TBCloseWidgetDelegate.h"
#import "TBExpandOrContractScrollViewDelegate.h"
#import "TBSearchBusinessViewDelegate.h"
#import "TBSegmentedControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "dynamicNavMoreDelegate.h"

@class NSTimer, TBBarButtonItem, TBExpandOrContractScrollViewDelegateObject, TBItemSearchServiceEx, TBModelStatusHandler, TBMoreDataTableViewCell, TBNavigationController, TBSearchBusinessView, TBSearchCategoryLoadingView, TBSearchComposeHeaderView, TBSearchLocationAndFilterViewController, UIScrollViewSpeed, UITableView;

@interface TBSearchComposeViewController : TBViewController <TBExpandOrContractScrollViewDelegate, TBSearchBusinessViewDelegate, HistroyViewControllerDelegate, TBCloseWidgetDelegate, dynamicNavMoreDelegate, UITableViewDataSource, UITableViewDelegate, TBSegmentedControlDelegate>
{
    BOOL _needForceReload;
    BOOL _isSearchBusinessViewShowing;
    BOOL _isInitiativeSearch;
    _Bool _isShopSearch;
    BOOL _isEmpty;
    BOOL _isFailed;
    BOOL _isLoadingMore;
    BOOL _isScrolling;
    BOOL _hasViewFirstAppeared;
    UITableView *_tableView;
    TBSearchComposeHeaderView *_headerView;
    TBItemSearchServiceEx *_itemSearchService;
    TBSearchComposeHeaderView *_searchComposeHeaderView;
    TBSearchBusinessView *_searchBusinessView;
    CDUnknownBlockType _leftMenuButtonActionBlock;
    CDUnknownBlockType _rightMenuButtonActionBlock;
    int _layoutStyle;
    CDUnknownBlockType _dataLoaded;
    TBExpandOrContractScrollViewDelegateObject *_expandOrContractScrollViewDelegateObject;
    TBModelStatusHandler *_failStatusHandler;
    TBBarButtonItem *_layoutItem;
    TBMoreDataTableViewCell *_moreDataTableViewCell;
    UIScrollViewSpeed *_scrollViewSpeed;
    NSTimer *_scrollTimer;
    TBSearchCategoryLoadingView *_loadingCategoryView;
    NSTimer *_netLoadingTimer;
    TBNavigationController *_filterNavController;
    TBSearchLocationAndFilterViewController *_filterController;
    struct CGPoint _lastOpenedPos;
}

@property(retain, nonatomic) TBSearchLocationAndFilterViewController *filterController; // @synthesize filterController=_filterController;
@property(retain, nonatomic) TBNavigationController *filterNavController; // @synthesize filterNavController=_filterNavController;
@property(retain, nonatomic) NSTimer *netLoadingTimer; // @synthesize netLoadingTimer=_netLoadingTimer;
@property(retain, nonatomic) TBSearchCategoryLoadingView *loadingCategoryView; // @synthesize loadingCategoryView=_loadingCategoryView;
@property(nonatomic) struct CGPoint lastOpenedPos; // @synthesize lastOpenedPos=_lastOpenedPos;
@property(nonatomic) BOOL hasViewFirstAppeared; // @synthesize hasViewFirstAppeared=_hasViewFirstAppeared;
@property(nonatomic) BOOL isScrolling; // @synthesize isScrolling=_isScrolling;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) UIScrollViewSpeed *scrollViewSpeed; // @synthesize scrollViewSpeed=_scrollViewSpeed;
@property(retain, nonatomic) TBMoreDataTableViewCell *moreDataTableViewCell; // @synthesize moreDataTableViewCell=_moreDataTableViewCell;
@property(retain, nonatomic) TBBarButtonItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property(nonatomic) BOOL isLoadingMore; // @synthesize isLoadingMore=_isLoadingMore;
@property(nonatomic) BOOL isFailed; // @synthesize isFailed=_isFailed;
@property(nonatomic) BOOL isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(retain, nonatomic) TBExpandOrContractScrollViewDelegateObject *expandOrContractScrollViewDelegateObject; // @synthesize expandOrContractScrollViewDelegateObject=_expandOrContractScrollViewDelegateObject;
@property(copy, nonatomic) CDUnknownBlockType dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) _Bool isShopSearch; // @synthesize isShopSearch=_isShopSearch;
@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(copy, nonatomic) CDUnknownBlockType rightMenuButtonActionBlock; // @synthesize rightMenuButtonActionBlock=_rightMenuButtonActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leftMenuButtonActionBlock; // @synthesize leftMenuButtonActionBlock=_leftMenuButtonActionBlock;
@property(retain, nonatomic) TBSearchBusinessView *searchBusinessView; // @synthesize searchBusinessView=_searchBusinessView;
@property(retain, nonatomic) TBSearchComposeHeaderView *searchComposeHeaderView; // @synthesize searchComposeHeaderView=_searchComposeHeaderView;
@property(retain, nonatomic) TBItemSearchServiceEx *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
@property(retain, nonatomic) TBSearchComposeHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL isInitiativeSearch; // @synthesize isInitiativeSearch=_isInitiativeSearch;
- (void).cxx_destruct;
- (id)imageUsabilityRecord:(id)arg1 imgUrl:(id)arg2;
- (id)args;
- (void)showStarShop;
- (void)updateLayoutAfterWidgetClosed;
- (void)scrollTimerCallback:(id)arg1;
- (id)pageNumberForIndexPath:(id)arg1;
- (void)updatePageScrollerState;
- (void)tapRightMenuButton:(id)arg1;
- (void)tapLeftMenuButton:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)restartTimer;
- (void)scrollViewShouldContact:(id)arg1;
- (void)scrollViewShouldExpand:(id)arg1;
- (void)emptyContract;
- (void)contract;
- (void)expand;
- (void)hideHeader:(BOOL)arg1;
- (void)hideFooter:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)downloadImageForVisiableCells;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)clickNavQuery:(id)arg1 From:(id)arg2;
- (void)isNavMore:(BOOL)arg1;
- (void)layoutWidget;
- (void)reloadData;
- (void)segmentedControlSelectionChanged:(id)arg1 withButton:(id)arg2;
- (void)searchBarDidEndEditing;
- (void)searchDidCanceled;
- (void)willSearchWithKeyWord:(id)arg1 AndType:(int)arg2 CatID:(id)arg3;
- (void)activeSearchBar;
- (void)dismissSearchBusinessView;
- (void)hideSearchBusinessView:(CDUnknownBlockType)arg1;
- (void)setShowsSearchBusinessView:(BOOL)arg1;
- (void)removeSearchBusinessViewFromNav;
- (void)addSearchBusinessViewToNav;
- (void)showSearchBusinessView:(id)arg1;
- (void)configSearchBarTitle;
- (void)initSearchBusinessView;
- (void)loadHeader;
- (void)didReceiveMemoryWarning;
- (void)reloadDataIfNeed;
- (void)viewDidUnload;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidAppear:(BOOL)arg1;
- (void)changeLoadingShowStatus:(id)arg1;
- (void)stopLoadingCategoryAnimation;
- (void)startLoadingAnimation;
- (void)viewDidLoad;
- (void)searchHistroyViewController:(id)arg1 didSelectedKeyWord:(id)arg2 forSearchType:(int)arg3;
- (void)closeFilter;
- (void)openFilter;
- (void)historyButtonClicked:(id)arg1;
- (void)layoutClicked:(id)arg1;
- (void)configToolbarItems;
- (void)makeNavRightButton;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

