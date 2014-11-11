//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MTA4QCConfig : NSObject
{
    unsigned int _maxStoreEventCount;
    unsigned int _maxSendRetryCount;
    NSString *_channel;
    int _reportStrategy;
    unsigned int _sendPeriodMinutes;
    unsigned int _minBatchReportCount;
    unsigned int _maxParallelTimingEvents;
    unsigned int _maxLoadEventCount;
    BOOL _smartReporting;
    NSString *_qq;
    BOOL _autoExceptionCaught;
    NSString *_appkey;
    BOOL _debugEnable;
    BOOL _statEnable;
    unsigned int _sessionTimeoutSecs;
}

+ (id)getInstance;
@property unsigned int sessionTimeoutSecs; // @synthesize sessionTimeoutSecs=_sessionTimeoutSecs;
@property BOOL statEnable; // @synthesize statEnable=_statEnable;
@property BOOL debugEnable; // @synthesize debugEnable=_debugEnable;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property BOOL autoExceptionCaught; // @synthesize autoExceptionCaught=_autoExceptionCaught;
@property(retain, nonatomic) NSString *qq; // @synthesize qq=_qq;
@property BOOL smartReporting; // @synthesize smartReporting=_smartReporting;
@property unsigned int maxLoadEventCount; // @synthesize maxLoadEventCount=_maxLoadEventCount;
@property unsigned int maxParallelTimingEvents; // @synthesize maxParallelTimingEvents=_maxParallelTimingEvents;
@property unsigned int minBatchReportCount; // @synthesize minBatchReportCount=_minBatchReportCount;
@property unsigned int sendPeriodMinutes; // @synthesize sendPeriodMinutes=_sendPeriodMinutes;
@property int reportStrategy; // @synthesize reportStrategy=_reportStrategy;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property unsigned int maxSendRetryCount; // @synthesize maxSendRetryCount=_maxSendRetryCount;
@property unsigned int maxStoreEventCount; // @synthesize maxStoreEventCount=_maxStoreEventCount;
- (void).cxx_destruct;
- (id)getCustomProperty:(id)arg1 default:(id)arg2;
- (id)init;

@end
