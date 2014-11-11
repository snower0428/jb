//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBExpandOrContractScrollViewDelegate.h"
#import "TBJUBannerViewDelegate.h"
#import "TBJUTopBannerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class BannerApiContext, NSArray, NSMutableArray, NSString, TBBarButtonItem, TBExpandOrContractScrollViewDelegateObject, TBJUBannerView, TBJUBrandHeader, TBJUMainListLoadMoreCell, TBJUMainListViewController, TBJUTopBannerView, TBMTOPBrandGetResultDataModel, TBMTOPRequest, TBModelStatusHandler, TBTOPRequest, UIControl, UIImageView, UILabel, UITableView, UIView;

@interface TBJUBrandViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, TBExpandOrContractScrollViewDelegate, TBJUBannerViewDelegate, TBJUTopBannerViewDelegate>
{
    int _pageSize;
    int _pageToFetch;
    int _zeroItemsCount;
    NSString *_catId;
    NSString *_city;
    NSString *_catName;
    TBTOPRequest *_request;
    TBMTOPRequest *_mtopRequest;
    NSMutableArray *_bannerItems;
    NSMutableArray *_items;
    int _layoutStyle;
    BOOL _hasMore;
    int tabIndex;
    CDUnknownBlockType _leftMenuButtonActionBlock;
    CDUnknownBlockType _rightMenuButtonActionBlock;
    UILabel *_headerTitleLabel;
    NSString *_brandCode;
    NSString *_brandTitle;
    id _delegate;
    NSArray *_itemIds;
    TBJUMainListViewController *_parent;
    UIView *_myLoadingView;
    int _requestType;
    BannerApiContext *_bannerApiContext;
    NSString *_bannerTag;
    TBJUBannerView *_bannerView;
    TBJUBrandHeader *_brandHeaderView;
    TBJUTopBannerView *_topBannerView;
    UITableView *_tableView;
    UIView *_headerView;
    UIControl *_leftMenuButton;
    UIControl *_rightMenuButton;
    UIImageView *_headerLogoImageView;
    TBBarButtonItem *_layoutItem;
    TBBarButtonItem *_todayBarItem;
    TBBarButtonItem *_lifeBarItem;
    TBBarButtonItem *_brandBarItem;
    TBJUMainListLoadMoreCell *_loadMoreCell;
    TBExpandOrContractScrollViewDelegateObject *_expandDetector;
    TBModelStatusHandler *_failStatusHandler;
    NSMutableArray *_brandArray;
    unsigned int _brandArrayCount;
    NSString *_discountUrl;
    TBMTOPBrandGetResultDataModel *_brand;
    struct CGPoint _curPosition;
}

