//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface MtopDetailUnit : NSObject
{
    NSArray *_serviceUnits;
    NSString *_pointratio;
    NSString *_pointcounts;
    NSString *_quantity;
    NSString *_hasChance;
    NSString *_areaSold;
    NSString *_price;
    NSArray *_priceUnits;
}

@property(retain, nonatomic) NSArray *priceUnits; // @synthesize priceUnits=_priceUnits;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *areaSold; // @synthesize areaSold=_areaSold;
@property(retain, nonatomic) NSString *hasChance; // @synthesize hasChance=_hasChance;
@property(retain, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(retain, nonatomic) NSString *pointcounts; // @synthesize pointcounts=_pointcounts;
@property(retain, nonatomic) NSString *pointratio; // @synthesize pointratio=_pointratio;
@property(retain, nonatomic) NSArray *serviceUnits; // @synthesize serviceUnits=_serviceUnits;
- (void).cxx_destruct;
- (double)priceDoubleValue;
- (id)depositPriceString;
- (id)priceString;

@end
