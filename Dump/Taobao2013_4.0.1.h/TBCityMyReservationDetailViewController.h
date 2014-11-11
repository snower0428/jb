//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "TBCityMyReservationDetailDelegate.h"
#import "TBCitySafePayUtilityDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, TBCityMyReservationDetailView, TBCityMyReservationItem, TBCityMyReservationService;

@interface TBCityMyReservationDetailViewController : TBCityViewController <UIActionSheetDelegate, TBCityMyReservationDetailDelegate, TBCitySafePayUtilityDelegate>
{
    BOOL _isLoadingData;
    NSString *_reservationId;
    int _needCallPay;
    int _fromAlipay;
    TBCityMyReservationDetailView *_contentView;
    TBCityMyReservationService *_myReservationService;
    TBCityMyReservationItem *_orderData;
}

@property(retain, nonatomic) TBCityMyReservationItem *orderData; // @synthesize orderData=_orderData;
@property(retain, nonatomic) TBCityMyReservationService *myReservationService; // @synthesize myReservationService=_myReservationService;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) TBCityMyReservationDetailView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) int fromAlipay; // @synthesize fromAlipay=_fromAlipay;
@property(nonatomic) int needCallPay; // @synthesize needCallPay=_needCallPay;
@property(retain, nonatomic) NSString *reservationId; // @synthesize reservationId=_reservationId;
- (void).cxx_destruct;
- (void)doShowCoupon;
- (void)doShopMenu;
- (void)doShareItem:(id)arg1;
- (void)doShopDetail;
- (void)doMapMark;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)doCallShopPhone;
- (void)doRedo;
- (void)doPayFinishAction:(int)arg1;
- (void)doPay;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)setupShopMenuAlert;
- (void)setOrderViewData;
- (void)setupNaviBarItem;
- (void)setupToolBarItem;
- (void)setupView;
- (void)reloadByPayResult;
- (void)loadMyReservationDetail;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

