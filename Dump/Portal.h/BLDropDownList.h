/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import "UITableViewDataSource.h"
#import "BLView.h"

@class NSMutableArray, UIButton, UITableView;
@protocol BLDropDownListDelegate;

@interface BLDropDownList : BLView <UITableViewDataSource, UITableViewDelegate> {
	id<BLDropDownListDelegate> delegate;
	int selectedIndex;
@private
	BOOL isClick;
	BOOL isWorking;
	BOOL _isDisplay;
	NSMutableArray* listArray;
	UITableView* listView;
	UIButton* pressBtn;
	UIButton* arrowBtn;
	CGRect viewRect;
}
@property(assign, nonatomic) BOOL isWorking;
@property(retain, nonatomic) UIButton* arrowBtn;
@property(assign, nonatomic) CGRect viewRect;
@property(retain, nonatomic) UIButton* pressBtn;
@property(retain, nonatomic) UITableView* listView;
@property(retain, nonatomic) NSMutableArray* listArray;
@property(assign, nonatomic) BOOL isClick;
@property(assign, nonatomic) int selectedIndex;
@property(assign, nonatomic) BOOL isDisplay;
@property(assign, nonatomic) id<BLDropDownListDelegate> delegate;
-(void).cxx_destruct;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)update;
-(void)enable:(BOOL)enable;
-(int)focusIndexWithTradeType:(id)tradeType;
-(int)focusIndexWithTitle:(id)title;
-(void)updateList;
-(void)updateTitle;
-(void)setCurrentTitle:(id)title;
-(id)valueWithIndex:(int)index;
-(id)currentTitle;
-(void)display:(BOOL)display animated:(BOOL)animated;
-(void)reset;
-(void)closeDropMenuList:(BOOL)list;
-(int)retunMenuHeight;
-(void)layout;
-(id)itemWithIndex:(int)index;
-(void)removeAll;
-(void)removeItemWithIndex:(int)index;
-(void)addItem:(id)item title:(id)title;
-(void)pressBtnOnClick:(id)click;
-(BOOL)isOpen;
-(void)releaseUI;
-(void)initUI;
-(id)initWithFrame:(CGRect)frame;
@end

