//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCitySafePayUtilityDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MBProgressHUD, NSMutableDictionary, NSString, TBCityKeyboardDoneHandle, TBCityMenuStoreInfoView, TBCityPayReserveService, TBCitySkuMutiSelectControl, UIButton, UIImageView, UITableView, UITextField, UIView;

@interface TBCityPayReservationsViewController : TBCityViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, UIGestureRecognizerDelegate, UIActionSheetDelegate, TBCitySafePayUtilityDelegate>
{
    NSMutableDictionary *_query;
    UITextField *_nameField;
    UITextField *_phoneField;
    UITextField *_remarkField;
    TBCitySkuMutiSelectControl *_selectControl;
    UITableView *_tableView;
    BOOL _notHideKeyBoard;
    struct CGPoint _startPt;
    UIImageView *_titleArrowIcon;
    UIView *_fullScreenView;
    BOOL _openPreview;
    TBCityMenuStoreInfoView *_storeInfoView;
    TBCityKeyboardDoneHandle *_keyBoardHandle;
    NSString *_remark;
    MBProgressHUD *_progressHUD;
    TBCityPayReserveService *_service;
    UIButton *_payButton;
    NSString *_orderId;
}

@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) TBCityPayReserveService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)phoneFieldCancel;
- (void)confingCell:(id)arg1 row:(int)arg2;
- (id)getDateString;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealWithOffset:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)orderAction:(id)arg1;
- (BOOL)isPhoneNumberCorrect;
- (void)doPayFinishAction:(int)arg1;
- (void)doOrderAction:(id)arg1 phone:(id)arg2;
- (void)hideProgressHUD;
- (void)showProgressHUD:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)createFootView;
- (id)createView:(id)arg1 placeHolder:(id)arg2;
- (id)createReservationsView:(id)arg1 describe:(id)arg2;
- (void)setupToolbarItems;
- (id)bottomItem;
- (void)leaveViewControllerDoAction;
- (void)dealloc;
- (void)viewDidUnload;
- (void)clear;
- (void)tapGuesture:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLoad;
- (void)backAction;
- (void)openPreviewTable;
- (void)closeFullScreenView;
- (void)doMap;
- (void)doCallPhone;
- (void)addStoreInfoEvens;
- (void)doStoreInfo;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)openStoreInfoView;
- (void)setMenuTitle:(id)arg1;
- (void)doLoginCancel;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

