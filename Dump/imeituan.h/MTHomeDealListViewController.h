//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTDropdownListViewDelegate.h"
#import "MTFiltersViewDelegate.h"
#import "MTLocationManagerProtocol.h"

@class CLLocation, MTDealCategoryService, MTDealFiltersViewController, MTDealListViewController, MTDealService, MTDistrictMerchantListService, MTHomeCategory, MTHomeCategoryService, MTHomeDropdownListViewController, MTMerchantFiltersViewController, NSDictionary, NSMutableArray, UIAlertView;

@interface MTHomeDealListViewController : MTBaseViewController <MTDropdownListViewDelegate, MTFiltersViewDelegate, MTLocationManagerProtocol>
{
    MTHomeDropdownListViewController *_homeDropdownListViewController;
    MTDealListViewController *_dealListViewController;
    MTDealFiltersViewController *_dealFiltersViewController;
    MTMerchantFiltersViewController *_merchantFiltersViewController;
    MTDealService *_dealService;
    MTDealCategoryService *_dealCategoryService;
    MTDistrictMerchantListService *_merchantService;
    MTHomeCategoryService *_homeCategoryService;
    MTHomeCategory *_category;
    NSMutableArray *_categoryArray;
    int _currentCategoryID;
    int _currentCriteria;
    int _currentCriteriaID;
    int _currentSortType;
    BOOL _isFromHotDeal;
    BOOL _hasSpotUserLocation;
    int _oldCategoryID;
    BOOL _firstRefreshAfterPushed;
    BOOL _locationSuccess;
    UIAlertView *_locationAlertView;
    CLLocation *_locationSelectedFromMap;
    NSMutableArray *_dealsArray;
    NSDictionary *_portalURLParamsDictionary;
    NSDictionary *_selectedFilterDictionary;
    CLLocation *_currentLocation;
}

@property(copy, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(copy, nonatomic) NSDictionary *selectedFilterDictionary; // @synthesize selectedFilterDictionary=_selectedFilterDictionary;
@property(copy, nonatomic) NSDictionary *portalURLParamsDictionary; // @synthesize portalURLParamsDictionary=_portalURLParamsDictionary;
@property(retain, nonatomic) NSMutableArray *dealsArray; // @synthesize dealsArray=_dealsArray;
- (void).cxx_destruct;
- (void)setDealListViewControllerPageParameter;
- (void)showAlertViewWhenLocationFailed;
- (void)processedWhenLocationFailed;
- (void)locationManager:(id)arg1 didFailForLocationWithError:(id)arg2;
- (void)locationManager:(id)arg1 didFailForPlaceMarkWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdatePlaceMark:(id)arg2;
- (void)filtersViewController:(id)arg1 filterDict:(id)arg2;
- (void)dropdownListViewController:(id)arg1 selectedDropdownArray:(id)arg2;
- (void)refreshDataWithLocation:(id)arg1;
- (void)refreshDataWithLocationFromLocationManagerDelegate:(id)arg1;
- (void)spotUserLocationFromMap;
- (void)startLocatingUserToRefreshData;
- (void)didClickMapButtonItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isDeliciousID:(id)arg1;
- (void)viewDidLoad;
- (void)setWithURL:(id)arg1;
- (void)processCategoryWithResponse:(id)arg1;
- (void)commomInit;
- (id)init;
- (id)initWithCurrentCategory:(id)arg1 homeCategoryResponse:(id)arg2 isFromHotDeal:(BOOL)arg3;

@end
