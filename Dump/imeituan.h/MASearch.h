//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapSession;

@interface MASearch : NSObject
{
    id <MASearchDelegate> delegate;
    int timeOut;
    AMapSession *_session;
}

+ (id)maSearchWithDelegate:(id)arg1;
@property(retain, nonatomic) AMapSession *session; // @synthesize session=_session;
@property(nonatomic) int timeOut; // @synthesize timeOut;
@property(nonatomic) id <MASearchDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)onReverseGeocodingSearchCompleted:(id)arg1;
- (id)onGeoCodingSearchCompleted:(id)arg1;
- (id)onGPSOffsetSearchCompleted:(id)arg1;
- (id)onDistanceSearchCompleted:(id)arg1;
- (id)onBusLineSearchCompleted:(id)arg1;
- (id)onBusRouteSearchCompleted:(id)arg1;
- (id)onRouteSearchCompleted:(id)arg1;
- (id)onPOISearchCompleted:(id)arg1;
- (id)stripErrorInfo:(id)arg1;
- (id)stripResponseBody:(id)arg1;
- (void)reverseGeocodingSearchWithOption:(id)arg1;
- (void)geoCodingSearchWithOption:(id)arg1;
- (void)gpsOffsetSearchWithOption:(id)arg1;
- (void)distanceSearchWithOption:(id)arg1;
- (void)busLineSearchWithOption:(id)arg1;
- (void)footRouteSearchWithOption:(id)arg1;
- (void)busRouteSearchWithOption:(id)arg1;
- (void)routeSearchWithOption:(id)arg1;
- (void)poiSearchWithOption:(id)arg1;
- (void)getSession;
- (id)init;
- (id)initWithSearchKey:(id)arg1 Delegate:(id)arg2;

@end
