/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UISearchBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UISearchBar, UIView, APTransferCardViewController, UIButton, UITableView, NSMutableDictionary, NSMutableArray, RMIOperation;

@interface HistoryCardViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
	UITableView* _tableView;
	APTransferCardViewController* _cardViewController;
@private
	UIView* _containerView;
	UISearchBar* _searchBar;
	UIButton* _dismissButton;
	UIButton* _cancelSearchButton;
	UIView* _decorateView;
	UIView* _hintView;
	NSMutableArray* _historyCards;
	NSMutableArray* _indexArray;
	NSMutableDictionary* _cardsCache;
	RMIOperation* _currentOperation;
}
@property(retain, nonatomic) RMIOperation* currentOperation;
@property(retain, nonatomic) NSMutableArray* historyCards;
@property(retain, nonatomic) UIView* decorateView;
@property(retain, nonatomic) UIButton* cancelSearchButton;
@property(retain, nonatomic) UIButton* dismissButton;
@property(retain, nonatomic) UISearchBar* searchBar;
@property(assign, nonatomic) APTransferCardViewController* cardViewController;
-(void)_dismiss;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)_setDecorateViewHide:(BOOL)hide;
-(void)_hideCancelAnimation;
-(void)_showCancelAnimation;
-(void)APNavigationBarDidClickBackButton;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)setSearchCancelButtonEnabled:(BOOL)enabled;
-(id)_titleHeaderForKey:(id)key;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)dealloc;
-(void)viewDidLoad;
-(id)init;
-(void)resetSearchBarLayout;
-(void)_setupSearchBar;
-(void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;
-(void)loadBankCardRequestDidFinish:(id)loadBankCardRequest;
-(void)viewWillDisappear:(BOOL)view;
-(void)_initCardList;
-(void)_adjuestHintLabelNoResult;
-(void)_adjustHintLabelNoData;
-(void)_adjustHintLabelFrame:(CGRect)frame hint:(id)hint;
-(void)_buildPinYinIndexWithPredicate:(id)predicate;
-(void)_buildSourceList;
-(void)archieveCardInfo:(id)info;
-(id)_cacheArrayWithKey:(id)key;
-(void)_clearCardsCache;
-(void)_clearAndRemoveFiltedCards;
-(id)_buildScanRangeWithTag:(id)tag numberRange:(NSRange)range charOffset:(int)offset;
-(NSRange)_buildFormattedCardNumberRange:(NSRange)range;
-(id)_buildScanRangeWithTag:(id)tag;
-(void)_cleanupSearchResult;
@end
