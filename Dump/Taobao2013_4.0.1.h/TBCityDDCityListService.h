//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityDDCityItem, TBCityDDCityModel, TBCityItemList;

@interface TBCityDDCityListService : TBCityService
{
    TBCityItemList *_cityItemList;
    TBCityDDCityItem *_gpsCityItem;
    TBCityDDCityModel *_cityModel;
}

@property(retain, nonatomic) TBCityDDCityModel *cityModel; // @synthesize cityModel=_cityModel;
@property(retain, nonatomic) TBCityDDCityItem *gpsCityItem; // @synthesize gpsCityItem=_gpsCityItem;
@property(retain, nonatomic) TBCityItemList *cityItemList; // @synthesize cityItemList=_cityItemList;
- (void).cxx_destruct;
- (void)dealloc;
- (void)getCityListWith:(id)arg1;

@end

