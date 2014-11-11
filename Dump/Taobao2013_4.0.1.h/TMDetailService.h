//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSDictionary, NSString;

@interface TMDetailService : TMModel
{
    NSString *_serviceType;
    NSDictionary *_serviceItems;
    NSDictionary *_skuServiceListMap;
    long long _divisionId;
}

@property(retain, nonatomic) NSDictionary *skuServiceListMap; // @synthesize skuServiceListMap=_skuServiceListMap;
@property(retain, nonatomic) NSDictionary *serviceItems; // @synthesize serviceItems=_serviceItems;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) long long divisionId; // @synthesize divisionId=_divisionId;
- (void).cxx_destruct;
- (double)getServicePriceByServiceId:(long long)arg1 serviceSKUId:(long long)arg2 selectedSKUId:(long long)arg3;
- (id)getServiceNameByServiceId:(long long)arg1;
- (id)getServiceSKUNameByServiceId:(long long)arg1 serviceSKUId:(long long)arg2;
- (BOOL)hasService;
- (id)initWithDictionary:(id)arg1;

@end
