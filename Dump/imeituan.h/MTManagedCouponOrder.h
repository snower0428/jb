//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTManagedOrder.h"

#import "MTCouponOrder.h"

@class NSArray, NSDate, NSString;

@interface MTManagedCouponOrder : MTManagedOrder <MTCouponOrder>
{
}


// Remaining properties
@property(nonatomic) BOOL canBeCanceled;
@property(nonatomic) BOOL canBeDeleted;
@property(nonatomic) BOOL canBeRefunded;
@property(nonatomic) BOOL canBeReviewed;
@property(nonatomic) BOOL canCancelRefund;
@property(nonatomic) BOOL canSetUsed;
@property(retain, nonatomic) NSArray *couponArray; // @dynamic couponArray;
@property(retain, nonatomic) NSDate *creationTime;
@property(retain, nonatomic) id <MTDeal> deal;
@property(nonatomic) int dealID;
@property(nonatomic) int hotelPartialReserved;
@property(copy, nonatomic) NSString *mobile;
@property(retain, nonatomic) NSDate *modificationTime;
@property(nonatomic) BOOL on;
@property(retain, nonatomic) NSArray *orderGoods;
@property(nonatomic) int orderID;
@property(nonatomic) int orderLifecycleStatus;
@property(nonatomic) int orderType;
@property(nonatomic) int paymentStatus;
@property(retain, nonatomic) NSDate *paymentTime;
@property(nonatomic) int quantity;
@property(retain, nonatomic) NSArray *refundDetails; // @dynamic refundDetails;
@property(retain, nonatomic) NSString *refundMessage;
@property(retain, nonatomic) id <MTOrderReview> review;
@property(nonatomic) double subtotal;
@property(nonatomic) BOOL used;
@end

