/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import "APView.h"
#import "UITableViewDataSource.h"

@class UIView, NSMutableArray, UILabel, UITableView, NSString;

@interface PaymentRecordView : APView <UITableViewDelegate, UITableViewDataSource> {
	UITableView* _recordTV;
	UIView* _headerView;
	UILabel* _tipLabel;
@private
	NSMutableArray* _recordInfoList;
	NSString* _searchKey;
	id _delegate;
}
@property(assign, nonatomic) id delegate;
@property(retain, nonatomic) NSString* searchKey;
@property(retain, nonatomic) NSMutableArray* recordInfoList;
-(void)updateViewWithSearchResult:(id)searchResult searchKey:(id)key;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)setupTableView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
