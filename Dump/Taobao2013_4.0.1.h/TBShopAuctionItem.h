//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBShopAuctionItem : TBModel
{
    NSString *_auctionId;
    NSString *_auctionType;
    NSString *_hdfk;
    NSString *_picUrl;
    NSString *_quantity;
    NSString *_reservePrice;
    NSString *_salePrice;
    NSString *_sold;
    NSString *_title;
    NSString *_totalSoldQuantity;
}

@property(retain, nonatomic) NSString *totalSoldQuantity; // @synthesize totalSoldQuantity=_totalSoldQuantity;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sold; // @synthesize sold=_sold;
@property(retain, nonatomic) NSString *salePrice; // @synthesize salePrice=_salePrice;
@property(retain, nonatomic) NSString *reservePrice; // @synthesize reservePrice=_reservePrice;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *hdfk; // @synthesize hdfk=_hdfk;
@property(retain, nonatomic) NSString *auctionType; // @synthesize auctionType=_auctionType;
@property(retain, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
- (void).cxx_destruct;
- (float)promotionRate;
- (BOOL)isPromotion;
- (BOOL)isSupportHdfk;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
