/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TFViewController.h"
#import "CMIndexBarDelegate.h"
#import "TFBankPreLoadDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "Portal-Structs.h"

@class NSDictionary, NSArray, UISearchDisplayController, UISearchBar, UIView, ALPBaseTableView, CMIndexBar, TFTransferInfoFilter, NSMutableArray;
@protocol TFToCardFormBanksDelegate;

@interface TFToCardBanksViewController : TFViewController <UITableViewDataSource, UITableViewDelegate, TFBankPreLoadDelegate, CMIndexBarDelegate, UISearchBarDelegate, UISearchDisplayDelegate> {
@private
	BOOL _isSearchMode;
	id<TFToCardFormBanksDelegate> _bankDelegate;
	ALPBaseTableView* _banksTableView;
	NSDictionary* _bankDict;
	NSArray* _keys;
	CMIndexBar* _indexBar;
	UISearchBar* _searchBar;
	TFTransferInfoFilter* _transferInfoFilter;
	NSMutableArray* _filterArray;
	UIView* _emptyView;
	UISearchDisplayController* _mSearchDisplayController;
	NSMutableArray* _searchResultArray;
}
@property(retain, nonatomic) UIView* emptyView;
@property(retain, nonatomic) NSMutableArray* filterArray;
@property(retain, nonatomic) TFTransferInfoFilter* transferInfoFilter;
@property(retain, nonatomic) NSMutableArray* searchResultArray;
@property(assign, nonatomic) BOOL isSearchMode;
@property(retain, nonatomic) UISearchDisplayController* mSearchDisplayController;
@property(retain, nonatomic) UISearchBar* searchBar;
@property(retain, nonatomic) CMIndexBar* indexBar;
@property(retain, nonatomic) NSArray* keys;
@property(retain, nonatomic) NSDictionary* bankDict;
@property(retain, nonatomic) ALPBaseTableView* banksTableView;
@property(assign, nonatomic) id<TFToCardFormBanksDelegate> bankDelegate;
-(void).cxx_destruct;
-(void)back;
-(void)didReceiveMemoryWarning;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(void)indexSelectionDidChange:(id)indexSelection index:(int)index title:(id)title;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)viewWillDisappear:(BOOL)view;
-(void)checkEmptyView;
-(void)tfBankPreLoadDidError:(id)tfBankPreLoad;
-(void)tfBankPreLoadDidFinishedBanks:(id)tfBankPreLoad keys:(id)keys;
-(void)tfBankPreLoadWillStartLoadFromServer;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)updateDisplayResultLabelText:(id)text;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchResultsReload;
-(void)matchBank:(id)bank;
-(void)searchBank:(id)bank;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)setupSearchBar:(float)bar;
-(void)buildFilter:(id)filter;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
