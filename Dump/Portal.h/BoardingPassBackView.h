/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "Portal-Structs.h"
#import "UIActionSheetDelegate.h"
#import "ALPPassBackView.h"
#import "UITableViewDataSource.h"

@class ALPFieldDef, NSArray, UITableView, KABAOPRODPassInfo;

@interface BoardingPassBackView : ALPPassBackView <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {
@private
	BOOL _hasAppInfo;
	KABAOPRODPassInfo* passInfo;
	NSArray* backFields;
	UITableView* _detailListsView;
	ALPFieldDef* _curField;
}
@property(retain, nonatomic) NSArray* backFields;
@property(retain, nonatomic) ALPFieldDef* curField;
@property(retain, nonatomic) UITableView* detailListsView;
@property(retain, nonatomic) KABAOPRODPassInfo* passInfo;
-(void).cxx_destruct;
-(void)reloadData:(id)data;
-(float)dynamicHeight:(int)height label:(id)label value:(id)value;
-(void)configureTableViewCell:(id)cell cell:(id)cell2;
-(void)actionSheetCancel:(id)cancel;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)handleTapAction;
-(id)buildToNormalCell:(id)normalCell type:(id)type;
-(id)buildTableViewCell:(id)cell type:(id)type;
-(int)cellFieldType:(id)type;
-(id)cellType:(id)type;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didDeselectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)getNumberOfRowsInSection:(int)section;
-(float)getCellHeightAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(int)fieldsRow:(id)row;
-(void)refreshTableView;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(void)commonInit:(CGRect)init;
@end
