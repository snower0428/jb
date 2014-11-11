//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBPluginCenterCellDelegate.h"
#import "TBSearchBusinessViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBPluginCategoryItem, TBPluginCenterSearchView, TBPluginModelItem, UITableView;

__attribute__((visibility("hidden")))
@interface TBPluginCenterViewController : TBViewController <TBSearchBusinessViewDelegate, UITableViewDelegate, UITableViewDataSource, TBPluginCenterCellDelegate>
{
    BOOL _isNeedFlushData;
    BOOL _isInitiativeSearch;
    TBPluginCategoryItem *_pluginCategoryItem;
    TBPluginCenterSearchView *_searchView;
    UITableView *_contentView;
    TBPluginModelItem *_recentPlugin;
    NSMutableArray *_showAllPluginArray;
    NSString *_searchKeyword;
    struct CGRect _rect;
}

+ (BOOL)tbNeedToolbar;
@property(nonatomic) BOOL isInitiativeSearch; // @synthesize isInitiativeSearch=_isInitiativeSearch;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
@property(nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(retain, nonatomic) NSMutableArray *showAllPluginArray; // @synthesize showAllPluginArray=_showAllPluginArray;
@property(retain, nonatomic) TBPluginModelItem *recentPlugin; // @synthesize recentPlugin=_recentPlugin;
@property(retain, nonatomic) UITableView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TBPluginCenterSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) TBPluginCategoryItem *pluginCategoryItem; // @synthesize pluginCategoryItem=_pluginCategoryItem;
@property(nonatomic) BOOL isNeedFlushData; // @synthesize isNeedFlushData=_isNeedFlushData;
- (void).cxx_destruct;
- (void)applicationWillResignActive:(id)arg1;
- (void)record:(id)arg1 index:(int)arg2;
- (BOOL)reload:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)userTrackArgsForNextPage;
- (void)reflushData;
- (id)recentPluginListFilePath;
- (void)activeSearchBar;
- (void)searchBarTextDidChangedWithText:(id)arg1;
- (void)searchOptionMenuDidDisappeared;
- (void)searchOptionMenuDidShown;
- (void)searchBarDidBeginEditing;
- (void)searchDidCanceled;
- (void)willSearchWithKeyWord:(id)arg1 AndType:(int)arg2 CatID:(id)arg3;
- (void)searchWithKeyWord:(id)arg1 AndType:(int)arg2 CatID:(id)arg3;
- (void)showSearchViewWithAnimation;
- (void)hideSearchViewWithAnimation;
- (void)failedreflushData:(id)arg1;
- (void)successreflushData:(id)arg1;
- (void)scrollToHead:(id)arg1;
@property(nonatomic) BOOL haveErrorImage;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppearAtFirstTime;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end
