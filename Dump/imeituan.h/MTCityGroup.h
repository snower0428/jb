//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface MTCityGroup : NSObject
{
    NSMutableArray *_cities;
    NSString *_title;
    NSString *_titleIndex;
    int _cityType;
}

@property(nonatomic) int cityType; // @synthesize cityType=_cityType;
@property(copy, nonatomic) NSString *titleIndex; // @synthesize titleIndex=_titleIndex;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *cities;
- (id)description;
- (void)clearCities;
- (void)addCity:(id)arg1;
- (id)init;

@end

