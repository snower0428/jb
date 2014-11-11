//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSString;

@interface MTCity : NSManagedObject
{
}

+ (id)cityData;
- (id)description;
- (id)dictionary;
- (void)setWithDictionary:(id)arg1;

// Remaining properties
@property(nonatomic) int cityID; // @dynamic cityID;
@property(retain, nonatomic) NSString *cityName; // @dynamic cityName;
@property(retain, nonatomic) NSString *districtName; // @dynamic districtName;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) BOOL open; // @dynamic open;
@property(copy, nonatomic) NSString *pinyin; // @dynamic pinyin;
@property(retain, nonatomic) NSString *provinceName; // @dynamic provinceName;

@end

