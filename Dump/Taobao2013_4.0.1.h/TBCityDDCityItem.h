//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityModel.h"

@class NSString;

@interface TBCityDDCityItem : TBCityModel
{
    float _latitude;
    float _longitude;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_cityAddress;
    BOOL _isSupport;
}

@property(nonatomic) BOOL isSupport; // @synthesize isSupport=_isSupport;
@property(retain, nonatomic) NSString *cityAddress; // @synthesize cityAddress=_cityAddress;
@property(retain, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(retain, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (void)setFromDictionary:(id)arg1;
- (id)dictionary;

@end

