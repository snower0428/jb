//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityMyTakeoutOrderItem;

@interface TBCityMyTakeoutOrderDetailModel : TBCitySDKRequestModel
{
    TBCityMyTakeoutOrderItem *_orderItem;
}

@property(retain, nonatomic) TBCityMyTakeoutOrderItem *orderItem; // @synthesize orderItem=_orderItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getStoreTakeoutOrderDetail:(id)arg1;
- (void)getTakeoutOrderDetail:(id)arg1;

@end

