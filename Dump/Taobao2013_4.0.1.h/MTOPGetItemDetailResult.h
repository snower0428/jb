//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTOPEbookModel, MTOPItemModel, MTOPJhsModel, MTOPSellerModel, MTOPSkuModel, MtopMallInfo, NSArray, NSDictionary, NSString;

@interface MTOPGetItemDetailResult : NSObject
{
    MTOPItemModel *_item;
    MTOPSellerModel *_seller;
    NSArray *_promotions;
    NSArray *_priceUnits;
    NSArray *_serviceUnits;
    NSArray *_props;
    MTOPSkuModel *_skuInfo;
    MTOPJhsModel *_jhsItemInfo;
    MTOPEbookModel *_ebook;
    MtopMallInfo *_mallInfo;
    NSDictionary *_tips;
    NSArray *_guarantees;
    NSString *_deliveryFeeType;
    NSString *_deliveryTitle;
    NSArray *_deliveryFeesTitle;
    NSString *_deliveryDestination;
    NSString *_areaId;
    NSString *_jhsKey;
    NSString *_tradeTag;
    NSString *_tradeCartSupport;
    NSString *_tradeBuySupport;
}

@property(retain, nonatomic) NSString *tradeBuySupport; // @synthesize tradeBuySupport=_tradeBuySupport;
@property(retain, nonatomic) NSString *tradeCartSupport; // @synthesize tradeCartSupport=_tradeCartSupport;
@property(retain, nonatomic) NSString *tradeTag; // @synthesize tradeTag=_tradeTag;
@property(retain, nonatomic) NSString *jhsKey; // @synthesize jhsKey=_jhsKey;
@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(retain, nonatomic) NSString *deliveryDestination; // @synthesize deliveryDestination=_deliveryDestination;
@property(retain, nonatomic) NSArray *deliveryFeesTitle; // @synthesize deliveryFeesTitle=_deliveryFeesTitle;
@property(retain, nonatomic) NSString *deliveryTitle; // @synthesize deliveryTitle=_deliveryTitle;
@property(retain, nonatomic) NSString *deliveryFeeType; // @synthesize deliveryFeeType=_deliveryFeeType;
@property(retain, nonatomic) NSArray *guarantees; // @synthesize guarantees=_guarantees;
@property(retain, nonatomic) NSDictionary *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) MtopMallInfo *mallInfo; // @synthesize mallInfo=_mallInfo;
@property(retain, nonatomic) MTOPEbookModel *ebook; // @synthesize ebook=_ebook;
@property(retain, nonatomic) MTOPJhsModel *jhsItemInfo; // @synthesize jhsItemInfo=_jhsItemInfo;
@property(retain, nonatomic) MTOPSkuModel *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(retain, nonatomic) NSArray *props; // @synthesize props=_props;
@property(retain, nonatomic) NSArray *serviceUnits; // @synthesize serviceUnits=_serviceUnits;
@property(retain, nonatomic) NSArray *priceUnits; // @synthesize priceUnits=_priceUnits;
@property(retain, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) MTOPSellerModel *seller; // @synthesize seller=_seller;
@property(retain, nonatomic) MTOPItemModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)seckillWattingTime;
- (id)getValidPrice;
- (id)getFullName:(id)arg1;
- (id)getSkuSummary;
- (BOOL)isAutoSendTrade;
- (BOOL)isZhichongTrade;
- (BOOL)isOnePriceTrade;
- (BOOL)isAuctionTrade;
- (BOOL)isCartSupport;
- (BOOL)isBuySupport;
- (BOOL)isSkuItem;
- (BOOL)isTMallItem;

@end
