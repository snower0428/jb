//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class SVPullToRefreshView;

@interface UIScrollView (SVPullToRefresh)
@property(nonatomic) BOOL showsPullToRefresh; // @dynamic showsPullToRefresh;
@property(readonly, nonatomic) SVPullToRefreshView *pullToRefreshView; // @dynamic pullToRefreshView;
- (void)setPullToRefreshView:(id)arg1;
- (void)triggerPullToRefresh;
- (void)addPullToRefreshWithActionHandler:(CDUnknownBlockType)arg1;
@end

