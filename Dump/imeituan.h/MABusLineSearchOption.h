//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MABusLineSearchOption : NSObject
{
    NSString *config;
    NSString *resType;
    NSString *encode;
    NSString *cityCode;
    NSString *ids;
    NSString *busName;
    NSString *stationName;
    NSString *number;
    NSString *batch;
    NSString *resData;
}

@property(retain, nonatomic) NSString *resData; // @synthesize resData;
@property(retain, nonatomic) NSString *batch; // @synthesize batch;
@property(retain, nonatomic) NSString *number; // @synthesize number;
@property(retain, nonatomic) NSString *stationName; // @synthesize stationName;
@property(retain, nonatomic) NSString *busName; // @synthesize busName;
@property(retain, nonatomic) NSString *ids; // @synthesize ids;
@property(retain, nonatomic) NSString *cityCode; // @synthesize cityCode;
@property(retain, nonatomic) NSString *encode; // @synthesize encode;
@property(retain, nonatomic) NSString *resType; // @synthesize resType;
@property(retain, nonatomic) NSString *config; // @synthesize config;
- (void).cxx_destruct;
- (id)init;

@end

