//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "MTMerchant.h"

@class NSArray, NSOrderedSet, NSString;

@interface MTManagedMerchant : NSManagedObject <MTMerchant>
{
}

- (void)setWithDomainObject:(id)arg1;
@property(retain, nonatomic) NSArray *categoryIDArray; // @dynamic categoryIDArray;
@property(retain, nonatomic) NSArray *subwayStationIDs; // @dynamic subwayStationIDs;

// Remaining properties
@property(retain, nonatomic) NSString *address; // @dynamic address;
@property(nonatomic) int areaID; // @dynamic areaID;
@property(copy, nonatomic) NSString *areaName; // @dynamic areaName;
@property(nonatomic) double averagePrice; // @dynamic averagePrice;
@property(nonatomic) int bizLoginID; // @dynamic bizLoginID;
@property(nonatomic) int categoryID; // @dynamic categoryID;
@property(copy, nonatomic) NSString *categoryName; // @dynamic categoryName;
@property(nonatomic) BOOL chooseSeat; // @dynamic chooseSeat;
@property(nonatomic) int cityID; // @dynamic cityID;
@property(retain, nonatomic) NSString *coverPhotoURL; // @dynamic coverPhotoURL;
@property(retain, nonatomic) NSOrderedSet *deals; // @dynamic deals;
@property(retain, nonatomic) NSString *featuredDishes; // @dynamic featuredDishes;
@property(nonatomic) BOOL hasDeals; // @dynamic hasDeals;
@property(retain, nonatomic) NSString *introduction; // @dynamic introduction;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(nonatomic) double lowestPrice; // @dynamic lowestPrice;
@property(nonatomic) int merchantType; // @dynamic merchantType;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSString *parking; // @dynamic parking;
@property(retain, nonatomic) NSString *phone; // @dynamic phone;
@property(nonatomic) int poiID; // @dynamic poiID;
@property(nonatomic) BOOL preferential; // @dynamic preferential;
@property(nonatomic) double rating; // @dynamic rating;
@property(nonatomic) int reviewCount; // @dynamic reviewCount;
@property(retain, nonatomic) NSString *style; // @dynamic style;
@property(nonatomic) BOOL wifi; // @dynamic wifi;

@end

