//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "UIActionSheetDelegate.h"

@class NSString, TBBarButtonItem, TBCityDDOrderDetailView, TBCityDDOrderItem, TBCityMyDDOrderDetailService, TBCityPayConfirmService, UIButton, UILabel;

@interface TBCityDDOrderDetailViewController : TBCityViewController <UIActionSheetDelegate>
{
    BOOL _isLoadingData;
    BOOL _ifScan;
    BOOL _ifFirstMenuConfirm;
    NSString *_orderId;
    TBCityDDOrderDetailView *_orderView;
    UIButton *_navigationBtn;
    UILabel *_navigationStatusLabel;
    TBCityMyDDOrderDetailService *_ddOrderDetailService;
    TBCityDDOrderItem *_orderData;
    int _type;
    TBBarButtonItem *_btnScanCode;
    TBBarButtonItem *_btnModify;
    TBBarButtonItem *_btnGetOrder;
    TBBarButtonItem *_btnAddMenu;
    TBBarButtonItem *_btnReviewOrder;
    TBBarButtonItem *_btnMenuConfirm;
    TBBarButtonItem *_btnPayOrder;
    TBCityPayConfirmService *_confirmService;
}

@property(retain, nonatomic) TBCityPayConfirmService *confirmService; // @synthesize confirmService=_confirmService;
@property(retain, nonatomic) TBBarButtonItem *btnPayOrder; // @synthesize btnPayOrder=_btnPayOrder;
@property(retain, nonatomic) TBBarButtonItem *btnMenuConfirm; // @synthesize btnMenuConfirm=_btnMenuConfirm;
@property(retain, nonatomic) TBBarButtonItem *btnReviewOrder; // @synthesize btnReviewOrder=_btnReviewOrder;
@property(retain, nonatomic) TBBarButtonItem *btnAddMenu; // @synthesize btnAddMenu=_btnAddMenu;
@property(retain, nonatomic) TBBarButtonItem *btnGetOrder; // @synthesize btnGetOrder=_btnGetOrder;
@property(retain, nonatomic) TBBarButtonItem *btnModify; // @synthesize btnModify=_btnModify;
@property(retain, nonatomic) TBBarButtonItem *btnScanCode; // @synthesize btnScanCode=_btnScanCode;
@property(nonatomic) BOOL ifFirstMenuConfirm; // @synthesize ifFirstMenuConfirm=_ifFirstMenuConfirm;
@property(nonatomic) BOOL ifScan; // @synthesize ifScan=_ifScan;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) TBCityDDOrderItem *orderData; // @synthesize orderData=_orderData;
@property(retain, nonatomic) TBCityMyDDOrderDetailService *ddOrderDetailService; // @synthesize ddOrderDetailService=_ddOrderDetailService;
@property(retain, nonatomic) UILabel *navigationStatusLabel; // @synthesize navigationStatusLabel=_navigationStatusLabel;
@property(retain, nonatomic) UIButton *navigationBtn; // @synthesize navigationBtn=_navigationBtn;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) TBCityDDOrderDetailView *orderView; // @synthesize orderView=_orderView;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)doShareAction;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)statusHandler;
- (void)reviewOrder;
- (void)reloadVC;
- (void)getOrder;
- (void)addMenu;
- (void)popViewController;
- (void)payOrder;
- (id)createNavigationBtn:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)menuConfirm;
- (void)scanCode;
- (void)payPriceOrder;
- (void)setupToolBarItemButton:(id)arg1;
- (void)setupToolBarItem;
- (void)modify;
- (void)showAddMenuView:(id)arg1;
- (void)alertResult;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)callPhone;
- (void)callMap;
- (void)callStoreDetail;
- (void)callEvaluate;
- (void)addClickEvent;
- (void)setupTitleLabel;
- (void)setupRightBtn;
- (void)setupNavgationBar;
- (void)loadOrderView;
- (void)requestOrderDetailData;
- (void)showReservationsAlert;
- (void)showOrderSuccessAlert;
- (void)reservations;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)doPayFinishAction:(int)arg1;
- (void)viewDidLoad;

@end

