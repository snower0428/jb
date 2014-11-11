//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MainVC.h"

#import "UIAlertViewDelegate.h"
#import "UICheckBoxDelegate.h"
#import "UITextFieldDelegate.h"

@class BankInfo, NSMutableArray, NSString, UIButton, UITextField, UIView;

@interface HomeVC : MainVC <UITextFieldDelegate, UIAlertViewDelegate, UICheckBoxDelegate>
{
    float height_content;
    UITextField *tfield_card;
    UITextField *tfield_validate;
    UITextField *tfield_cvn2;
    UITextField *tfield_pwd;
    UITextField *tfield_phone;
    UITextField *tfield_verCode;
    UIButton *btn_getSms;
    UIView *cardView;
    BOOL isHistory;
    BOOL isSaveCardInfo;
    UIView *payInfoView;
    UIButton *submitBtn;
    NSMutableArray *eventList;
    BankInfo *hisBankInfo;
    NSString *warnEle;
    UIView *promptView;
    NSString *inBankName;
    NSString *inCardType;
    NSMutableArray *_parameter;
}

@property(retain) NSMutableArray *parameter; // @synthesize parameter=_parameter;
@property(retain) NSString *inCardType; // @synthesize inCardType;
@property(retain) NSString *inBankName; // @synthesize inBankName;
@property(retain) UIView *promptView; // @synthesize promptView;
@property(retain) NSString *warnEle; // @synthesize warnEle;
@property(retain) BankInfo *hisBankInfo; // @synthesize hisBankInfo;
@property(retain) NSMutableArray *eventList; // @synthesize eventList;
@property(retain) UIButton *submitBtn; // @synthesize submitBtn;
@property(retain) UIView *payInfoView; // @synthesize payInfoView;
- (void)sendTel;
- (void)requestTimeout:(id)arg1;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1 result:(id)arg2;
- (void)actConfirm;
- (void)actSms;
- (void)actInit;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animationTransition:(id)arg1 isHidden:(BOOL)arg2 in:(id)arg3;
- (void)initAnimatioView;
- (void)moveViewWithTag:(int)arg1 addY:(float)arg2;
- (void)initPromptWitnFrame:(struct CGRect)arg1 text:(id)arg2;
- (void)moveSubmitView:(float)arg1;
- (void)layoutElementView:(id)arg1 addY:(float)arg2;
- (id)getPromptText:(id)arg1;
- (void)clearPayInfo;
- (void)buttonClicked:(id)arg1;
- (id)checkInput;
- (BOOL)checkValidate:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)onChanged:(id)arg1 selected:(_Bool)arg2;
- (void)addPwd:(id)arg1 line:(id)arg2;
- (void)addCvn2:(id)arg1 line:(id)arg2;
- (void)addValidate:(id)arg1 line:(id)arg2;
- (void)addCardID:(id)arg1 line:(id)arg2;
- (void)addSms:(id)arg1 line:(id)arg2;
- (struct CGSize)getStringWidth:(id)arg1 font:(id)arg2 forHeight:(float)arg3;
- (void)loadSubmitView;
- (void)loadPayInfoView;
- (void)loadOrderInfoView;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadSubviews;
- (void)loadView;
- (id)initWithOrder:(id)arg1 cardType:(id)arg2 bankName:(id)arg3;

@end
