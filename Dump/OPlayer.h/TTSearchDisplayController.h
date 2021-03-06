//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISearchDisplayController.h"

#import "UISearchDisplayDelegate.h"

@class NSTimer, TTTableViewController;

@interface TTSearchDisplayController : UISearchDisplayController <UISearchDisplayDelegate>
{
    TTTableViewController *_searchResultsViewController;
    NSTimer *_pauseTimer;
    BOOL _pausesBeforeSearching;
    id <UITableViewDelegate> _searchResultsDelegate2;
}

@property(nonatomic) BOOL pausesBeforeSearching; // @synthesize pausesBeforeSearching=_pausesBeforeSearching;
@property(retain, nonatomic) TTTableViewController *searchResultsViewController; // @synthesize searchResultsViewController=_searchResultsViewController;
- (void)setSearchResultsDelegate:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchScope:(int)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchAfterPause;
- (void)restartPauseTimer;
- (void)resetResults;
- (void)dealloc;
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

@end

