//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString, TBFlight, TBFlightInsurance, TBTicketActivity;

@interface TBFlightOrderForm : NSObject
{
    NSString *departDate;
    TBFlight *flight;
    NSString *departContactName;
    NSString *departContactPhone;
    NSString *trafficAddress;
    NSString *trafficPostCode;
    NSString *trafficPhone;
    NSString *trafficReceiver;
    NSMutableArray *departPassengers;
    BOOL _isXingChengDanPost;
    BOOL _isInsureProfit;
    NSString *checkcodeId;
    NSString *checkCode;
    NSNumber *promotionType;
    NSString *trafficAddressId;
    TBTicketActivity *_activityEvent;
    TBFlightInsurance *_insuranceParams;
}

+ (id)shareTBFlightOrderForm;
@property(nonatomic) BOOL isInsureProfit; // @synthesize isInsureProfit=_isInsureProfit;
@property(retain, nonatomic) TBFlightInsurance *insuranceParams; // @synthesize insuranceParams=_insuranceParams;
@property(nonatomic) BOOL isXingChengDanPost; // @synthesize isXingChengDanPost=_isXingChengDanPost;
@property(retain, nonatomic) TBTicketActivity *activityEvent; // @synthesize activityEvent=_activityEvent;
@property(copy, nonatomic) NSString *trafficAddressId; // @synthesize trafficAddressId;
@property(copy, nonatomic) NSNumber *promotionType; // @synthesize promotionType;
@property(copy, nonatomic) NSString *checkCode; // @synthesize checkCode;
@property(copy, nonatomic) NSString *checkcodeId; // @synthesize checkcodeId;
@property(retain, nonatomic) TBFlight *flight; // @synthesize flight;
@property(copy, nonatomic) NSString *trafficReceiver; // @synthesize trafficReceiver;
@property(copy, nonatomic) NSString *trafficPostCode; // @synthesize trafficPostCode;
@property(copy, nonatomic) NSString *trafficPhone; // @synthesize trafficPhone;
@property(copy, nonatomic) NSString *trafficAddress; // @synthesize trafficAddress;
@property(copy, nonatomic) NSString *departContactPhone; // @synthesize departContactPhone;
@property(copy, nonatomic) NSString *departContactName; // @synthesize departContactName;
@property(retain, nonatomic) NSMutableArray *departPassengers; // @synthesize departPassengers;
@property(copy, nonatomic) NSString *departDate; // @synthesize departDate;
- (void).cxx_destruct;
- (int)insuranceCount:(int)arg1 Passengers:(id)arg2;
- (void)resetFlightOrderForm;
- (id)passengersDescription;
- (id)init;

@end

