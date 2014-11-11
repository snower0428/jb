//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "UITextFieldDelegate.h"
#import "UIWebViewDelegate.h"

@class MTOPRequest, NSString, TBCoinInfoView, TBRechargeHistoryView, TBRechargeInfoView, TBRechargePhoneNumberInputView, UIButton, UILabel;

@interface PhoneRechargeView : UIControl <UITextFieldDelegate, UIWebViewDelegate>
{
    UIButton *_currentSelectedPad;
    BOOL _is_OK;
    BOOL _no_network;
    NSString *currentUserID;
    BOOL _is_toLoginByTaojinbi;
    UILabel *_activityDesc;
    TBRechargePhoneNumberInputView *_phoneNumberInputView;
    TBRechargeInfoView *_infoView;
    TBRechargeHistoryView *_historyView;
    TBCoinInfoView *_coinInfoView;
    UIButton *_rechargeButton;
    UIButton *_olduserButton;
    MTOPRequest *_queryEcard;
    MTOPRequest *_createOrderReq;
    MTOPRequest *_getUserAlipayPhoneReq;
    NSString *_itemID;
    NSString *_actItemID;
}

@property(retain, nonatomic) NSString *actItemID; // @synthesize actItemID=_actItemID;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property(retain, nonatomic) MTOPRequest *getUserAlipayPhoneReq; // @synthesize getUserAlipayPhoneReq=_getUserAlipayPhoneReq;
@property(retain, nonatomic) MTOPRequest *createOrderReq; // @synthesize createOrderReq=_createOrderReq;
@property(retain, nonatomic) MTOPRequest *queryEcard; // @synthesize queryEcard=_queryEcard;
@property(retain, nonatomic) UIButton *olduserButton; // @synthesize olduserButton=_olduserButton;
@property(retain, nonatomic) UIButton *rechargeButton; // @synthesize rechargeButton=_rechargeButton;
@property(retain, nonatomic) TBCoinInfoView *coinInfoView; // @synthesize coinInfoView=_coinInfoView;
@property(retain, nonatomic) TBRechargeHistoryView *historyView; // @synthesize historyView=_historyView;
@property(retain, nonatomic) TBRechargeInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) TBRechargePhoneNumberInputView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
@property(readonly) UILabel *activityDesc; // @synthesize activityDesc=_activityDesc;
- (void).cxx_destruct;
- (void)onSelectHistoryItemWithPhoneNumber:(id)arg1 andName:(id)arg2;
- (void)clickOlduserButton:(id)arg1;
- (void)clickRechargeButton:(id)arg1;
- (void)selectPadAction:(id)arg1;
- (void)addressBookAction:(id)arg1;
- (void)edittingPhoneNumber:(id)arg1;
- (void)errorInput:(id)arg1;
- (void)completeInput:(id)arg1;
- (void)endInputPhoneNumber:(id)arg1;
- (void)beginInputPhoneNumber:(id)arg1;
- (void)onClickCoin:(id)arg1;
- (void)onSelectCoin:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)unregNotification;
- (void)regNotification;
- (void)setDefaultLayout;
- (void)setOlduserLayout;
- (void)processAct:(id)arg1;
- (void)createOrder;
- (void)showLoginWithBlock:(CDUnknownBlockType)arg1;
- (void)firstQuery;
- (void)cancelRequest;
- (void)setupDefaultPhone;
- (void)getMyPhoneNumber;
- (void)getEcode:(id)arg1;
- (void)setCoinIsLogin:(BOOL)arg1;
- (void)setupView;
- (void)getUserAlipayPhoneRequestDidFinish:(id)arg1;
- (void)getUserAlipayPhoneRequestDidLoadFailed:(id)arg1;
- (void)requestDidFinish:(id)arg1;
- (void)requestDidLoadFailed:(id)arg1;
- (void)createOrderRequestDidFinish:(id)arg1;
- (void)createOrderRequestNeedLogin:(id)arg1;
- (void)createOrderRequestDidLoadFailed:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)setupSelectPad;
- (void)setupAddressBookButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

