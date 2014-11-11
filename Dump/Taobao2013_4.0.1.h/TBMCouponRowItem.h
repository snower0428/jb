//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBMBaseRowItem.h"

@class TBMCouponItem, TBMV4Cinema;

@interface TBMCouponRowItem : TBMBaseRowItem
{
    TBMV4Cinema *_cinema;
    TBMCouponItem *_coupon;
    int _couponPos;
}

+ (id)itemWithCoupon:(id)arg1 andCinema:(id)arg2;
@property(nonatomic) int couponPos; // @synthesize couponPos=_couponPos;
@property(retain, nonatomic) TBMCouponItem *coupon; // @synthesize coupon=_coupon;
@property(retain, nonatomic) TBMV4Cinema *cinema; // @synthesize cinema=_cinema;
- (void)dealloc;

@end
