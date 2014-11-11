//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBSDKServerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSMutableArray, TBAreaEX, TMShippingAddress, UIPickerView, UITableView, UITextField, UITextView, UIToolbar, UIView;

@interface TMAddressDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UITextFieldDelegate, UITextViewDelegate, TBSDKServerDelegate>
{
    BOOL _isKeyboardShowed;
    UITextField *_nowInputField;
    UITextField *_nameTextField;
    UITextField *_mobileTextField;
    UITextField *_postTextFiled;
    UITextField *_areaTextField;
    UITextView *_detailTextView;
    UIToolbar *_postToolbar;
    UIPickerView *_addPickerView;
    TBAreaEX *_currentProvinceArea;
    TBAreaEX *_currentCityArea;
    TBAreaEX *_currentSectionArea;
    id <TMAddressDetailViewControllerDelegate> _delegate;
    UITableView *_tableView;
    TMShippingAddress *_shippingAddress;
    TMShippingAddress *_sourceAddress;
    int _type;
    UIView *_footerView;
    NSMutableArray *_areaList;
}

@property(retain, nonatomic) NSMutableArray *areaList; // @synthesize areaList=_areaList;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) TMShippingAddress *sourceAddress; // @synthesize sourceAddress=_sourceAddress;
@property(retain, nonatomic) TMShippingAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id <TMAddressDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)isHOTF:(id)arg1;
- (id)getDivisionCode;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerViewRowCountOf:(int)arg1 empty:(char *)arg2;
- (void)getProvinceIndex:(id)arg1 province:(int *)arg2 city:(int *)arg3 section:(int *)arg4;
- (void)actionPostDone:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)detailEditCell4Table:(id)arg1;
- (id)editCell4Table:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)deleteAddressRequestFail:(id)arg1;
- (void)deleteAddressRequestSuccese:(id)arg1;
- (void)requestDeleteAddress:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addAddressRequestFail:(id)arg1;
- (void)addAddressRequestSuccess:(id)arg1;
- (void)requestAddAddress:(id)arg1;
- (BOOL)checkLimitInfo;
- (void)handleEditFail;
- (void)editAddressRequestFail:(id)arg1;
- (void)editAddressRequestSuccess:(id)arg1;
- (void)requestEditAddress:(id)arg1;
- (void)actionAddNewAddress:(id)arg1;
- (void)actionEditDone:(id)arg1;
- (void)actionEditAddress:(id)arg1;
- (void)actionDelete:(id)arg1;
- (void)MkeyboardWillHidden:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)MkeyboardWillShow:(id)arg1;
- (void)saveSource:(id)arg1;
- (void)actionBack:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithType:(int)arg1;
- (id)init;

@end
