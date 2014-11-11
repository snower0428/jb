//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTPurchaseBaseViewController.h"

@class MTAutoLinearLayoutScrollView, MTDealRecommendationsResult, MTDealRecommendationsViewController, MTGroupPassbookService, MTPurchaseFailedView, MTPurchaseResultUnkownView, UIButton, UIView;

@interface MTPaymentResultViewController : MTPurchaseBaseViewController
{
    MTAutoLinearLayoutScrollView *_contentView;
    UIView *_succeededView;
    MTPurchaseResultUnkownView *_unknownView;
    MTPurchaseFailedView *_failedView;
    MTDealRecommendationsViewController *_recommendViewController;
    MTDealRecommendationsResult *_recommendationsResult;
    MTGroupPassbookService *_passbookService;
    UIButton *_addToPassbookBadget;
    int _purchaseResultViewMode;
}

@property(readonly, nonatomic) int purchaseResultViewMode; // @synthesize purchaseResultViewMode=_purchaseResultViewMode;
- (void).cxx_destruct;
- (void)showHotelReserving;
- (void)showOrder_;
- (void)showDeal_;
- (void)didClickTelHyerText;
- (void)didClickProblemHypertext;
- (void)didClickBackToDealButton:(id)arg1;
- (void)didClickRefreshButton:(id)arg1;
- (void)setupUnknownView;
- (void)didClickRePurchaseButton:(id)arg1;
- (void)setupFailedView;
- (void)didClickShowOrderButton:(id)arg1;
- (void)didClickShowDealsButton:(id)arg1;
- (void)showRecommend_;
- (void)didClickAddToPassbookAction:(id)arg1;
- (void)showPassbookBadgetIfNeeded;
- (void)setupSucceededView;
- (void)setupLotteryView;
- (void)viewDidLoad;

@end
