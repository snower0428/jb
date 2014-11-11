//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate.h"
#import "TBSearchBusinessViewDelegate.h"
#import "TBShopSearchCategoryServiceDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSMutableArray, NSString, ShopHomeSignBoardFooterView, ShopHomeSignBoardHeaderView, TBModelStatusHandler, TBMoreDataTableViewCell, TBSNSToolbar, TBSearchBusinessView, TBServiceContext, TBShopHomeCategoryViewController, TBShopHomeService, TBShopHomeShopInfoViewController, TBShopInfoItem, TBShopModuleSignBoard, TBShopSearchCategoryService, TBShopService, UIButton, UIImageView, UITableView, UIView;

__attribute__((visibility("hidden")))
@interface TBShopHomeViewController : TBViewController <TBShopSearchCategoryServiceDelegate, UIActionSheetDelegate, TBSearchBusinessViewDelegate, TBModelStatusDelegate>
{
    BOOL _isSearchBusinessViewShowing;
    BOOL _isGoingToRefresh;
    BOOL _isMemoryWarning;
    struct CGPoint _tableViewContentOffset;
    UIButton *_viewAllItemButton;
    BOOL _isWeakNetworkOn;
    BOOL _isWeitaoToolbarHidden;
    TBSNSToolbar *toolbar;
    float scrollViewOffsetY;
    BOOL _isDataSuccessfulLoaded;
    BOOL _isPromotion;
    BOOL _isLoadingData;
    BOOL _hasViewFirstAppeared;
    BOOL _loadedShopInfo;
    TBShopHomeService *_shopHomeService;
    UIImageView *_shopHeaderImageView;
    UITableView *_shopTableView;
    NSMutableArray *_moduleArrayInTableViewBody;
    NSMutableArray *_finalDataArrayForDisplayInTableView;
    CDUnknownBlockType _loadViewWithUrlActionBlock;
    CDUnknownBlockType _loadNativeDetailActionBlock;
    ShopHomeSignBoardHeaderView *_shopSignBoardHeader;
    ShopHomeSignBoardFooterView *_shopSignBoardFooter;
    CDUnknownBlockType _leftMenuButtonClickedAction;
    CDUnknownBlockType _rightMenuButtonClickedAciton;
    TBModelStatusHandler *_statusHandler;
    CDUnknownBlockType _willSearchBlock;
    CDUnknownBlockType _getShopInfoBlock;
    CDUnknownBlockType _membershipActionBlock;
    NSString *_sellerId;
    NSString *_shopId;
    NSString *_sellerNick;
    NSString *_isvStr;
    int _orderType;
    int _startPrice;
    int _endPrice;
    NSString *_categoryID;
    NSString *_keyword;
    TBMoreDataTableViewCell *_moreDataTableViewCell;
    TBShopModuleSignBoard *_shopSignBoard;
    TBShopService *_itemSearchService;
    TBShopSearchCategoryService *_searchCategoryService;
    TBShopHomeShopInfoViewController *_shopDetailViewController;
    TBShopHomeCategoryViewController *_shopCategoryViewController;
    TBModelStatusHandler *_searchFailStatusHandler;
    TBServiceContext *_serviceContext;
    TBShopInfoItem *_shopInfoItem;
    UIView *_customTableFooterView;
    TBSearchBusinessView *_searchBusinessView;
}

