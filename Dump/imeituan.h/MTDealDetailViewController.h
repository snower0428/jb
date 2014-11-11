//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTScrollViewController.h"

#import "MTShareActionSheetDelegate.h"

@class MTCallMerchantChildViewController, MTCollectedDealService, MTCustomerReviewHighlightsChildViewController, MTDeal, MTDealDetailScrollView, MTDealRecommendationService, MTDealRecommendationsListViewController, MTDealRecommendationsViewController, MTImageAnimationLoadingView, MTNavigationBarRightCustomView, MTRoomInfoViewController, NSString;

@interface MTDealDetailViewController : MTScrollViewController <MTShareActionSheetDelegate>
{
    MTDealDetailScrollView *_contentScrollView;
    unsigned int _dealAlbumIndex;
    MTCallMerchantChildViewController *_callMerchantViewController;
    MTCustomerReviewHighlightsChildViewController *_reviewsViewController;
    MTDealRecommendationsListViewController *_recommendationsListViewController;
    MTDealRecommendationsViewController *_dealRecommendationsChildViewController;
    MTRoomInfoViewController *_roomInfoViewController;
    MTNavigationBarRightCustomView *_navigationBarRightCustomView;
    MTCollectedDealService *_collectedDealService;
    MTDealRecommendationService *_recommendService;
    MTImageAnimationLoadingView *_activityIndicatorView;
    BOOL _originalDealCollectStatus;
    BOOL _endDealCollectStatus;
    int _dealID;
    CDUnknownBlockType _cancelCollectedBlock;
    MTDeal *_deal;
    NSString *_stid;
}

@property(retain, nonatomic) NSString *stid; // @synthesize stid=_stid;
@property(retain, nonatomic) MTDeal *deal; // @synthesize deal=_deal;
@property(copy, nonatomic) CDUnknownBlockType cancelCollectedBlock; // @synthesize cancelCollectedBlock=_cancelCollectedBlock;
@property(nonatomic) int dealID; // @synthesize dealID=_dealID;
- (void).cxx_destruct;
- (void)purchase_;
- (void)didClickHotelReservationInfoCell;
- (void)clickHeadImageAction:(id)arg1;
- (void)didClickPurchaseButton:(id)arg1;
- (id)payloadForShareMethod:(int)arg1;
- (void)didClickShareButton;
- (void)didClickCollectButton;
- (void)didClickPackageFooter:(id)arg1;
- (void)didClickReviewSummaryCell;
- (void)didClickRefundButton;
- (void)didClickMerchantInfoFooterCell;
- (void)didClickMerchantInfoCell;
- (void)didClickPhoneButton;
- (void)didReceiveMemoryWarning;
- (void)refresh;
- (void)setupRoomInfoView:(id)arg1;
- (void)setupRereadRecommendationsViewByRecommend:(id)arg1;
- (void)setupSameBrandRecommendationsListViewByRecommend:(id)arg1 defaultCount:(int)arg2;
- (void)setupReviewViewByReviews:(id)arg1;
- (void)setupDealDetailView;
- (void)loadRoomInfoData;
- (void)loadRecommendRereadData;
- (void)loadRecommentSameBrandData;
- (void)loadReviewsData;
- (void)reloadDataSource;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didClickLeftBarButtonItem;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDealID:(int)arg1 stid:(id)arg2;
- (id)initWithDeal:(id)arg1;
- (id)identiferURLParameters;
- (void)setWithURL:(id)arg1;

@end

