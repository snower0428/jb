//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBBidRecrodItem : TBModel
{
    NSString *_buyerNick;
    NSString *_payTime;
    NSString *_price;
    NSString *_quantity;
    NSString *_rateNum;
    NSString *_skuDesc;
    NSString *_vipCode;
}

@property(retain, nonatomic) NSString *vipCode; // @synthesize vipCode=_vipCode;
@property(retain, nonatomic) NSString *skuDesc; // @synthesize skuDesc=_skuDesc;
@property(retain, nonatomic) NSString *rateNum; // @synthesize rateNum=_rateNum;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *payTime; // @synthesize payTime=_payTime;
@property(retain, nonatomic) NSString *buyerNick; // @synthesize buyerNick=_buyerNick;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

