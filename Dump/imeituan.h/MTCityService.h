//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

@class MTCityDAO, MTCityModel, NSMutableArray;

@interface MTCityService : MTBaseService
{
    MTCityDAO *_cityDAO;
    MTCityModel *_cityModel;
    NSMutableArray *_recentCityList;
}

- (void).cxx_destruct;
- (void)updateRecentCityWithName:(id)arg1;
- (id)recentCityList;
- (void)findCityWithId:(int)arg1 Result:(CDUnknownBlockType)arg2;
- (void)loadCityWithName:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)loadCityListWithNamePrefix:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)loadCityList:(CDUnknownBlockType)arg1;
- (id)cityModel;
- (id)init;

@end

