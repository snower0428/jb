/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class EGORefreshTableHeaderView;
@protocol UIRefreshTableViewDelegate;

@interface UIRefreshTableView : XXUnknownSuperclass {
	EGORefreshTableHeaderView* _refreshHeaderView;
}
@property(readonly, assign, nonatomic) EGORefreshTableHeaderView* refreshHeaderView;
@property(assign, nonatomic) id<UIRefreshTableViewDelegate> delegate;
-(void)resetRefreshHeader:(BOOL)header;
-(BOOL)shouldRefreshData;
-(void)setRefreshStopped;
-(void)setRefreshStarted;
-(void)scrollViewDidEndDragging;
-(void)scrollViewDidScroll;
-(void)createSubviews;
-(id)initWithFrame:(CGRect)frame style:(int)style;
-(void)dealloc;
@end

