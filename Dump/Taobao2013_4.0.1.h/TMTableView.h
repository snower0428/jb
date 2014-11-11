//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "TMLoadMoreViewDelegate.h"
#import "TMRefreshTableHeaderDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSDate, TMLoadMoreView, TMRefreshTableHeaderView;

@interface TMTableView : UITableView <UITableViewDataSource, UITableViewDelegate, TMRefreshTableHeaderDelegate, TMLoadMoreViewDelegate>
{
    BOOL _isLoading;
    BOOL _refreshing;
    BOOL _forceSrcollDisabled;
    NSDate *_lastRefreshDate;
    TMRefreshTableHeaderView *_refreshView;
    TMLoadMoreView *_loadMoreView;
    struct CGPoint _startPt;
    id <UITableViewDataSource> _originalDataSource;
    id <UITableViewDelegate> _originalDelegate;
    BOOL _isPaging;
    BOOL _needLoad;
    id <TMTableViewPagingDelegate> _pagingDataSource;
    id <TMTableViewDelegate> _tableDelegate;
    id <TMTableViewSwipeDelegate> _swipeDelegate;
}

@property(nonatomic) BOOL needLoad; // @synthesize needLoad=_needLoad;
@property(nonatomic) BOOL isPaging; // @synthesize isPaging=_isPaging;
@property(nonatomic) id <TMTableViewSwipeDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(nonatomic) id <TMTableViewDelegate> tableDelegate; // @synthesize tableDelegate=_tableDelegate;
@property(nonatomic) id <TMTableViewPagingDelegate> pagingDataSource; // @synthesize pagingDataSource=_pagingDataSource;
- (void).cxx_destruct;
- (BOOL)loadMoreScrollViewNeedLoadMore:(id)arg1;
- (BOOL)loadMoreScrollViewIsLoading:(id)arg1;
- (void)loadMoreScrollViewDidTriggerLoadMore:(id)arg1;
- (id)tmRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (BOOL)tmRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)tmRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)createEmptyCell:(id)arg1 withImage:(id)arg2 andTips:(id)arg3;
- (id)createLoadingCell:(id)arg1;
- (void)reloadData;
- (void)setRefreshHeader:(BOOL)arg1 withTipText:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

