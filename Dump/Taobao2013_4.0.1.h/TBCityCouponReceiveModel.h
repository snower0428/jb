//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityCouponReceiveItem;

@interface TBCityCouponReceiveModel : TBCitySDKRequestModel
{
    TBCityCouponReceiveItem *_couponReceiveItem;
}

@property(readonly, nonatomic) TBCityCouponReceiveItem *couponReceiveItem; // @synthesize couponReceiveItem=_couponReceiveItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)receiveCoupon:(id)arg1 localstoreId:(id)arg2;

@end