+ (BOOL)tbNeedToolbar;
@property(retain, nonatomic) TBSearchBusinessView *searchBusinessView; // @synthesize searchBusinessView=_searchBusinessView;
@property(retain, nonatomic) UIView *customTableFooterView; // @synthesize customTableFooterView=_customTableFooterView;
@property(nonatomic) BOOL loadedShopInfo; // @synthesize loadedShopInfo=_loadedShopInfo;
@property(retain, nonatomic) TBShopInfoItem *shopInfoItem; // @synthesize shopInfoItem=_shopInfoItem;
@property(retain, nonatomic) TBServiceContext *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(retain, nonatomic) TBModelStatusHandler *searchFailStatusHandler; // @synthesize searchFailStatusHandler=_searchFailStatusHandler;
@property(retain, nonatomic) TBShopHomeCategoryViewController *shopCategoryViewController; // @synthesize shopCategoryViewController=_shopCategoryViewController;
@property(retain, nonatomic) TBShopHomeShopInfoViewController *shopDetailViewController; // @synthesize shopDetailViewController=_shopDetailViewController;
@property(retain, nonatomic) TBShopSearchCategoryService *searchCategoryService; // @synthesize searchCategoryService=_searchCategoryService;
@property(retain, nonatomic) TBShopService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
@property(nonatomic) BOOL hasViewFirstAppeared; // @synthesize hasViewFirstAppeared=_hasViewFirstAppeared;
@property(retain, nonatomic) TBShopModuleSignBoard *shopSignBoard; // @synthesize shopSignBoard=_shopSignBoard;
@property(nonatomic) BOOL isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) TBMoreDataTableViewCell *moreDataTableViewCell; // @synthesize moreDataTableViewCell=_moreDataTableViewCell;
@property(nonatomic) BOOL isPromotion; // @synthesize isPromotion=_isPromotion;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(nonatomic) int endPrice; // @synthesize endPrice=_endPrice;
@property(nonatomic) int startPrice; // @synthesize startPrice=_startPrice;
@property(nonatomic) int orderType; // @synthesize orderType=_orderType;
@property(nonatomic) BOOL isDataSuccessfulLoaded; // @synthesize isDataSuccessfulLoaded=_isDataSuccessfulLoaded;
@property(retain, nonatomic) NSString *isvStr; // @synthesize isvStr=_isvStr;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(copy, nonatomic) CDUnknownBlockType membershipActionBlock; // @synthesize membershipActionBlock=_membershipActionBlock;
@property(copy, nonatomic) CDUnknownBlockType getShopInfoBlock; // @synthesize getShopInfoBlock=_getShopInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType willSearchBlock; // @synthesize willSearchBlock=_willSearchBlock;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(copy, nonatomic) CDUnknownBlockType rightMenuButtonClickedAciton; // @synthesize rightMenuButtonClickedAciton=_rightMenuButtonClickedAciton;
@property(copy, nonatomic) CDUnknownBlockType leftMenuButtonClickedAction; // @synthesize leftMenuButtonClickedAction=_leftMenuButtonClickedAction;
@property(retain, nonatomic) ShopHomeSignBoardFooterView *shopSignBoardFooter; // @synthesize shopSignBoardFooter=_shopSignBoardFooter;
@property(retain, nonatomic) ShopHomeSignBoardHeaderView *shopSignBoardHeader; // @synthesize shopSignBoardHeader=_shopSignBoardHeader;
@property(copy, nonatomic) CDUnknownBlockType loadNativeDetailActionBlock; // @synthesize loadNativeDetailActionBlock=_loadNativeDetailActionBlock;
@property(copy, nonatomic) CDUnknownBlockType loadViewWithUrlActionBlock; // @synthesize loadViewWithUrlActionBlock=_loadViewWithUrlActionBlock;
@property(retain, nonatomic) NSMutableArray *finalDataArrayForDisplayInTableView; // @synthesize finalDataArrayForDisplayInTableView=_finalDataArrayForDisplayInTableView;
@property(retain, nonatomic) NSMutableArray *moduleArrayInTableViewBody; // @synthesize moduleArrayInTableViewBody=_moduleArrayInTableViewBody;
@property(nonatomic) UITableView *shopTableView; // @synthesize shopTableView=_shopTableView;
@property(nonatomic) UIImageView *shopHeaderImageView; // @synthesize shopHeaderImageView=_shopHeaderImageView;
@property(retain, nonatomic) TBShopHomeService *shopHomeService; // @synthesize shopHomeService=_shopHomeService;
- (void).cxx_destruct;
- (void)searchBarDidEndEditing;
- (void)searchDidCanceled;
- (void)willSearchWithKeyWord:(id)arg1 AndType:(int)arg2;
- (void)setShowsSearchBusinessView:(BOOL)arg1;
- (void)showSearchBusinessView:(id)arg1;
- (void)initSearchBusinessView;
- (void)searchAuctionInShop:(int)arg1 context:(id)arg2;
- (void)searchCategoryService:(id)arg1 selectedWithString:(id)arg2;
- (void)fetchShopInfo:(BOOL)arg1;
- (void)fetchShopInfo;
- (void)refreshCategoryData;
- (void)initCategoryService;
- (void)showFailedView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)updateAllControllers;
- (id)dataForUserTrack;
- (id)userTrackArgsForNextPage;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)viewItemButtonWithFrame:(struct CGRect)arg1 title:(id)arg2 descripStr:(id)arg3 selector:(SEL)arg4;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)enterCategoryModelViewController:(int)arg1;
- (void)leftMenuButtonClicked:(id)arg1;
- (void)buttonClicked:(id)arg1;
- (void)logoButtonClicked:(id)arg1;
- (void)totalItemButtonClicked:(id)arg1;
- (BOOL)image:(id)arg1 isEqualTo:(id)arg2;
- (void)shareButtonClicked:(id)arg1;
- (void)clearReturnIsvTag;
- (void)layoutRecentViewedItemCell:(id)arg1 withRecentViewedItems:(id)arg2;
- (id)layoutModuleViewsInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)configItemListCell:(id)arg1 withRowSum:(int)arg2 itemListModule:(id)arg3;
- (void)configShopHeaderImageView:(id)arg1;
- (void)layoutTableHeaderWithModule:(id)arg1;
- (void)viewWeiTao:(id)arg1;
- (void)viewNewItems:(id)arg1;
- (void)viewAllItems:(id)arg1;
- (void)configLoadMore;
- (void)configPullToRefresh;
- (void)adaptShopTableViewHeight;
- (void)setWeitaoToolbarHidden:(BOOL)arg1;
- (void)initWeitaoToolbar;
- (void)prepareDataForDisplay;
- (void)loadRecentViewedItem;
- (SEL)selectorForError:(id)arg1;
- (SEL)selectorForEmpty;
- (void)loadShopHomeForType:(int)arg1;
- (id)viewAllItemsButton;
- (void)reloadData;
- (void)handleButtonClickedWithUrlString:(id)arg1;
- (void)initActionBlocks;
- (void)configTableViewHeader;
- (void)addNavigationItem;
- (id)getSearchButton;
- (void)setupToolbarView;
- (id)item:(int)arg1 selector:(SEL)arg2;
- (void)refresh;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)viewDidAppearAtFirstTime;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (id)init;

@end

