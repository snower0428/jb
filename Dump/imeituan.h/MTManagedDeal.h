//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "MTDeal.h"

@class MTDealReview, NSArray, NSDate, NSOrderedSet, NSSet, NSString;

@interface MTManagedDeal : NSManagedObject <MTDeal>
{
    NSString *stid;
}

@property(retain, nonatomic) NSString *stid; // @synthesize stid;
- (void).cxx_destruct;
- (void)setWithDomainObject:(id)arg1;
@property(retain, nonatomic) NSArray *hotelServiceInfos; // @dynamic hotelServiceInfos;
@property(retain, nonatomic) NSArray *packageArray; // @dynamic packageArray;
@property(retain, nonatomic) NSArray *noticeArray; // @dynamic noticeArray;
@property(retain, nonatomic) MTDealReview *review; // @dynamic review;

// Remaining properties
@property(retain, nonatomic) NSString *announcementTitle; // @dynamic announcementTitle;
@property(nonatomic) int appleLottery; // @dynamic appleLottery;
@property(nonatomic) BOOL available; // @dynamic available;
@property(nonatomic) int branchCount; // @dynamic branchCount;
@property(retain, nonatomic) NSString *branchLocations; // @dynamic branchLocations;
@property(retain, nonatomic) NSOrderedSet *branches; // @dynamic branches;
@property(retain, nonatomic) NSString *brandName; // @dynamic brandName;
@property(retain, nonatomic) NSString *businessDistrict; // @dynamic businessDistrict;
@property(retain, nonatomic) NSString *categories; // @dynamic categories;
@property(retain, nonatomic) NSString *couponTitle; // @dynamic couponTitle;
@property(nonatomic) int dealID; // @dynamic dealID;
@property(nonatomic) int dealType; // @dynamic dealType;
@property(retain, nonatomic) NSString *detailHTMLString; // @dynamic detailHTMLString;
@property(retain, nonatomic) NSDate *endTime; // @dynamic endTime;
@property(nonatomic) BOOL fakeRefund; // @dynamic fakeRefund;
@property(nonatomic) int hotelReservationType; // @dynamic hotelReservationType;
@property(retain, nonatomic) NSString *imageURLString; // @dynamic imageURLString;
@property(nonatomic) BOOL lightning; // @dynamic lightning;
@property(retain, nonatomic) NSString *merchantName; // @dynamic merchantName;
@property(retain, nonatomic) NSString *merchantURLString; // @dynamic merchantURLString;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(retain, nonatomic) NSSet *orders; // @dynamic orders;
@property(nonatomic) double originalPrice; // @dynamic originalPrice;
@property(nonatomic) int personLimit; // @dynamic personLimit;
@property(nonatomic) double price; // @dynamic price;
@property(nonatomic) int ratedUserCount; // @dynamic ratedUserCount;
@property(nonatomic) double rating; // @dynamic rating;
@property(nonatomic) int redeemType; // @dynamic redeemType;
@property(nonatomic) int refundType; // @dynamic refundType;
@property(nonatomic) BOOL reservationRequired; // @dynamic reservationRequired;
@property(nonatomic) int sales; // @dynamic sales;
@property(nonatomic) double satisfaction; // @dynamic satisfaction;
@property(nonatomic) BOOL sevenRefund; // @dynamic sevenRefund;
@property(retain, nonatomic) NSString *slug; // @dynamic slug;
@property(retain, nonatomic) NSString *smsTitle; // @dynamic smsTitle;
@property(retain, nonatomic) NSDate *startTime; // @dynamic startTime;
@property(retain, nonatomic) NSString *subCategories; // @dynamic subCategories;
@property(nonatomic) BOOL supportOnlineReservation; // @dynamic supportOnlineReservation;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end
