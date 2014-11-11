/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Portal-Structs.h"
#import "APContactControllerDelegate.h"
#import "APView.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class NSArray, NSString, UIImageView, UIButton, UITableView, UITextField, NSMutableArray;

@interface MutipleGatheringView : APView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, APContactControllerDelegate> {
	UITableView* _tableView;
	UIImageView* _topImageView;
	UIButton* _editButton;
	BOOL _isSelfIncluded;
	NSMutableArray* _peopleInfo;
	NSString* _amount;
	double _restAmount;
	NSString* _reason;
	int _isFilledTag;
	BOOL _isKeyboardShow;
	BOOL _isEditing;
	UIButton* _selectAccountButton;
	UITextField* _currentTextField;
	unsigned _currentCellRow;
}
@property(readonly, assign, nonatomic) NSArray* peoples;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(assign, nonatomic) int numberOfPeople;
@property(assign, nonatomic) BOOL isContainSelf;
@property(retain, nonatomic) NSString* reason;
@property(retain, nonatomic) NSString* amount;
-(BOOL)textFieldShouldClear:(id)textField;
-(BOOL)textFieldShouldReturn:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)_scrollToRowAtIndexPath:(id)indexPath;
-(void)APContactControllerDidClickCancelButton;
-(void)APContactController:(id)controller didFinishChoose:(id)choose;
-(void)postUIRelayout;
-(BOOL)_addAccountsWithSelectAccounts:(id)selectAccounts;
-(BOOL)_removeUselessAccountWithDeselectAccounts:(id)deselectAccounts;
-(void)stretchField:(id)field didBeTouchedFromControl:(id)control;
-(void)_nextRunloopChangeEditing;
-(void)deleteCellWithUserData:(id)userData;
-(void)updateFrame;
-(void)APNavigationBarDidClickBackButton;
-(id)tableView:(id)view titleForDeleteConfirmationButtonForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)_nextRunloopUpdate;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)_generateAccountPresentationWithPerson:(id)person;
-(void)_addButtonDidclicked:(id)didclicked;
-(void)selectAccountButtonClicked:(id)clicked;
-(void)_submitButtonClicked:(id)clicked;
-(void)_userTouchUpFromSlider:(id)slider;
-(double)_adjustSliderValue:(double)value;
-(void)_sliderValueDidChanged:(id)_sliderValue;
-(void)_cellLockedButtonClicked:(id)clicked;
-(void)_lockedButtonClickedAtIndex:(id)index;
-(BOOL)resignFirstResponder;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)dealloc;
-(void)createSubviews;
-(void)relayoutSubviews;
-(void)editButtonClick:(id)click;
-(void)createEditButton;
-(id)initWithNode:(id)node;
-(id)initWithFrame:(CGRect)frame amount:(id)amount peopleNumber:(int)number isIncludeSelf:(BOOL)aSelf;
-(id)currentNavigationIdentifier;
-(id)currentIdentifier;
-(void)_checkAllStateWithFlag:(BOOL)flag;
-(void)_calculateRestAmount;
-(void)_reCalculateEveryoneWithoutEdited:(id)edited;
-(void)_presentContactViewControllerFromRow:(int)row multipleSelectEnabled:(BOOL)enabled;
-(id)_buildContactsArray;
-(BOOL)_physicalCheckIsAccountRepeat;
-(id)_peopleInfoArrayPresentation;
-(id)_dictionaryFromPersonNode:(id)personNode atIndex:(unsigned)index;
-(void)_reCalculateAmount;
-(void)_reloadNextButtonCell;
-(BOOL)_checkNextButtonValidate;
-(void)_nextButton:(id)button ShouldEnabled:(BOOL);
-(int)_tableViewRowNumber;
-(double)_cellDisplayAmount;
-(void)_internalNextRunloopTableViewAdjust:(id)adjust;
@end
