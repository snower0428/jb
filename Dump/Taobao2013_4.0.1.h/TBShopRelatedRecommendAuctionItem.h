//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBShopRelatedRecommendAuctionItem : TBModel
{
    NSString *_itemId;
    NSString *_picUrl;
    NSString *_reservePrice;
    NSString *_salePrice;
    NSString *_sold;
    NSString *_title;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *sold; // @synthesize sold=_sold;
@property(retain, nonatomic) NSString *salePrice; // @synthesize salePrice=_salePrice;
@property(retain, nonatomic) NSString *reservePrice; // @synthesize reservePrice=_reservePrice;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

