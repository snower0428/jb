//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class METMerchantOperationChildViewController, METMerchantPhoneChildViewController, MTCollectedMerchantService, MTCorrectMerchantInfoChildViewController, MTCustomerReviewHighlightsChildViewController, MTDealRecommendationsViewController, MTMerchant, MTMerchantAddressChildViewController, MTMerchantCustomerReviewService, MTMerchantDealsChildViewController, MTMerchantRecommendationsViewController, MTMerchantService, MTMerchantSummaryChildViewController, NSDictionary;

@interface MTMerchantViewController : MTBaseViewController
{
    MTMerchantService *_merchantService;
    MTMerchantSummaryChildViewController *_summaryChildViewController;
    METMerchantPhoneChildViewController *_merchantPhoneChildViewController;
    MTMerchantAddressChildViewController *_merchantAddressChildViewController;
    METMerchantOperationChildViewController *_merchantOperationChildViewController;
    MTMerchantDealsChildViewController *_merchantDealsChildViewController;
    MTCustomerReviewHighlightsChildViewController *_reviewsChildViewController;
    MTDealRecommendationsViewController *_dealRecommendationsChildViewController;
    MTMerchantRecommendationsViewController *_merchantRecommendationsViewController;
    MTCorrectMerchantInfoChildViewController *_correctMerchantInfoChildViewController;
    MTMerchant *_merchant;
    MTMerchantCustomerReviewService *_merchantCustomerReviewService;
    BOOL _typeUnknown;
    BOOL _originalMerchantCollectStatus;
    BOOL _endMerchantCollectStatus;
    NSDictionary *_portalURLParamsDictionary;
    CDUnknownBlockType _cancelCollectedBlock;
    MTCollectedMerchantService *_collectedMerchantService;
}

+ (id)instanceWithURL:(id)arg1;
+ (id)viewControllerWithMerchant:(id)arg1 isCinemaDealDetail:(BOOL)arg2;
+ (id)viewControllerWithMerchant:(id)arg1 portalURLParamsDictionary:(id)arg2;
+ (id)viewControllerWithMerchantPOIID:(int)arg1;
+ (id)viewControllerWithMerchant:(id)arg1;
@property(readonly, nonatomic) MTCollectedMerchantService *collectedMerchantService; // @synthesize collectedMerchantService=_collectedMerchantService;
@property(nonatomic) BOOL endMerchantCollectStatus; // @synthesize endMerchantCollectStatus=_endMerchantCollectStatus;
@property(nonatomic) BOOL originalMerchantCollectStatus; // @synthesize originalMerchantCollectStatus=_originalMerchantCollectStatus;
@property(copy, nonatomic) CDUnknownBlockType cancelCollectedBlock; // @synthesize cancelCollectedBlock=_cancelCollectedBlock;
@property(copy, nonatomic) NSDictionary *portalURLParamsDictionary; // @synthesize portalURLParamsDictionary=_portalURLParamsDictionary;
@property(nonatomic) BOOL typeUnknown; // @synthesize typeUnknown=_typeUnknown;
@property(readonly, nonatomic) MTCorrectMerchantInfoChildViewController *correctMerchantInfoChildViewController; // @synthesize correctMerchantInfoChildViewController=_correctMerchantInfoChildViewController;
@property(readonly, nonatomic) MTMerchantRecommendationsViewController *merchantRecommendationsViewController; // @synthesize merchantRecommendationsViewController=_merchantRecommendationsViewController;
@property(readonly, nonatomic) MTDealRecommendationsViewController *dealRecommendationsChildViewController; // @synthesize dealRecommendationsChildViewController=_dealRecommendationsChildViewController;
@property(readonly, nonatomic) MTCustomerReviewHighlightsChildViewController *reviewsChildViewController; // @synthesize reviewsChildViewController=_reviewsChildViewController;
@property(retain, nonatomic) MTMerchant *merchant; // @synthesize merchant=_merchant;
- (void).cxx_destruct;
- (id)identiferURLParameters;
- (BOOL)isSameAsPageWithURL:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)fetchDealRecommendations;
- (void)fetchReviews;
- (void)fetchDeals;
- (void)fetchFirstThreePhotos;
- (void)fetchDetail;
- (void)didTapPastDealsCell;
- (id)loadPastDealsCell;
- (void)didClickLeftBarButtonItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithMerchantPOIID:(int)arg1;
- (id)initWithMerchant:(id)arg1;

@end

