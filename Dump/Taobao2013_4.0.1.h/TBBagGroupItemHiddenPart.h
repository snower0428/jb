//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSString, TBBagGroupItemHiddenPartAmount;

@interface TBBagGroupItemHiddenPart : TMModel
{
    BOOL isMarket;
    NSString *cartId;
    NSString *itemId;
    NSString *skuId;
    NSString *serviceId;
    NSString *divisionCode;
    NSString *maxQuantity;
    NSString *unionId;
    TBBagGroupItemHiddenPartAmount *amount;
}

@property(retain, nonatomic) TBBagGroupItemHiddenPartAmount *amount; // @synthesize amount;
@property(retain, nonatomic) NSString *unionId; // @synthesize unionId;
@property(retain, nonatomic) NSString *maxQuantity; // @synthesize maxQuantity;
@property(retain, nonatomic) NSString *divisionCode; // @synthesize divisionCode;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId;
@property(retain, nonatomic) NSString *skuId; // @synthesize skuId;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId;
@property(retain, nonatomic) NSString *cartId; // @synthesize cartId;
@property(nonatomic) BOOL isMarket; // @synthesize isMarket;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
