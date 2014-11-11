//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSString, TMDetailPromotion;

@interface TMDetailItemPrice : TMModel
{
    BOOL _hasKeyCanSell;
    BOOL _canSell;
    NSString *_price;
    NSString *_tagPrice;
    TMDetailPromotion *_defaultPromotion;
    char *_isAreaSold;
    long long _auctionPoint;
    long long _tmallPoints;
}

@property(nonatomic) BOOL canSell; // @synthesize canSell=_canSell;
@property(nonatomic) BOOL hasKeyCanSell; // @synthesize hasKeyCanSell=_hasKeyCanSell;
@property(nonatomic) long long tmallPoints; // @synthesize tmallPoints=_tmallPoints;
@property(nonatomic) long long auctionPoint; // @synthesize auctionPoint=_auctionPoint;
@property(nonatomic) char *isAreaSold; // @synthesize isAreaSold=_isAreaSold;
@property(retain, nonatomic) TMDetailPromotion *defaultPromotion; // @synthesize defaultPromotion=_defaultPromotion;
@property(copy, nonatomic) NSString *tagPrice; // @synthesize tagPrice=_tagPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
- (void).cxx_destruct;
- (Class)classForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

