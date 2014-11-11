//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBCityMyOrderDetailService, TBCityOrderDetailItem, TBCityPayDetailService, UIButton, UITableView;

@interface TBCityMyOrderDetailViewController : TBCityViewController <UITableViewDataSource, UITableViewDelegate>
{
    BOOL _isSelectStatus;
    NSString *_orderNo;
    NSMutableArray *_orderDetailArray;
    TBCityMyOrderDetailService *_service;
    TBCityOrderDetailItem *_orderDetailItem;
    UIButton *_payBtn;
    UITableView *_tableView;
    TBCityPayDetailService *_payDetailService;
}

@property(retain, nonatomic) TBCityPayDetailService *payDetailService; // @synthesize payDetailService=_payDetailService;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) TBCityOrderDetailItem *orderDetailItem; // @synthesize orderDetailItem=_orderDetailItem;
@property(retain, nonatomic) TBCityMyOrderDetailService *service; // @synthesize service=_service;
@property(retain, nonatomic) NSMutableArray *orderDetailArray; // @synthesize orderDetailArray=_orderDetailArray;
@property(retain, nonatomic) NSString *orderNo; // @synthesize orderNo=_orderNo;
- (void).cxx_destruct;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)configCell:(id)arg1 row:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)getLabelTitleValue;
- (id)getLabelTitle;
- (void)dealloc;
- (void)clear;
- (void)viewDidUnload;
- (id)statusHandler;
- (void)scratchBtnIsPress;
- (void)popViewController;
- (void)getScanInfo:(id)arg1;
- (void)payBtnIsPress;
- (void)setupToolbarItemsScrach;
- (void)evaluateButtonIsPress:(id)arg1;
- (void)setupToolbarItemsPay;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)headView;
- (id)getTitle;
- (void)showMainView;
- (void)setupToolBarItem;
- (void)doPayFinishAction:(int)arg1;
- (void)loadData;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

