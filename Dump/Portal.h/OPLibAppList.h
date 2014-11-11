/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"

@class OPAppEntry, NSMutableArray, UITableViewCell, ALPTableView, OPAppManageService;
@protocol OPLibAppListDelegate;

@interface OPLibAppList : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate> {
	float _opAppEntry_Footer_Section_height;
	ALPTableView* _hotAppsView;
	NSMutableArray* _hotAppDataSource;
	CGRect _fullScreen;
	OPAppEntry* _entry;
	int _currentPage;
	int _hotAppStatus;
	BOOL _reLoadFlag;
	int _loadDateSectionIndex;
	UITableViewCell* _waitCell;
	OPAppManageService* _opAppManageService;
@private
	id<OPLibAppListDelegate> _listDelegate;
}
@property(assign, nonatomic) int currentPage;
@property(retain, nonatomic) NSMutableArray* hotAppDataSource;
@property(retain, nonatomic) ALPTableView* hotAppsView;
@property(assign, nonatomic) __weak id<OPLibAppListDelegate> listDelegate;
-(void).cxx_destruct;
-(BOOL)isContainsWaitCell:(id)cell;
-(void)addLoadEndCell;
-(void)addWaitCell;
-(void)loadMore;
-(void)resetList;
-(void)appLibLoadDataError;
-(void)appLibLoadData:(id)data pageIndex:(int)index;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view widthForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)tableView:(id)view didEndEditingRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableCount;
-(void)doRefreshTable;
-(void)initData;
-(id)initWithFrame:(CGRect)frame;
@end
