/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PPBaseTableViewController.h"

@class NSString, PPSearchRPC;

@interface PPAccountListViewController : PPBaseTableViewController {
@private
	PPSearchRPC* _loadRPC;
	NSString* _loadSecondOfficialType;
	NSString* _loadOfficialTYpe;
	int _selectRow;
}
@property(assign, nonatomic) int selectRow;
@property(retain, nonatomic) NSString* loadOfficialTYpe;
@property(retain, nonatomic) NSString* loadSecondOfficialType;
@property(retain, nonatomic) PPSearchRPC* loadRPC;
-(void).cxx_destruct;
-(void)paningGestureReceive:(id)receive;
-(void)didReceiveMemoryWarning;
-(id)secondOfficialType;
-(id)officialType;
-(Class)cellClass;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)viewDidAppear:(BOOL)view;
-(void)toDetailView:(id)detailView;
-(id)defaultImageFromFollowType:(id)followType;
-(void)configureCell:(id)cell withData:(id)data;
-(void)updateTableListView;
-(void)goBack;
-(void)viewDidLoad;
-(id)init:(id)init placeHold:(id)hold secondOfficialType:(id)type;
-(id)init:(id)init placeHold:(id)hold arrayData:(id)data officialType:(id)type secondOfficialType:(id)type5 totalPageNum:(int)num;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
