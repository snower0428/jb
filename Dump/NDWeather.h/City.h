//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface City : NSObject
{
    int ID;
    int ItemNo;
    NSString *CityCode;
    NSString *CityName;
    NSString *AreaCode;
    NSString *ProvName;
    NSString *index;
    int type;
    int state;
    NSString *py;
}

@property(nonatomic) int state; // @synthesize state;
@property(nonatomic) int type; // @synthesize type;
@property(copy, nonatomic) NSString *index; // @synthesize index;
@property(copy, nonatomic) NSString *py; // @synthesize py;
@property(copy, nonatomic) NSString *ProvName; // @synthesize ProvName;
@property(copy, nonatomic) NSString *AreaCode; // @synthesize AreaCode;
@property(copy, nonatomic) NSString *CityName; // @synthesize CityName;
@property(copy, nonatomic) NSString *CityCode; // @synthesize CityCode;
@property(nonatomic) int ItemNo; // @synthesize ItemNo;
@property(nonatomic) int ID; // @synthesize ID;
- (void)dealloc;
- (id)init;

@end
