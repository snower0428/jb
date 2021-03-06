//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewVarHeightDelegate.h"

@class TTTableFooterInfiniteScrollView, TTTableHeaderDragRefreshView;

@interface TTTableViewNetworkEnabledDelegate : TTTableViewVarHeightDelegate
{
    TTTableHeaderDragRefreshView *_headerView;
    TTTableFooterInfiniteScrollView *_footerView;
    id <TTModel> _model;
    BOOL _dragRefreshEnabled;
    BOOL _infiniteScrollEnabled;
}

@property(readonly) BOOL infiniteScrollEnabled; // @synthesize infiniteScrollEnabled=_infiniteScrollEnabled;
@property(readonly) BOOL dragRefreshEnabled; // @synthesize dragRefreshEnabled=_dragRefreshEnabled;
@property(retain, nonatomic) TTTableFooterInfiniteScrollView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) TTTableHeaderDragRefreshView *headerView; // @synthesize headerView=_headerView;
- (void)modelDidCancelLoad:(id)arg1;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelDidStartLoad:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1 withDragRefresh:(BOOL)arg2 withInfiniteScroll:(BOOL)arg3;

@end

