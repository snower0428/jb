//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTableViewVarHeightDelegate.h"

@class TTTableHeaderDragRefreshView;

@interface TTTableViewDragRefreshDelegate : TTTableViewVarHeightDelegate
{
    TTTableHeaderDragRefreshView *_headerView;
    id <TTModel> _model;
}

@property(retain, nonatomic) TTTableHeaderDragRefreshView *headerView; // @synthesize headerView=_headerView;
- (void)modelDidCancelLoad:(id)arg1;
- (void)model:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)modelDidFinishLoad:(id)arg1;
- (void)modelDidStartLoad:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;

@end

