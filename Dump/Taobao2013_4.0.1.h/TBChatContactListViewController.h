//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBChatListDataSourceDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDelegate.h"

@class TBChatContactListDataSource, TBChatSearchBar, TBChatSearchListDataSource, UISearchDisplayController, UITableView, UIView;

@interface TBChatContactListViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UISearchDisplayDelegate, TBChatListDataSourceDelegate>
{
    id <TBChatContactListViewControllerDelegate> _delegate;
    UIView *_noRecentContactView;
    TBChatSearchBar *_searchContactSearchBar;
    UITableView *_recentContactTableView;
    UISearchDisplayController *_theSearchDisplayController;
    TBChatContactListDataSource *_recentContactDataSource;
    TBChatSearchListDataSource *_searchContactDataSource;
}

@property(retain, nonatomic) TBChatSearchListDataSource *searchContactDataSource; // @synthesize searchContactDataSource=_searchContactDataSource;
@property(retain, nonatomic) TBChatContactListDataSource *recentContactDataSource; // @synthesize recentContactDataSource=_recentContactDataSource;
@property(retain, nonatomic) UISearchDisplayController *theSearchDisplayController; // @synthesize theSearchDisplayController=_theSearchDisplayController;
@property(retain, nonatomic) UITableView *recentContactTableView; // @synthesize recentContactTableView=_recentContactTableView;
@property(retain, nonatomic) TBChatSearchBar *searchContactSearchBar; // @synthesize searchContactSearchBar=_searchContactSearchBar;
@property(retain, nonatomic) UIView *noRecentContactView; // @synthesize noRecentContactView=_noRecentContactView;
@property(nonatomic) id <TBChatContactListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didGiveUpLogin:(id)arg1;
- (void)didLoginSuccess:(id)arg1;
- (void)didLoginFailed:(id)arg1;
- (void)didStartLogin:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dataSourceIsEmpty:(BOOL)arg1;
- (void)dataSourceNeedReloadData:(id)arg1;
- (id)titleViewWithTitle:(id)arg1;
- (void)resetDataSource;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

@end
