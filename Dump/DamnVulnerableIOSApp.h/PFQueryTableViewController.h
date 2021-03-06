/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PF_EGORefreshTableHeaderDelegate.h"
#import "UITableViewDataSource.h"
#import "DamnVulnerableIOSApp-Structs.h"
#import "UITableViewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PF_EGORefreshTableHeaderView, NSArray, PFLoadingView, UIImage, NSString, NSMutableArray;

@interface PFQueryTableViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, PF_EGORefreshTableHeaderDelegate> {
	NSMutableArray* objects;
	BOOL firstLoad;
	int currentPage;
	int lastLoadCount;
	int savedSeparatorStyle;
	BOOL isLoading;
	BOOL loadingViewEnabled;
	BOOL paginationEnabled;
	BOOL pullToRefreshEnabled;
	PFLoadingView* loadingView;
	PF_EGORefreshTableHeaderView* refreshHeaderView;
	NSString* parseClassName;
	unsigned objectsPerPage;
	NSString* textKey;
	NSString* imageKey;
	UIImage* placeholderImage;
}
@property(retain, nonatomic) PF_EGORefreshTableHeaderView* refreshHeaderView;
@property(retain, nonatomic) PFLoadingView* loadingView;
@property(readonly, assign, nonatomic) NSArray* objects;
@property(assign, nonatomic) BOOL isLoading;
@property(assign, nonatomic) unsigned objectsPerPage;
@property(assign, nonatomic) BOOL paginationEnabled;
@property(assign, nonatomic) BOOL pullToRefreshEnabled;
@property(assign, nonatomic) BOOL loadingViewEnabled;
@property(retain, nonatomic) UIImage* placeholderImage;
@property(retain, nonatomic) NSString* imageKey;
@property(retain, nonatomic) NSString* textKey;
@property(retain, nonatomic) NSString* parseClassName;
-(void).cxx_destruct;
-(void)refreshControlValueChanged:(id)changed;
-(void)loadImageForRow:(id)row;
-(void)loadImagesForOnscreenRows;
-(int)paginationCellRow;
-(BOOL)showPaginationCell;
-(void)setup:(id)setup;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForNextPageAtIndexPath:(id)indexPath;
-(id)objectAtIndexPath:(id)indexPath;
-(void)tableView:(id)view configureCell:(id)cell atIndexPath:(id)indexPath object:(id)object;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath object:(id)object;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)egoRefreshTableHeaderDataSourceLastUpdated:(id)updated;
-(BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)loading;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)egoRefreshTableHeader;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)loadNextPage;
-(void)loadObjects:(int)objects clear:(BOOL)clear;
-(void)loadObjects;
-(void)clear;
-(void)alterQuery:(id)query page:(int)page;
-(id)queryForTable;
-(void)objectsWillLoad;
-(void)objectsDidLoad:(id)objects;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)loadView;
-(id)initWithStyle:(int)style className:(id)name;
-(id)initWithClassName:(id)className;
-(id)initWithStyle:(int)style;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(id)initWithCoder:(id)coder;
@end

