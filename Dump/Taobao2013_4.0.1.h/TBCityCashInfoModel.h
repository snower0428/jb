//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityItemList, TBCityTicketItem;

@interface TBCityCashInfoModel : TBCitySDKRequestModel
{
    TBCityTicketItem *_ticketItem;
    TBCityItemList *_branchShopItemList;
}

@property(readonly, nonatomic) TBCityTicketItem *ticketItem; // @synthesize ticketItem=_ticketItem;
- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityItemList *branchShopItemList; // @synthesize branchShopItemList=_branchShopItemList;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getCashInfo:(id)arg1;

@end

