//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MASegment : NSObject
{
    NSString *startName;
    NSString *endName;
    NSString *busName;
    NSString *passDepotName;
    NSString *driverLength;
    NSString *footLength;
    NSString *passDepotCount;
    NSString *coordinateList;
    NSString *passDepotCoordinate;
}

@property(retain, nonatomic) NSString *passDepotCoordinate; // @synthesize passDepotCoordinate;
@property(retain, nonatomic) NSString *coordinateList; // @synthesize coordinateList;
@property(retain, nonatomic) NSString *passDepotCount; // @synthesize passDepotCount;
@property(retain, nonatomic) NSString *footLength; // @synthesize footLength;
@property(retain, nonatomic) NSString *driverLength; // @synthesize driverLength;
@property(retain, nonatomic) NSString *passDepotName; // @synthesize passDepotName;
@property(retain, nonatomic) NSString *busName; // @synthesize busName;
@property(retain, nonatomic) NSString *endName; // @synthesize endName;
@property(retain, nonatomic) NSString *startName; // @synthesize startName;
- (void).cxx_destruct;
- (int)type;
- (id)refinedBusName;
- (id)shortBusName;

@end
