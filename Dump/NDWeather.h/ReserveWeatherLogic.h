//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface ReserveWeatherLogic : NSObject
{
}

+ (id)getWeather:(id)arg1;
+ (id)getWeatherImgage:(id)arg1;
+ (id)parseWindLevel:(id)arg1;
+ (id)parseWind:(id)arg1;
+ (id)getSysdate;
+ (id)parseElement:(id)arg1;
+ (id)parseTodayWeather:(id)arg1;
+ (id)parseForecastDictionary:(id)arg1;
+ (id)createYesterdayWeather:(id)arg1;
+ (id)parseForecastArray:(id)arg1;
+ (id)parseForecastWeather:(id)arg1;
+ (void)saveReserveWeatherResponse:(id)arg1 forCityCode:(id)arg2;

@end
