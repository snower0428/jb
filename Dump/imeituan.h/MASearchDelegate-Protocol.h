//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MABusLineSearchOption, MABusLineSearchResult, MABusRouteSearchOption, MABusRouteSearchResult, MADistanceSearchOption, MADistanceSearchResult, MAFootRouteSearchOption, MAFootRouteSearchResult, MAGeoCodingSearchOption, MAGeoCodingSearchResult, MAPoiSearchOption, MAPoiSearchResult, MARGCSearchOption, MARGCSearchResult, MAReverseGeocodingSearchOption, MAReverseGeocodingSearchResult, MARouteSearchOption, MARouteSearchResult, NSString;

@protocol MASearchDelegate <NSObject>

@optional
- (void)reverseGeocodingSearch:(MAReverseGeocodingSearchOption *)arg1 Result:(MAReverseGeocodingSearchResult *)arg2;
- (void)geoCodingSearch:(MAGeoCodingSearchOption *)arg1 Result:(MAGeoCodingSearchResult *)arg2;
- (void)gpsOffsetSearch:(MARGCSearchOption *)arg1 Result:(MARGCSearchResult *)arg2;
- (void)busLineSearch:(MABusLineSearchOption *)arg1 Result:(MABusLineSearchResult *)arg2;
- (void)distanceSearch:(MADistanceSearchOption *)arg1 Result:(MADistanceSearchResult *)arg2;
- (void)footRouteSearch:(MAFootRouteSearchOption *)arg1 Result:(MAFootRouteSearchResult *)arg2;
- (void)busRouteSearch:(MABusRouteSearchOption *)arg1 Result:(MABusRouteSearchResult *)arg2;
- (void)routeSearch:(MARouteSearchOption *)arg1 Result:(MARouteSearchResult *)arg2;
- (void)poiSearch:(MAPoiSearchOption *)arg1 Result:(MAPoiSearchResult *)arg2;
- (void)search:(id)arg1 Error:(NSString *)arg2;
- (NSString *)keyForSearch;
@end

