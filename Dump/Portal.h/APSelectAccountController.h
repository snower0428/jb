/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APViewController2.h"
#import "huoyanViewControllerDelegate.h"
#import "Portal-Structs.h"
#import "APContactControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, UIView, APTokenField, NSString, UIButton, UITableView, NSMutableArray;
@protocol APSelectAccountControllerDelegate;

@interface APSelectAccountController : APViewController2 <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, huoyanViewControllerDelegate, APContactControllerDelegate> {
	APTokenField* _textField;
	UIButton* _cancelButton;
	UIButton* _contentLeftButton;
	UIButton* _contentRightButton;
	UIView* _contentView;
	UITableView* _dataTableView;
	UIView* _backgroundView;
	NSMutableArray* _dataArray;
	NSArray* _targetDataArray;
	NSString* _sourceAccount;
	id<APSelectAccountControllerDelegate> _delegate;
}
@property(retain, nonatomic) NSString* sourceAccount;
@property(readonly, assign, nonatomic) APTokenField* textField;
@property(assign, nonatomic) id<APSelectAccountControllerDelegate> delegate;
-(void)APContactControllerDidClickCancelButton;
-(void)cancelDidClicked;
-(void)APContactController:(id)controller didFinishChoose:(id)choose;
-(void)_internalPopViewControllerAnimated:(id)animated;
-(void)rightToolbarButtonClicked;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)resignFirstResponder;
-(void)keyboardWillShow:(id)keyboard;
-(void)keyboardWillHide:(id)keyboard;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)_retriveRecentHistory;
-(void)alipayContactDidClicked;
-(void)barcodeDidClicked;
-(void)_showContactViewController;
-(void)_showBarcodeScanner;
-(void)bindData;
-(void)viewDidLoad;
-(id)init;
-(void)_extendTableViewAndContentAnimated:(BOOL)animated;
-(void)_pullBackTableViewAndContentWithOffset:(float)offset animated:(BOOL)animated;
-(void)_reloadTableViewWithFilter:(id)filter;
-(id)_filterDataUsingPrefix:(id)prefix;
-(void)_rebuildContactList;
-(void)dealloc;
@end
