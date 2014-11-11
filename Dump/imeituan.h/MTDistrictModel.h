//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTCityBasedModel.h"

@class MTCity;

@interface MTDistrictModel : MTBaseModel <MTCityBasedModel>
{
}

- (void)fetchDistrictListOfType:(id)arg1 inAreas:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchDistrictListOfType:(id)arg1 inDistricts:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)fetchDistrictListWithParameters:(id)arg1 finished:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) MTCity *city;

@end

