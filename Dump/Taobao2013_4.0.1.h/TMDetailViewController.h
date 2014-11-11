//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "PurchaseControllerDelegate.h"
#import "TBSDKServerDelegate.h"
#import "TMLogicEngineDelegate.h"
#import "TMPhotoViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class DetailFootView, DetailPropsView, DetailTopView, NSMutableArray, NSString, NSTimer, TMDetail, TMDetailItemSku, TMPhotoViewController, TMWebViewController, UIButton, UITableView, UIView, UIViewController;

@interface TMDetailViewController : TBViewController <UITableViewDelegate, UITableViewDataSource, TMPhotoViewControllerDelegate, TMLogicEngineDelegate, PurchaseControllerDelegate, TBSDKServerDelegate>
{
    TMDetail *_itemDetail;
    NSMutableArray *_reviews;
    NSMutableArray *_propArray;
    TMWebViewController *_webViewCtrl;
    int _currentReviewPage;
    int _totalReviewSize;
    UITableView *_tableView;
    TMPhotoViewController *_photoCtrl;
    UIButton *_shopCartBtn;
    DetailTopView *_topView;
    DetailFootView *_footView;
    DetailPropsView *_propsView;
    UIView *_loadMoreView;
    struct {
        unsigned int purchaseSucceed:1;
        unsigned int expendedReview:1;
        unsigned int expendedProp:1;
        unsigned int isRequestingCollect:1;
        unsigned int isReviewLoading:1;
        unsigned int noReviews:1;
    } _flags;
    TMDetailItemSku *_savedSelectedSKU;
    BOOL _taokeHasCommit;
    NSTimer *_shopCartTimer;
    float _contentOffset;
    struct CGSize _contentSize;
    BOOL _receivedMemoryWarning;
    NSString *_itemID;
    UIViewController *_purchaseCtrl;
}

+ (id)addOnePixelLineAtPoint:(struct CGPoint)arg1 onView:(id)arg2;
+ (void)load;
@property(nonatomic) UIViewController *purchaseCtrl; // @synthesize purchaseCtrl=_purchaseCtrl;
@property(retain, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;
- (void)purchaseController:(id)arg1 backWithSelectedSKU:(id)arg2;
- (void)photoViewControllerDeallocated:(id)arg1;
- (struct CGRect)photoViewControllerDelegateAnimateFrame:(id)arg1;
- (id)photoViewControllerDelegateAnimateImage:(id)arg1;
- (void)photoViewController:(id)arg1 movedToIndex:(int)arg2;
- (void)didLoadMoreReviewBtnDown:(id)arg1;
- (void)didLoadMoreReviewBtnClicked:(id)arg1;
- (void)createLoadMoreView;
- (void)stopIndicatorWithText:(id)arg1 image:(id)arg2;
- (void)startIndicatorWithText:(id)arg1;
- (void)requestDelCollectFail:(id)arg1;
- (void)requestDelCollectSuccess:(id)arg1;
- (void)requestDelCollect;
- (void)requestAddCollectFail:(id)arg1;
- (void)requestAddCollectSuccess:(id)arg1;
- (void)requestAddCollect;
- (void)requestCollectStatusFail:(id)arg1;
- (void)requestCollectStatusSuccess:(id)arg1;
- (void)requestCollectStatus;
- (void)didCollectItemButtonClicked:(id)arg1;
- (void)createMainView;
- (void)popToParent;
- (void)loadReviewsWithPage:(unsigned int)arg1;
- (void)expandSection:(id)arg1;
- (void)gotoPurchase:(BOOL)arg1;
- (void)shopCartBtnPressed:(id)arg1;
- (void)putcartButtonPressed:(id)arg1;
- (void)buyButtonPressed:(id)arg1;
- (id)itemPicturePressed:(id)arg1;
- (void)tmLogicEngineFailed:(id)arg1 request:(id)arg2 data:(id)arg3;
- (void)tmLogicEngineSuccess:(id)arg1 request:(id)arg2 data:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)onNavShareClicked:(id)arg1;
- (void)onNavBackClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)initWithItemID:(id)arg1;
- (id)init;

@end

