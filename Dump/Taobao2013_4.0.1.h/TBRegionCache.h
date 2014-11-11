//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TBRegionCache : NSObject
{
}

+ (id)getDistrictWithDivisionCode:(id)arg1;
+ (id)getCityWithDivisionCode:(id)arg1;
+ (id)getProvince;
+ (BOOL)addDistrict:(id)arg1 withDivisionCode:(id)arg2;
+ (BOOL)addCity:(id)arg1 withDivisionCode:(id)arg2;
+ (BOOL)addProvince:(id)arg1;
+ (void)dumpCache;
+ (BOOL)isLoaded;
+ (BOOL)loadCache;
+ (id)regionCachePath;
+ (void)copyRegionCacheFileToDocuments;

@end

