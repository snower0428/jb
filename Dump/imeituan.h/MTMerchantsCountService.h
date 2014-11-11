//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

#import "MTCityBasedService.h"

@class MTCity, MTMerchantsCountModel;

@interface MTMerchantsCountService : MTBaseService <MTCityBasedService>
{
    MTMerchantsCountModel *_merchantsCountModel;
    int _criteriaType;
    int _criteriaID;
    int _cateID;
}

@property(nonatomic) int cateID; // @synthesize cateID=_cateID;
@property(nonatomic) int criteriaID; // @synthesize criteriaID=_criteriaID;
@property(nonatomic) int criteriaType; // @synthesize criteriaType=_criteriaType;
- (void).cxx_destruct;
- (void)loadMerchantsCountsByCateWithCateID:(int)arg1 finished:(CDUnknownBlockType)arg2;
- (void)loadMerchantsCountsByAreaWithCriteriaType:(int)arg1 criteriaID:(int)arg2 finished:(CDUnknownBlockType)arg3;
- (id)generateCateFingerPrint;
- (id)generateAreaFingerPrint;
@property(retain, nonatomic) MTCity *city;
- (id)init;

@end
