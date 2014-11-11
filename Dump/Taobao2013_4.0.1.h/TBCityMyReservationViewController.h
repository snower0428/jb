//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityMyReservationCellDelegate.h"
#import "TBCitySafePayUtilityDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TBCityItemList, TBCityMyReservationItem, TBCityMyReservationService, UITableView;

@interface TBCityMyReservationViewController : TBCityViewController <UITableViewDataSource, UITableViewDelegate, TBCityMyReservationCellDelegate, TBCitySafePayUtilityDelegate>
{
    BOOL _isLoadingData;
    UITableView *_myBaseTableView;
    TBCityItemList *_myOrderArray;
    TBCityMyReservationService *_myReservationService;
    TBCityMyReservationItem *_orderItem;
    NSString *_currentPayOrder;
}

@property(retain, nonatomic) NSString *currentPayOrder; // @synthesize currentPayOrder=_currentPayOrder;
@property(retain, nonatomic) TBCityMyReservationItem *orderItem; // @synthesize orderItem=_orderItem;
@property(retain, nonatomic) TBCityMyReservationService *myReservationService; // @synthesize myReservationService=_myReservationService;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) TBCityItemList *myOrderArray; // @synthesize myOrderArray=_myOrderArray;
@property(retain, nonatomic) UITableView *myBaseTableView; // @synthesize myBaseTableView=_myBaseTableView;
- (void).cxx_destruct;
- (void)doRedo:(id)arg1 andShopName:(id)arg2;
- (void)doPayFinishAction:(int)arg1;
- (void)doPay:(id)arg1 andAlipayId:(id)arg2;
- (void)doPay:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)statusHandler;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)viewDidUnload;
- (void)loadOrderList:(int)arg1;
- (void)reloadData;
- (void)configPullToRefresh;
- (void)doLoginCancel;
- (void)configInit;
- (void)setupView;
- (void)viewDidLoad;

@end
