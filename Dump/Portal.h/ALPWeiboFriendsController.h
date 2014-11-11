/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "Portal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UISearchBar, MJRefreshFooterView, NSString, ALPTipView, UITableView, NSMutableArray;
@protocol ALPContentEditControlerDelegate, ALPWeiboFriendsControllerDelegate;

@interface ALPWeiboFriendsController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate> {
@private
	id<ALPContentEditControlerDelegate> _delegate;
	id<ALPWeiboFriendsControllerDelegate> _friendsDelegate;
	MJRefreshFooterView* _footView;
	UITableView* _tableView;
	NSMutableArray* _dataArr;
	NSString* _cursor;
	UISearchBar* _searchBar;
	ALPTipView* _tipView;
}
@property(retain, nonatomic) ALPTipView* tipView;
@property(retain, nonatomic) UISearchBar* searchBar;
@property(retain, nonatomic) NSString* cursor;
@property(retain, nonatomic) NSMutableArray* dataArr;
@property(retain, nonatomic) UITableView* tableView;
@property(retain, nonatomic) MJRefreshFooterView* footView;
@property(assign, nonatomic) __weak id<ALPWeiboFriendsControllerDelegate> friendsDelegate;
@property(assign, nonatomic) __weak id<ALPContentEditControlerDelegate> delegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)didReceiveMemoryWarning;
-(void)back:(BOOL)back;
-(void)back;
-(void)onResponseFriends:(id)friends;
-(void)onResponseSearch:(id)search;
-(void)onResponseFriendsCancel;
-(void)finishRequest;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)viewDidLoad;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(void)dealloc;
@end

