/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "AssetsBaseController.h"
#import "Portal-Structs.h"
#import "SafePayDelegate.h"
#import "UITableViewDataSource.h"

@class NSString, ALPTableView, ALPButton, ACPAccountInfoData, ALPTextFieldCell;

@interface ACPPayViewController : AssetsBaseController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, SafePayDelegate> {
@private
	BOOL _settled;
	ALPTableView* _tableView;
	ALPTextFieldCell* _transferInCell;
	ALPButton* _confirmBtn;
	ACPAccountInfoData* _data;
	NSString* _billNoFromLastPage;
}
@property(assign, nonatomic) BOOL settled;
@property(retain, nonatomic) NSString* billNoFromLastPage;
@property(retain, nonatomic) ACPAccountInfoData* data;
@property(retain, nonatomic) ALPButton* confirmBtn;
@property(retain, nonatomic) ALPTextFieldCell* transferInCell;
@property(retain, nonatomic) ALPTableView* tableView;
-(void).cxx_destruct;
-(void)safepayDidFinishWithResult:(id)safepay;
-(void)setConfirmBtnEnabled;
-(void)textFieldDidChange:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)restoreTableView;
-(void)keyboardWillHide:(id)keyboard;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(BOOL)textFieldShouldClear:(id)textField;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)initOPSectionCell:(id)cell;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInTableView:(id)tableView;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)toPay:(float)pay;
-(void)confirmClicked;
-(void)gotoHome;
-(void)back;
-(void)clickBackButton;
-(void)initTableView;
-(void)queryInfo;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)updateData:(id)data;
-(void)viewDidLoad;
-(void)didReceiveMemoryWarning;
-(id)initWithSettled:(BOOL)settled sources:(id)sources billNoFromLastPage:(id)lastPage;
-(id)initWithSources:(id)sources billNoFromLastPage:(id)lastPage;
-(id)initWithSources:(id)sources;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
