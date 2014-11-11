//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBHttpEngineDataDelegate.h"

@interface TBFlightFocusRequest : NSObject <TBHttpEngineDataDelegate>
{
    id <TBFlightFocusRequestDelegate> delegate;
}

@property(nonatomic) id <TBFlightFocusRequestDelegate> delegate; // @synthesize delegate;
- (void)httpEngineDidReceiveDataSuccessWithResponse:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleFocusFlightsResponse:(id)arg1;
- (id)parseFocusFlightFromDic:(id)arg1;
- (void)getAllFocusFlights;
- (void)removeFocusFlightByID:(id)arg1;
- (void)addFocusFlightWithDiscount:(id)arg1 earlyDepartDate:(id)arg2 lateDepartDate:(id)arg3 departCitycode:(id)arg4 arriveCitycode:(id)arg5;
- (void)sendRequestWithPath:(id)arg1 params:(id)arg2 method:(id)arg3;

@end

