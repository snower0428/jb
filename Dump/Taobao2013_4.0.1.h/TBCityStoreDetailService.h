//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityStoreDetailItem, TBCityStoreDetailModel;

@interface TBCityStoreDetailService : TBCityService
{
    TBCityStoreDetailModel *_storeDetailModel;
    TBCityStoreDetailItem *_storeDetailItem;
}

@property(retain, nonatomic) TBCityStoreDetailItem *storeDetailItem; // @synthesize storeDetailItem=_storeDetailItem;
@property(retain, nonatomic) TBCityStoreDetailModel *storeDetailModel; // @synthesize storeDetailModel=_storeDetailModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)store4TakeoutDetailItemWithParams:(id)arg1 context:(id)arg2;
- (void)storeDetailWithParams:(id)arg1 context:(id)arg2;

@end
