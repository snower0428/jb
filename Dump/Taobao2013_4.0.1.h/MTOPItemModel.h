//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MTOPItemModel : NSObject
{
    BOOL _soldout;
    BOOL _sku;
    NSString *_itemId;
    NSString *_title;
    NSString *_price;
    NSString *_stuffStatus;
    NSString *_itemStatus;
    NSString *_location;
    NSArray *_picsPath;
    NSString *_totalSoldQuantity;
    NSString *_evaluateCount;
    NSString *_quantity;
    NSString *_favcount;
    NSString *_categoryIds;
    NSString *_itemGradeAvg;
    NSString *_tagValue;
    NSDictionary *_tagParams;
    NSString *_itemUrl;
    NSString *_fullDescUrl;
    NSString *_briefDescUrl;
}

@property(retain, nonatomic) NSString *briefDescUrl; // @synthesize briefDescUrl=_briefDescUrl;
@property(retain, nonatomic) NSString *fullDescUrl; // @synthesize fullDescUrl=_fullDescUrl;
@property(retain, nonatomic) NSString *itemUrl; // @synthesize itemUrl=_itemUrl;
@property(retain, nonatomic) NSDictionary *tagParams; // @synthesize tagParams=_tagParams;
@property(retain, nonatomic) NSString *tagValue; // @synthesize tagValue=_tagValue;
@property(nonatomic) BOOL sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSString *itemGradeAvg; // @synthesize itemGradeAvg=_itemGradeAvg;
@property(retain, nonatomic) NSString *categoryIds; // @synthesize categoryIds=_categoryIds;
@property(retain, nonatomic) NSString *favcount; // @synthesize favcount=_favcount;
@property(nonatomic) BOOL soldout; // @synthesize soldout=_soldout;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *evaluateCount; // @synthesize evaluateCount=_evaluateCount;
@property(retain, nonatomic) NSString *totalSoldQuantity; // @synthesize totalSoldQuantity=_totalSoldQuantity;
@property(retain, nonatomic) NSArray *picsPath; // @synthesize picsPath=_picsPath;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *itemStatus; // @synthesize itemStatus=_itemStatus;
@property(retain, nonatomic) NSString *stuffStatus; // @synthesize stuffStatus=_stuffStatus;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (BOOL)isDepositItem;
- (BOOL)isSeckillItem;
- (BOOL)isPreSellItem;
- (BOOL)isErshouItem;
- (BOOL)isPaimaiItem;
- (BOOL)isRelationItem;
- (BOOL)isCuxiaoItem;
- (BOOL)isEbook;
- (BOOL)isHospitalItem;
- (BOOL)isJuhuasuanItem;
- (BOOL)isHouseItem;
- (BOOL)isTaoCoinItem;
- (BOOL)isBuyOnBehalfItem;
- (BOOL)isTakeAwayItem;
- (BOOL)isSupermaketItem;
- (BOOL)isVoucherItem;
- (BOOL)isKoubeiItem;
- (BOOL)isWapSeckillItem;
- (BOOL)isPcSeckillItem;
- (BOOL)isVirtualItem;
- (BOOL)isTMallItem;

@end
