/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIGestureRecognizerDelegate.h"
#import "BLLWTableViewController.h"
#import "BLLWBarDelegate.h"

@class NSString, BLLWBar, BLLWTitleView;

@interface BLLWContactListViewController : BLLWTableViewController <BLLWBarDelegate, UIGestureRecognizerDelegate> {
@private
	BOOL _showSettingButton;
	BLLWBar* menuBar;
	BLLWTitleView* titleView;
	NSString* _publicId;
	NSString* _loginId;
	NSString* _realName;
	NSString* _displayName;
	NSString* _avatar;
}
@property(assign, nonatomic) BOOL showSettingButton;
@property(retain, nonatomic) NSString* avatar;
@property(retain, nonatomic) NSString* displayName;
@property(retain, nonatomic) NSString* realName;
@property(retain, nonatomic) NSString* loginId;
@property(retain, nonatomic) NSString* publicId;
@property(retain, nonatomic) BLLWTitleView* titleView;
@property(retain, nonatomic) BLLWBar* menuBar;
-(void).cxx_destruct;
-(void)followSetting;
-(BOOL)getFollowData:(id)data;
-(void)prepareSetting:(id)setting;
-(void)navigationButton:(BOOL)button;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)gotoPage:(int)page action:(id)action menuType:(id)type title:(id)title;
-(float)tableView:(id)view heightForNoDataCell:(id)noDataCell;
-(BOOL)isSucceed:(id)succeed;
-(id)tempBaseInfoDictionary;
-(void)setPageTitle:(id)title;
-(BOOL)isShowMenuBar:(id)bar;
-(void)updateData:(id)data;
-(BOOL)dataChangeNotify:(id)notify;
-(void)execResultCode:(id)code;
-(void)defaultExceptionAction:(id)action;
-(void)queryInfo;
-(void)loadData;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)cancelAllTask;
-(void)dealloc;
-(void)initUI;
-(id)initWithParaInfo:(id)paraInfo;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
