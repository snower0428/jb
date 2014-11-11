//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCodingObject.h"

#import "MTOrder.h"

@class MTCodingDeal, MTCodingOrderReview, NSArray, NSDate, NSString;

@interface MTCodingOrder : MTCodingObject <MTOrder>
{
    BOOL _canBeCanceled;
    BOOL _canBeDeleted;
    BOOL _canBeRefunded;
    BOOL _canBeReviewed;
    BOOL _canCancelRefund;
    BOOL _canSetUsed;
    BOOL _on;
    BOOL _used;
    NSDate *_creationTime;
    int _dealID;
    NSDate *_modificationTime;
    NSArray *_orderGoods;
    int _orderID;
    int _orderLifecycleStatus;
    int _orderType;
    int _paymentStatus;
    NSDate *_paymentTime;
    int _quantity;
    NSString *_refundMessage;
    MTCodingOrderReview *_review;
    MTCodingDeal *_deal;
    NSString *_mobile;
    int _hotelPartialReserved;
    double _subtotal;
}

+ (id)instanceWithDomainObject:(id)arg1;
@property(nonatomic) int hotelPartialReserved; // @synthesize hotelPartialReserved=_hotelPartialReserved;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) MTCodingDeal *deal; // @synthesize deal=_deal;
@property(nonatomic) BOOL used; // @synthesize used=_used;
@property(nonatomic) double subtotal; // @synthesize subtotal=_subtotal;
@property(retain, nonatomic) MTCodingOrderReview *review; // @synthesize review=_review;
@property(retain, nonatomic) NSString *refundMessage; // @synthesize refundMessage=_refundMessage;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSDate *paymentTime; // @synthesize paymentTime=_paymentTime;
@property(nonatomic) int paymentStatus; // @synthesize paymentStatus=_paymentStatus;
@property(nonatomic) int orderType; // @synthesize orderType=_orderType;
@property(nonatomic) int orderLifecycleStatus; // @synthesize orderLifecycleStatus=_orderLifecycleStatus;
@property(nonatomic) int orderID; // @synthesize orderID=_orderID;
@property(retain, nonatomic) NSArray *orderGoods; // @synthesize orderGoods=_orderGoods;
@property(nonatomic) BOOL on; // @synthesize on=_on;
@property(retain, nonatomic) NSDate *modificationTime; // @synthesize modificationTime=_modificationTime;
@property(nonatomic) int dealID; // @synthesize dealID=_dealID;
@property(retain, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(nonatomic) BOOL canSetUsed; // @synthesize canSetUsed=_canSetUsed;
@property(nonatomic) BOOL canCancelRefund; // @synthesize canCancelRefund=_canCancelRefund;
@property(nonatomic) BOOL canBeReviewed; // @synthesize canBeReviewed=_canBeReviewed;
@property(nonatomic) BOOL canBeRefunded; // @synthesize canBeRefunded=_canBeRefunded;
@property(nonatomic) BOOL canBeDeleted; // @synthesize canBeDeleted=_canBeDeleted;
@property(nonatomic) BOOL canBeCanceled; // @synthesize canBeCanceled=_canBeCanceled;
- (void).cxx_destruct;
- (void)setWithDomainObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

