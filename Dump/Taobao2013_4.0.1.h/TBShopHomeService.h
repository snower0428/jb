//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBService.h"

@class TBItemList, TBShopHomeRanderModel, TBShopRecentViewModel;

__attribute__((visibility("hidden")))
@interface TBShopHomeService : TBService
{
    TBShopHomeRanderModel *_shopHomeRanderModel;
    TBShopRecentViewModel *_shopRecentViewModel;
}

- (void).cxx_destruct;
- (void)loadRecentViewedItemsWithSellerId:(id)arg1 serviceContext:(id)arg2;
- (void)loadshopHomeWithShopId:(id)arg1 sellerId:(id)arg2 loadType:(int)arg3 serviceContext:(id)arg4;
- (void)loadshopHomeWithShopId:(id)arg1 loadType:(int)arg2 serviceContext:(id)arg3;
- (void)loadShopHomeWithSellerId:(id)arg1 loadType:(int)arg2 serviceContext:(id)arg3;
@property(readonly, nonatomic) TBItemList *recentViewedItems;
@property(readonly, nonatomic) TBItemList *moduleList;
@property(readonly, nonatomic) TBShopRecentViewModel *shopRecentViewModel; // @synthesize shopRecentViewModel=_shopRecentViewModel;
@property(readonly, nonatomic) TBShopHomeRanderModel *shopHomeRanderModel; // @synthesize shopHomeRanderModel=_shopHomeRanderModel;

@end
