//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSArray, NSString;

@interface TMDetailPeriodicOrderItem : TMModel
{
    int _periodicity;
    NSString *_periodicityName;
    NSArray *_phasePrices;
    int _deliveryInterval;
    NSString *_deliveryIntervalName;
    int _deliveryTimes;
    long long _price;
}

@property(nonatomic) int deliveryTimes; // @synthesize deliveryTimes=_deliveryTimes;
@property(retain, nonatomic) NSString *deliveryIntervalName; // @synthesize deliveryIntervalName=_deliveryIntervalName;
@property(nonatomic) int deliveryInterval; // @synthesize deliveryInterval=_deliveryInterval;
@property(retain, nonatomic) NSArray *phasePrices; // @synthesize phasePrices=_phasePrices;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *periodicityName; // @synthesize periodicityName=_periodicityName;
@property(nonatomic) int periodicity; // @synthesize periodicity=_periodicity;
- (void).cxx_destruct;
- (id)keyMapDictionary;

@end

