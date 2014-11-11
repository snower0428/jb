//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString, TBOrderTotalPriceInfoItem, TBOrderTradeOperateInfoItem;

@interface TBOrderListCellStepInfoItem : TBModel
{
    NSArray *_orderServices;
    NSString *_orderStatusInfo;
    NSString *_payPrice;
    NSString *_quantity;
    NSString *_step;
    NSString *_stepName;
    NSString *_stepPrice;
    TBOrderTotalPriceInfoItem *_totalPriceInfo;
    TBOrderTradeOperateInfoItem *_tradeOperateInfo;
}

@property(retain, nonatomic) TBOrderTradeOperateInfoItem *tradeOperateInfo; // @synthesize tradeOperateInfo=_tradeOperateInfo;
@property(retain, nonatomic) TBOrderTotalPriceInfoItem *totalPriceInfo; // @synthesize totalPriceInfo=_totalPriceInfo;
@property(retain, nonatomic) NSString *stepPrice; // @synthesize stepPrice=_stepPrice;
@property(retain, nonatomic) NSString *stepName; // @synthesize stepName=_stepName;
@property(retain, nonatomic) NSString *step; // @synthesize step=_step;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *payPrice; // @synthesize payPrice=_payPrice;
@property(retain, nonatomic) NSString *orderStatusInfo; // @synthesize orderStatusInfo=_orderStatusInfo;
@property(retain, nonatomic) NSArray *orderServices; // @synthesize orderServices=_orderServices;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
