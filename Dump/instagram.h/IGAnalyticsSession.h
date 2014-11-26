//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString;

@interface IGAnalyticsSession : NSObject
{
    NSString *_sessionID;
    unsigned int _sequence;
    NSString *_deviceID;
    NSString *_appID;
    NSString *_userID;
    NSString *_facebookID;
    NSDate *_startTime;
    NSMutableArray *_currentBatch;
}

@property(readonly, nonatomic) NSMutableArray *currentBatch; // @synthesize currentBatch=_currentBatch;
@property(readonly, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *facebookID; // @synthesize facebookID=_facebookID;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (id)appVersionString;
- (id)loggingParametersForCurrentBatchWithTimeStamp:(double)arg1;
- (id)loggingDataForCurrentBatchWithTimeStamp:(double)arg1;
- (void)beginNewBatch;
- (void)appendEventsFromSession:(id)arg1;
- (void)addEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 uuid:(id)arg4 timestamp:(double)arg5;
- (id)initWithAppID:(id)arg1 deviceID:(id)arg2 userID:(id)arg3 facebookID:(id)arg4;

@end

