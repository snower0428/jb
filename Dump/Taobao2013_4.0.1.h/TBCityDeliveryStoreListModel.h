//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityItemList;

@interface TBCityDeliveryStoreListModel : TBCitySDKRequestModel
{
    TBCityItemList *_storeDeliveryListItem;
}

@property(retain, nonatomic) TBCityItemList *storeDeliveryListItem; // @synthesize storeDeliveryListItem=_storeDeliveryListItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)storeDeliveryListWithParams:(id)arg1;

@end
