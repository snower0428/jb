//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBasePurchaseService.h"

@class MTDeal, MTOrder, MTOrderModel, MTPurchaseInfo, MTPurchaseLotteryResult, MTPurchaseModel, MTPurchaseOrder, MTPurchasePaymentInfo, NSArray, NSString;

@interface MTGroupPurchaseService : MTBasePurchaseService
{
    MTPurchaseModel *_purchaseModel;
    MTOrderModel *_orderModel;
    int _orderID;
    MTDeal *_deal;
    MTPurchaseInfo *_purchaseInfo;
    MTPurchaseOrder *_createdOrder;
    NSArray *_shipmentInfoArray;
    NSString *_verifyCode;
    MTPurchasePaymentInfo *_paymentInfo;
    MTOrder *_purchasedOrder;
    int _growthValue;
    MTPurchaseLotteryResult *_lotteryResult;
}

@property(retain, nonatomic) MTPurchaseLotteryResult *lotteryResult; // @synthesize lotteryResult=_lotteryResult;
@property(readonly, nonatomic) int growthValue; // @synthesize growthValue=_growthValue;
@property(retain, nonatomic) MTOrder *purchasedOrder; // @synthesize purchasedOrder=_purchasedOrder;
@property(retain, nonatomic) MTPurchasePaymentInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(readonly, nonatomic) NSArray *shipmentInfoArray; // @synthesize shipmentInfoArray=_shipmentInfoArray;
@property(readonly, nonatomic) MTPurchaseOrder *createdOrder; // @synthesize createdOrder=_createdOrder;
@property(readonly, nonatomic) MTPurchaseInfo *purchaseInfo; // @synthesize purchaseInfo=_purchaseInfo;
@property(readonly, nonatomic) MTDeal *deal; // @synthesize deal=_deal;
@property(nonatomic) int orderID; // @synthesize orderID=_orderID;
- (void).cxx_destruct;
- (id)identifierForCurrentTransaction;
- (void)loadOrder:(CDUnknownBlockType)arg1;
- (void)checkMobile:(CDUnknownBlockType)arg1;
- (void)payOrder:(CDUnknownBlockType)arg1;
- (void)createOrderWithMobile:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)setDeliveryTypeForCreatedOrder:(id)arg1;
- (id)nameForDeliveryType:(int)arg1;
- (int)deliveryTypeForName:(id)arg1;
- (id)availableDeliveryTypes;
- (id)defaultDeliveryTypeName;
- (void)setShipmentInfoArray:(id)arg1;
- (id)shipmentInfoWithID:(int)arg1;
- (id)defaultShipmentInfo;
- (BOOL)setPurchaseQuantity:(int)arg1 forGoods:(id)arg2;
- (BOOL)setPurchaseQuantity:(int)arg1;
- (id)deliveryFeeTips;
- (float)deliveryFee;
- (float)subtotalFee;
- (float)creditUsed;
- (float)needToPay;
- (float)totalFee;
- (void)fetchPurchaseInfo:(CDUnknownBlockType)arg1;
- (void)setUser:(id)arg1;
- (id)initWithOrderID:(int)arg1;
- (id)initWithDeal:(id)arg1;
- (id)init;
- (void)commonInit;

@end

