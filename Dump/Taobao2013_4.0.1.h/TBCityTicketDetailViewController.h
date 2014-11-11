//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityButtonTagDelegate.h"
#import "TBCityCouponSupportedShopDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, TBCityButtonTagView, TBCityCouponActivateService, TBCityCouponSupportedShopItem, TBCityMyTicketDetailView, TBCityTicketDetailService, TBCityTicketItem, UITableView, UIView;

@interface TBCityTicketDetailViewController : TBCityViewController <UITableViewDataSource, UITableViewDelegate, TBCityButtonTagDelegate, TBCityCouponSupportedShopDelegate>
{
    BOOL _supportOpenStatus;
    BOOL _isLoadingData;
    BOOL _isActivateSuccess;
    NSMutableArray *_orderDetailArray;
    TBCityTicketDetailService *_ticketDetailService;
    NSString *_ticketId;
    TBCityTicketItem *_orderInfo;
    NSArray *_supportShopList;
    TBCityCouponSupportedShopItem *_currentShop;
    TBCityCouponActivateService *_couponActivateService;
    TBCityMyTicketDetailView *_myView;
    TBCityButtonTagView *_buttonTagView;
    UITableView *_couponDetailTableView;
    UIView *_tipView;
    NSTimer *_tipTimer;
    float _cellHeight;
}

@property(nonatomic) BOOL isActivateSuccess; // @synthesize isActivateSuccess=_isActivateSuccess;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) BOOL supportOpenStatus; // @synthesize supportOpenStatus=_supportOpenStatus;
@property(nonatomic) float cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) NSTimer *tipTimer; // @synthesize tipTimer=_tipTimer;
@property(retain, nonatomic) UIView *tipView; // @synthesize tipView=_tipView;
@property(retain, nonatomic) UITableView *couponDetailTableView; // @synthesize couponDetailTableView=_couponDetailTableView;
@property(retain, nonatomic) TBCityButtonTagView *buttonTagView; // @synthesize buttonTagView=_buttonTagView;
@property(retain, nonatomic) TBCityMyTicketDetailView *myView; // @synthesize myView=_myView;
@property(retain, nonatomic) TBCityCouponActivateService *couponActivateService; // @synthesize couponActivateService=_couponActivateService;
@property(retain, nonatomic) TBCityCouponSupportedShopItem *currentShop; // @synthesize currentShop=_currentShop;
@property(retain, nonatomic) NSArray *supportShopList; // @synthesize supportShopList=_supportShopList;
@property(retain, nonatomic) TBCityTicketItem *orderInfo; // @synthesize orderInfo=_orderInfo;
@property(retain, nonatomic) NSString *ticketId; // @synthesize ticketId=_ticketId;
@property(retain, nonatomic) TBCityTicketDetailService *ticketDetailService; // @synthesize ticketDetailService=_ticketDetailService;
@property(retain, nonatomic) NSMutableArray *orderDetailArray; // @synthesize orderDetailArray=_orderDetailArray;
- (void).cxx_destruct;
- (void)doActivateandConfirmFromUse;
- (void)doActivateandConfirmFromConvert;
- (void)closeProgressHUD;
- (void)showProgressHUD;
- (void)doActivateandConfirm;
- (void)doActivateWithShop:(id)arg1;
- (void)doActivateUse;
- (void)doActivateConvert;
- (void)showSupportShopDialog;
- (void)clear;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)openSupportView;
- (void)reloadData;
- (id)statusHandler;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didSelectButton:(id)arg1;
- (void)buttonTagViewHeightCalcuator:(id)arg1;
- (void)setupTableView;
- (void)setupToolBarItem;
- (void)setupNaviBarItem;
- (void)hideActivateResultTip:(id)arg1;
- (void)setUpActivateResultTip;
- (void)serializeData;
- (void)loadTicketDetail;
- (void)reloadByActivateSuccess;
- (void)reloadByActivateResult;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

