/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "PPBaseTableViewController.h"

@class NSString, PPSearchRPC;

@interface PPSearchViewController : PPBaseTableViewController {
@private
	BOOL _ppSearchFlags;
	NSString* _tempPlace;
	NSString* _tempOfficialType;
	NSString* _tempSecondOfficialType;
	NSString* _tempTitle;
	PPSearchRPC* _loadRPC;
	int _selectRow;
}
@property(assign, nonatomic) BOOL ppSearchFlags;
@property(retain, nonatomic) PPSearchRPC* loadRPC;
@property(assign, nonatomic) int selectRow;
@property(retain, nonatomic) NSString* tempTitle;
@property(retain, nonatomic) NSString* tempSecondOfficialType;
@property(retain, nonatomic) NSString* tempOfficialType;
@property(retain, nonatomic) NSString* tempPlace;
-(void).cxx_destruct;
-(void)paningGestureReceive:(id)receive;
-(id)secondOfficialType;
-(id)officialType;
-(Class)searchCellClass;
-(Class)cellClass;
-(id)placeHoldString;
-(void)dataUpdateSecondOfficialTypeInfo:(id)info totalPageNum:(int)num officialType:(id)type;
-(void)getContentDataWithSecondOfficialType:(id)secondOfficialType;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewDidAppear:(BOOL)view;
-(void)toDetailView:(id)detailView;
-(id)defaultImageFromFollowType:(id)followType;
-(void)configureCell:(id)cell withData:(id)data;
-(void)reNetWork;
-(void)doNotifycation_NetWorkException;
-(void)setNotify;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)view;
-(void)goBack;
-(void)viewDidLoad;
-(void)updateTableListView;
-(id)getNameFromIndex:(int)index;
-(void)initWithIndex:(int)index;
-(id)init:(int)init bEbpp:(BOOL)ebpp;
-(void)dealloc;
-(id)init;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end

