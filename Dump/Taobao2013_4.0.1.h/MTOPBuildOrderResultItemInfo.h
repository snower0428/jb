//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

@interface MTOPBuildOrderResultItemInfo : TBModel
{
    NSString *sku;
    NSString *sPrice;
    NSString *tPrice;
    NSString *quantity;
    NSString *itemId;
    NSString *pic;
    NSString *skuId;
    NSArray *extInfo;
    NSString *shopName;
    NSString *maxAmount;
    NSString *title;
    NSString *sellerNick;
}

@property(copy, nonatomic) NSString *sellerNick; // @synthesize sellerNick;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(copy, nonatomic) NSString *maxAmount; // @synthesize maxAmount;
@property(copy, nonatomic) NSString *shopName; // @synthesize shopName;
@property(retain, nonatomic) NSArray *extInfo; // @synthesize extInfo;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId;
@property(copy, nonatomic) NSString *pic; // @synthesize pic;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity;
@property(copy, nonatomic) NSString *tPrice; // @synthesize tPrice;
@property(copy, nonatomic) NSString *sPrice; // @synthesize sPrice;
@property(copy, nonatomic) NSString *sku; // @synthesize sku;
- (void).cxx_destruct;
- (Class)classForKey:(id)arg1;

@end
