//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTOPRequestDelegate.h"

@class NSArray, NSMutableDictionary, NSString, TBTOPRequest;

@interface JuCityManager : NSObject <TBTOPRequestDelegate>
{
    TBTOPRequest *_request;
    NSMutableDictionary *_cities;
    NSArray *_cityList;
    NSString *_updateGPSCity;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *updateGPSCity; // @synthesize updateGPSCity=_updateGPSCity;
@property(retain, nonatomic) NSArray *cityList; // @synthesize cityList=_cityList;
- (void)saveCityLocal;
- (void)loadCityFromLocal;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)gpsUpdateToCity:(id)arg1;
- (void)fetchCities;
- (void)requestDidFailed:(id)arg1;
- (void)requestDidFinished:(id)arg1;
- (void)dealloc;

@end

