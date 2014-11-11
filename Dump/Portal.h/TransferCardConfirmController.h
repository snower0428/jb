/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "APViewController2.h"
#import "Portal-Structs.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class TransferCardModelController, UIScrollView, NSString, CreateTransferToCardOperation, UILabel, UIButton, _ConfirmBankCell, UITextField, UISwitch;

@interface TransferCardConfirmController : APViewController2 <UIScrollViewDelegate, UITextFieldDelegate, UIGestureRecognizerDelegate, ABPeoplePickerNavigationControllerDelegate> {
	TransferCardModelController* _modelController;
@private
	UIScrollView* _containerView;
	_ConfirmBankCell* _confirmCell;
	UILabel* _amountLabel;
	UILabel* _serviceAmount;
	UILabel* _serviceRole;
	UITextField* _postScriptTextField;
	UISwitch* _switch;
	UITextField* _mobileNumber;
	UIButton* _contactButton;
	UIButton* _nextButton;
	CGPoint _previousContentOffset;
	float _keyboardHeight;
	CreateTransferToCardOperation* _transferToCardOperation;
	NSString* _sourceId;
	NSString* _promotion;
	NSString* _agreementId;
	NSString* _publicId;
}
@property(copy, nonatomic) NSString* publicId;
@property(copy, nonatomic) NSString* agreementId;
@property(copy, nonatomic) NSString* promotion;
@property(copy, nonatomic) NSString* sourceId;
@property(readonly, assign, nonatomic) TransferCardModelController* modelController;
-(void)textFieldDidEndEditing:(id)textField;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(void)_safepayDidFinishPayment:(id)_safepay;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(void)back;
-(void)confirmTransfer;
-(void)_confirm;
-(BOOL)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
-(void)contactButtonDidClicked:(id)contactButton;
-(void)feeRoleBtnClick:(id)click;
-(void)protocolBtnClick:(id)click;
-(void)_showProtocolWithURLString:(id)urlstring title:(id)title;
-(void)singleTapGestureCaptured:(id)captured;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)_setContainerViewOffset:(id)offset;
-(void)_switchValueChanged;
-(void)didReceiveMemoryWarning;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(id)initWithDataModelController:(id)dataModelController;
-(void)_createTransferOperationDidFinish:(id)_createTransferOperation;
-(void)_createTransferToCardOperation;
-(void)_resignNotification;
-(void)_setupNotification;
-(void)_createLayout;
-(void)_layoutService;
-(void)_layoutMobileAnimated:(BOOL)animated;
-(id)_titleTextFieldWithFrame:(CGRect)frame textValue:(id)value;
-(void)_applyModelInfo;
-(void)_applyServiceFee;
-(void)dealloc;
@end
