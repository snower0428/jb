//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityViewController.h"

#import "UIActionSheetDelegate.h"

@class NSString, TBCityStoreDetailItem, TBCityStoreDetailService, TBCityWMStoreDetailView, UIScrollView;

@interface TBCityWMStoreDetailViewController : TBCityViewController <UIActionSheetDelegate>
{
    NSString *_shopId;
    TBCityStoreDetailService *_storeDetailService;
    TBCityStoreDetailItem *_storeDetailItem;
    UIScrollView *_scrollView;
    TBCityWMStoreDetailView *_storeView;
}

@property(retain, nonatomic) TBCityWMStoreDetailView *storeView; // @synthesize storeView=_storeView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) TBCityStoreDetailItem *storeDetailItem; // @synthesize storeDetailItem=_storeDetailItem;
@property(retain, nonatomic) TBCityStoreDetailService *storeDetailService; // @synthesize storeDetailService=_storeDetailService;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)callPhone;
- (void)moreReview;
- (void)moreOrder;
- (void)addClieckEvent;
- (void)loadStoreData;
- (void)requestWMStoreDetailData;
- (void)viewDidLoad;
- (id)initWithTakeoutShopId:(id)arg1;
- (void)dealloc;

@end
