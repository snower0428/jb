//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TBPromotionManagerEX;

@interface MTOPQueryTradeBuyResultEX : NSObject
{
    BOOL needAddress;
    unsigned int quantity;
    NSString *picUrl;
    float price;
    float promPrice;
    NSString *skuDesc;
    NSString *title;
    NSString *checkCode;
    NSDictionary *hidden;
    TBPromotionManagerEX *promotionManager;
    NSArray *deliverList;
    NSArray *_virtualInfoList;
    NSString *_itemId;
    NSString *_skuId;
    NSString *_sellerNick;
    double unitPrice;
}

@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSArray *virtualInfoList; // @synthesize virtualInfoList=_virtualInfoList;
@property(retain, nonatomic) NSArray *deliverList; // @synthesize deliverList;
@property(retain, nonatomic) TBPromotionManagerEX *promotionManager; // @synthesize promotionManager;
@property(retain, nonatomic) NSDictionary *hidden; // @synthesize hidden;
@property(retain, nonatomic) NSString *checkCode; // @synthesize checkCode;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *skuDesc; // @synthesize skuDesc;
@property(nonatomic) double unitPrice; // @synthesize unitPrice;
@property(nonatomic) float promPrice; // @synthesize promPrice;
@property(nonatomic) float price; // @synthesize price;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl;
@property(nonatomic) unsigned int quantity; // @synthesize quantity;
@property(nonatomic) BOOL needAddress; // @synthesize needAddress;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
