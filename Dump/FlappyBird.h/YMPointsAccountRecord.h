//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface YMPointsAccountRecord : NSObject
{
    NSString *_name;
    int _points;
    NSString *_orderID;
    NSString *_userID;
    NSString *_storeID;
    int _channel;
    double _timeStamp;
}

@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(nonatomic) int channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *orderID; // @synthesize orderID=_orderID;
@property(nonatomic) int points; // @synthesize points=_points;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)toOpenDictionary;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1;

@end

