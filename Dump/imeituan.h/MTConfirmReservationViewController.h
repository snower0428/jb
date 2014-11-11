//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class MTAutoLinearLayoutScrollView, MTPaymentController, MTPaymentMethodPickerViewController, MTPurchaseControlCell, MTPurchaseLabelCell, MTPurchaseTextViewCell, MTReserveService, SAKTimer, UILabel, UIView;

@interface MTConfirmReservationViewController : MTBaseViewController
{
    MTAutoLinearLayoutScrollView *_contentView;
    MTPurchaseTextViewCell *_inputMobileCell;
    MTPaymentController *_paymentViewController;
    MTPaymentMethodPickerViewController *_methodPickerViewController;
    SAKTimer *_timer;
    UILabel *_timeLabel;
    UILabel *_headLabel;
    float _needToPay;
    float _voucherMoney;
    MTPurchaseLabelCell *_needToPayCell;
    MTPurchaseControlCell *_voucherControlCell;
    UIView *_inputMobileTipsView;
    BOOL _isVirgin;
    MTPurchaseControlCell *_bindMobileCell;
    MTReserveService *_reservationService;
}

@property(retain, nonatomic) MTReserveService *reservationService; // @synthesize reservationService=_reservationService;
@property(retain, nonatomic) MTPurchaseControlCell *bindMobileCell; // @synthesize bindMobileCell=_bindMobileCell;
- (void).cxx_destruct;
- (void)showReservationResult;
- (void)resetPaymentController;
- (void)pay_;
- (void)didClickPayButton:(id)arg1;
- (void)hidePayMethodPicker;
- (void)showPayMethodPicker;
- (void)didClickVoucherCell:(id)arg1;
- (void)updateUserInfo;
- (void)bindPhone_;
- (void)didClickMobileCell:(id)arg1;
- (void)setupPaymentMethodCells;
- (void)setupPhoneCell;
- (void)setupPaymentInfoCells;
- (void)setupReservationInfoCells;
- (void)orderTimeout;
- (void)timerTick_;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupTimerHeader;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithReservationService:(id)arg1;

@end

