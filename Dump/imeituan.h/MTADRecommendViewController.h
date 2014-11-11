//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTDragRefreshTableViewController.h"

@class MTADRecommendDealResponse, MTADRecommendDealService, NSString;

@interface MTADRecommendViewController : MTDragRefreshTableViewController
{
    MTADRecommendDealService *_service;
    MTADRecommendDealResponse *_response;
    NSString *_URLString;
    BOOL _isSortByDistance;
}

@property(copy, nonatomic) NSString *URLString; // @synthesize URLString=_URLString;
- (void).cxx_destruct;
- (void)didSelectTableViewDealItem:(id)arg1;
- (void)refresh;
- (void)refreshData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadItems;
- (void)updateDataSource;
- (void)showEmptyViewWithError:(id)arg1;
- (void)showLoadingView;
- (id)identiferURLParameters;
- (void)setWithURL:(id)arg1;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
