/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APStretchFieldDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "Portal-Structs.h"
#import "APContactControllerDelegate.h"
#import "APSubstituteBaseViewController.h"

@class NSArray, APLabel, UITextView, APTextField, NSString, APButton, UIButton, UITableView, APSubmitView, UIControl, NSMutableArray, UISwitch, APStretchField;

@interface APSubstituteViewController : APSubstituteBaseViewController <ABPeoplePickerNavigationControllerDelegate, APStretchFieldDelegate, APContactControllerDelegate> {
	NSArray* listItemArray;
	APSubmitView* submitView;
	APTextField* selectedUserTextField;
	UITextView* inputTextField;
	APLabel* userInfoLb;
	APButton* smsButton;
	APLabel* substituteRangeInfoLb;
	UIButton* aliPayUserButton;
	UISwitch* smsSwich;
	short _lastAppearTag;
	APStretchField* _stretchField;
	UIControl* _currentTriggerControl;
	UITableView* _currentTableView;
	NSMutableArray* _contactList;
	NSMutableArray* _recentContactList;
	NSArray* _targetDataArray;
	NSString* selectedUserFromAddressList;
}
@property(retain, nonatomic) APLabel* substituteRangeInfoLb;
@property(retain, nonatomic) UIButton* aliPayUserButton;
@property(retain, nonatomic) UISwitch* smsSwich;
@property(retain, nonatomic) APButton* smsButton;
@property(retain, nonatomic) APLabel* userInfoLb;
@property(retain, nonatomic) UITextView* inputTextField;
@property(retain, nonatomic) APTextField* selectedUserTextField;
@property(retain, nonatomic) APSubmitView* submitView;
@property(retain, nonatomic) NSArray* listItemArray;
@property(retain, nonatomic) NSString* selectedUserFromAddressList;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(void)dismissPop;
-(void)myNotifycation_TextViewCellCharDidChange:(id)myNotifycation_TextViewCellChar;
-(void)preP2POperation;
-(void)doAction:(int)action;
-(void)cancelText:(id)text;
-(void)btnFinishClick:(id)click;
-(void)myNotifycation_KeyboardWillHideFromAPTextViewCell:(id)myNotifycation_Keyboard;
-(void)myNotifycation_KeyboardWillShowFromAPTextViewCell:(id)myNotifycation_Keyboard;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)APContactControllerDidClickCancelButton;
-(void)APContactController:(id)controller didFinishChoose:(id)choose;
-(void)actionBtnClick:(id)click;
-(void)myNotifycation_PaymentSubmit:(id)submit;
-(BOOL)isTopViewController;
-(void)enableSubmitView:(id)view;
-(void)queryContactsOpertionDidFinsih:(id)queryContactsOpertion;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)stretchField:(id)field didCollapseTableView:(id)view fromControl:(id)control;
-(void)stretchField:(id)field willCollapseTableView:(id)view fromControl:(id)control;
-(void)stretchField:(id)field didExpandTableView:(id)view fromControl:(id)control;
-(void)stretchField:(id)field willExpandTableView:(id)view fromControl:(id)control;
-(void)stretchField:(id)field didBeTouchedFromControl:(id)control;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_expandField:(id)field;
-(void)_collapseLayoutControlsWithOffset:(float)offset forStretchField:(id)stretchField;
-(void)_expandLayoutControlsWithOffset:(float)offset forStretchField:(id)stretchField;
-(void)_storeContactGroup:(id)group;
-(void)_reloadTableViewWithFilter:(id)filter;
-(id)_filterDataUsingPrefix:(id)prefix;
-(void)_fetchAlipayContactOperation;
-(void)_rebuildContactList;
-(void)_rebuildContactErrorList;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setupTableView;
-(void)didClickTitleBar:(id)bar;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)setupUI;
-(void)releaseNotify;
-(void)setupNotify;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
-(BOOL)resignFirstResponder;
-(void)dealloc;
@end
