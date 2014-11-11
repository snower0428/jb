//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTManagedOrder.h"

#import "MTShipmentOrder.h"

@class MTManagedShipmentInfo, NSArray, NSDate, NSString;

@interface MTManagedShipmentOrder : MTManagedOrder <MTShipmentOrder>
{
}


// Remaining properties
@property(nonatomic) BOOL canBeCanceled;
@property(nonatomic) BOOL canBeDeleted;
@property(nonatomic) BOOL canBeRefunded;
@property(nonatomic) BOOL canBeReviewed;
@property(nonatomic) BOOL canCancelRefund;
@property(nonatomic) BOOL canSetUsed;
@property(retain, nonatomic) NSString *companyName; // @dynamic companyName;
@property(retain, nonatomic) NSString *companyPhoneticName; // @dynamic companyPhoneticName;
@property(retain, nonatomic) NSString *companyShortName; // @dynamic companyShortName;
@property(retain, nonatomic) NSString *companyURLString; // @dynamic companyURLString;
@property(retain, nonatomic) NSDate *creationTime;
@property(retain, nonatomic) id <MTDeal> deal;
@property(nonatomic) int dealID;
@property(retain, nonatomic) NSString *deliveryComment; // @dynamic deliveryComment;
@property(nonatomic) int deliveryTime; // @dynamic deliveryTime;
@property(nonatomic) int hotelPartialReserved;
@property(copy, nonatomic) NSString *mobile;
@property(retain, nonatomic) NSDate *modificationTime;
@property(nonatomic) int needvalicode; // @dynamic needvalicode;
@property(nonatomic) BOOL on;
@property(retain, nonatomic) NSArray *orderGoods;
@property(nonatomic) int orderID;
@property(nonatomic) int orderLifecycleStatus;
@property(nonatomic) int orderType;
@property(nonatomic) int paymentStatus;
@property(retain, nonatomic) NSDate *paymentTime;
@property(nonatomic) int quantity;
@property(retain, nonatomic) NSString *refundMessage;
@property(retain, nonatomic) id <MTOrderReview> review;
@property(retain, nonatomic) NSString *shipmentID; // @dynamic shipmentID;
@property(retain, nonatomic) MTManagedShipmentInfo *shipmentInfo; // @dynamic shipmentInfo;
@property(retain, nonatomic) NSString *status; // @dynamic status;
@property(nonatomic) double subtotal;
@property(nonatomic) int support; // @dynamic support;
@property(nonatomic) BOOL used;
@end

