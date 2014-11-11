//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

#import "MTDropdownListViewDelegate.h"
#import "MTLocationManagerProtocol.h"

@class CLLocation, MTMerchantListDropdownViewController, MTMerchantListService, MTMerchantListViewController, MTSegmentedControl, NSMutableArray, UIAlertView, UIView;

@interface MTNearbyViewController : MTBaseViewController <MTDropdownListViewDelegate, MTLocationManagerProtocol>
{
    MTMerchantListViewController *_nearbyGroupMerchantListViewController;
    MTMerchantListViewController *_nearbyTotalMerchantListViewController;
    MTMerchantListDropdownViewController *_dropdownMerchantListViewController;
    MTMerchantListService *_nearByGroupMerchantService;
    MTMerchantListService *_nearByTotalMerchantService;
    MTSegmentedControl *_headerSegmentView;
    int _selectedIndex;
    NSMutableArray *_rowItemsArray;
    BOOL _firstLoadinNearbyViewController;
    BOOL _hasSpotUserLocation;
    BOOL _locationSuccess;
    UIAlertView *_locationAlertView;
    UIView *_switchHeaderView;
    CLLocation *_locationSelectedFromMap;
    BOOL _fromOtherTabbar;
    BOOL _fromPush;
    CDUnknownBlockType _backBlock;
    NSMutableArray *_dealsArray;
    NSMutableArray *_merchantsArray;
}

@property(readonly, nonatomic) BOOL fromPush; // @synthesize fromPush=_fromPush;
@property(retain, nonatomic) NSMutableArray *merchantsArray; // @synthesize merchantsArray=_merchantsArray;
@property(retain, nonatomic) NSMutableArray *dealsArray; // @synthesize dealsArray=_dealsArray;
@property(copy, nonatomic) CDUnknownBlockType backBlock; // @synthesize backBlock=_backBlock;
@property(nonatomic, getter=isFromOtherTabbar) BOOL fromOtherTabbar; // @synthesize fromOtherTabbar=_fromOtherTabbar;
- (void).cxx_destruct;
- (void)setGroupMerchantListViewControllerPageParameter;
- (void)setTotalMerchantListViewControllerPageParameter;
- (void)showAlertViewWhenLocationFailed;
- (void)processedWhenLocationFailed;
- (void)locationManager:(id)arg1 didFailForLocationWithError:(id)arg2;
- (void)locationManager:(id)arg1 didFailForPlaceMarkWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdatePlaceMark:(id)arg2;
- (void)dropdownListViewController:(id)arg1 selectedDropdownArray:(id)arg2;
- (void)scrollToTop;
- (void)didChangeHeaderSegment;
- (void)didClickMapButtonItem;
- (void)merchantListLoadMoreWithLocation:(id)arg1;
- (void)refreshDataWithLocation:(id)arg1;
- (void)refreshDataWithLocationFromLocationManagerDelegate:(id)arg1;
- (void)spotUserLocationFromMap;
- (id)cityDistrictKey;
- (void)refreshDataWithNoLocation;
- (void)startLocatingUserToRefreshData;
- (void)setWithURL:(id)arg1;
- (BOOL)shouldReloadContentForURL:(id)arg1;
- (BOOL)isSameAsPageWithURL:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)cityDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

