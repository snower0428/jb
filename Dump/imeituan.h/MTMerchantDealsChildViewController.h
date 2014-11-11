//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class MTBaseCell, MTFragmentFooterCell, MTFragmentHeaderCell, MTMerchant, MTTableModel, MTTableView, NSArray, UILabel;

@interface MTMerchantDealsChildViewController : MTBaseViewController
{
    MTFragmentHeaderCell *_headerCell;
    MTBaseCell *_dealsListCell;
    MTTableView *_dealsListTableView;
    MTTableModel *_dealsListTableModel;
    MTFragmentFooterCell *_footerCell;
    MTBaseCell *_statusCell;
    UILabel *_statusLabel;
    BOOL _folded;
    BOOL _waitingForDeals;
    int _defaultShowCount;
    BOOL _hideSelfWhenLoadingAndNoDeals;
    NSArray *_deals;
    MTMerchant *_merchant;
    id <MTMerchantDealsChildViewControllerDelegate> _merchantDelegate;
}

@property(nonatomic) id <MTMerchantDealsChildViewControllerDelegate> merchantDelegate; // @synthesize merchantDelegate=_merchantDelegate;
@property(nonatomic) BOOL hideSelfWhenLoadingAndNoDeals; // @synthesize hideSelfWhenLoadingAndNoDeals=_hideSelfWhenLoadingAndNoDeals;
@property(retain, nonatomic) MTMerchant *merchant; // @synthesize merchant=_merchant;
@property(retain, nonatomic) NSArray *deals; // @synthesize deals=_deals;
- (void).cxx_destruct;
- (void)purchaseDeal_:(id)arg1;
- (void)didSelectDeal:(id)arg1;
- (void)refreshTableViewAndFooterCell;
- (void)foldUnfold;
- (id)firstDefaultShownDeals;
- (void)loadFooterCell;
- (void)loadDealsListCell;
- (void)loadStatusCell;
- (void)loadHeaderCell;
- (void)loadAndRefreshSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

@end
