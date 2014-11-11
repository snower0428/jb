//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityCouponDelegate.h"

@class NSMutableArray, NSString, TBCityCashInfoService, TBCityCouponView, TBCityTicketItem, TBCityUserCouponViewController, TBCityUserEvouchersItems, UIButton;

@interface TBCityCashDetailViewController : TBCityViewController <TBCityCouponDelegate>
{
    BOOL _isLoadingData;
    int _cashId;
    NSString *_localstoreId;
    TBCityCouponView *_couponView;
    UIButton *_buyBtn;
    NSMutableArray *_cashDetailArray;
    float _tableHeight;
    TBCityCashInfoService *_TBCityCashInfoService;
    TBCityTicketItem *_ticketItem;
    TBCityUserEvouchersItems *_userCouponItem;
    TBCityUserCouponViewController *_userCouponVC;
}

@property(retain, nonatomic) TBCityUserCouponViewController *userCouponVC; // @synthesize userCouponVC=_userCouponVC;
@property(retain, nonatomic) TBCityUserEvouchersItems *userCouponItem; // @synthesize userCouponItem=_userCouponItem;
@property(retain, nonatomic) TBCityTicketItem *ticketItem; // @synthesize ticketItem=_ticketItem;
@property(retain, nonatomic) TBCityCashInfoService *TBCityCashInfoService; // @synthesize TBCityCashInfoService=_TBCityCashInfoService;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) float tableHeight; // @synthesize tableHeight=_tableHeight;
@property(retain, nonatomic) NSMutableArray *cashDetailArray; // @synthesize cashDetailArray=_cashDetailArray;
@property(retain, nonatomic) UIButton *buyBtn; // @synthesize buyBtn=_buyBtn;
@property(retain, nonatomic) TBCityCouponView *couponView; // @synthesize couponView=_couponView;
@property(retain, nonatomic) NSString *localstoreId; // @synthesize localstoreId=_localstoreId;
@property(nonatomic) int cashId; // @synthesize cashId=_cashId;
- (void).cxx_destruct;
- (void)doBuyOrGetFree;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)statusHandler;
- (void)pushToCashOrderDetail;
- (void)checkPayLimit;
- (void)buyButtonIsPress;
- (void)receiveResult;
- (void)getCouponFree;
- (void)showError:(id)arg1;
- (void)closeProgressHUD;
- (void)showProgressHUD;
- (void)setupToolbarItem;
- (void)setupNaviBarItem;
- (void)shareItemClicked:(id)arg1;
- (void)loadCouponView;
- (void)getCashOrderData;
- (void)initConfig;
- (void)dealloc;
- (void)clear;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