+ (id)synDiscountData;
@property(nonatomic) struct CGPoint curPosition; // @synthesize curPosition=_curPosition;
@property(retain, nonatomic) TBMTOPBrandGetResultDataModel *brand; // @synthesize brand=_brand;
@property(retain, nonatomic) NSString *discountUrl; // @synthesize discountUrl=_discountUrl;
@property(nonatomic) unsigned int brandArrayCount; // @synthesize brandArrayCount=_brandArrayCount;
@property(retain, nonatomic) NSMutableArray *brandArray; // @synthesize brandArray=_brandArray;
@property(nonatomic) BOOL hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) TBModelStatusHandler *failStatusHandler; // @synthesize failStatusHandler=_failStatusHandler;
@property(retain, nonatomic) TBExpandOrContractScrollViewDelegateObject *expandDetector; // @synthesize expandDetector=_expandDetector;
@property(retain, nonatomic) TBJUMainListLoadMoreCell *loadMoreCell; // @synthesize loadMoreCell=_loadMoreCell;
@property(retain, nonatomic) TBBarButtonItem *brandBarItem; // @synthesize brandBarItem=_brandBarItem;
@property(retain, nonatomic) TBBarButtonItem *lifeBarItem; // @synthesize lifeBarItem=_lifeBarItem;
@property(retain, nonatomic) TBBarButtonItem *todayBarItem; // @synthesize todayBarItem=_todayBarItem;
@property(retain, nonatomic) TBBarButtonItem *layoutItem; // @synthesize layoutItem=_layoutItem;
@property(nonatomic) UIImageView *headerLogoImageView; // @synthesize headerLogoImageView=_headerLogoImageView;
@property(nonatomic) UIControl *rightMenuButton; // @synthesize rightMenuButton=_rightMenuButton;
@property(nonatomic) UIControl *leftMenuButton; // @synthesize leftMenuButton=_leftMenuButton;
@property(nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBJUTopBannerView *topBannerView; // @synthesize topBannerView=_topBannerView;
@property(retain, nonatomic) TBJUBrandHeader *brandHeaderView; // @synthesize brandHeaderView=_brandHeaderView;
@property(retain, nonatomic) TBJUBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) NSString *bannerTag; // @synthesize bannerTag=_bannerTag;
@property(retain, nonatomic) BannerApiContext *bannerApiContext; // @synthesize bannerApiContext=_bannerApiContext;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) UIView *myLoadingView; // @synthesize myLoadingView=_myLoadingView;
@property(nonatomic) TBJUMainListViewController *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSArray *itemIds; // @synthesize itemIds=_itemIds;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *brandTitle; // @synthesize brandTitle=_brandTitle;
@property(retain, nonatomic) NSString *brandCode; // @synthesize brandCode=_brandCode;
@property(nonatomic) UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(copy, nonatomic) CDUnknownBlockType rightMenuButtonActionBlock; // @synthesize rightMenuButtonActionBlock=_rightMenuButtonActionBlock;
@property(copy, nonatomic) CDUnknownBlockType leftMenuButtonActionBlock; // @synthesize leftMenuButtonActionBlock=_leftMenuButtonActionBlock;
@property(nonatomic) int tabIndex; // @synthesize tabIndex;
- (void).cxx_destruct;
- (void)sendBannerNativeListRequest;
- (id)getItemIdsListByPage:(int)arg1;
- (void)heightDidChanged:(float)arg1;
- (void)didSelectBannerWithModel:(id)arg1 andIndex:(int)arg2;
- (void)bannerDidLoaded;
- (void)sendGetBannerRequest;
- (void)sendGetItemsRequest;
- (void)dealloc;
- (void)cancelFormerMTopRequest;
- (void)cancelFormerRequest;
- (void)requestDidFailed:(id)arg1;
- (void)reloadBrandHeader:(id)arg1;
- (void)requestDidFinished:(id)arg1;
- (void)doShowBanner;
- (id)removeSameItem:(id)arg1 inItems:(id)arg2;
- (id)getItemsFromRequest:(id)arg1;
- (void)tryLoadMoreItems;
- (void)reloadDataFromServer;
- (void)tapRightMenuButton:(id)arg1;
- (void)tapLeftMenuButton:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewShouldContact:(id)arg1;
- (void)scrollViewShouldExpand:(id)arg1;
- (void)contractWithAnimation;
- (void)contract;
- (void)expandWithAnimation;
- (void)expand;
- (void)hideHeader:(BOOL)arg1;
- (void)hideFooter:(BOOL)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)showBrandBanner;
- (BOOL)showBanner;
- (void)BannerView:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3;
- (id)avoidExternalLinkBlockingForUrl:(id)arg1;
- (void)reloadDataWithCategory:(id)arg1 inCity:(id)arg2;
- (void)reloadDataWithReqeust;
- (void)configureRequestType;
- (void)reloadDataOfBrand;
- (void)close;
- (void)backItemClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)brandButtonClicked:(id)arg1;
- (void)lifeButtonClicked:(id)arg1;
- (void)todayButtonClicked:(id)arg1;
- (void)layoutButtonClicked:(id)arg1;
- (struct CGPoint)centerWithRect:(struct CGRect)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
