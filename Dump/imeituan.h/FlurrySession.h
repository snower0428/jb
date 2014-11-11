//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IFlurrySession.h"
#import "NSCoding.h"

@class NSData, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface FlurrySession : NSObject <IFlurrySession, NSCoding>
{
    BOOL _crashed;
    NSData *_crashReportData;
    NSDate *_startTime;
    NSString *_apiKey;
    double _latitude;
    double _longitude;
    float _accuracy;
    NSString *_appVersion;
    int _pageViewCount;
    NSDate *_endTime;
    NSMutableArray *_purchaseItems;
    NSDate *_resumeTime;
    NSDate *_pauseTime;
    long long _totalPauseIntervalMillis;
    NSMutableDictionary *_eventCounts;
    NSMutableArray *_pendingEventLog;
    NSMutableArray *_eventLog;
    BOOL _eventLogComplete;
    NSMutableArray *_errors;
    int _totalErrorCount;
    NSString *_locale;
    NSString *_timeZone;
    int _gender;
    NSString *_pushToken;
    int _serializationVersion;
    NSString *_userID;
    BOOL _eventLoggingEnabled;
    BOOL _sessionReportsOnCloseEnabled;
    BOOL _sessionReportsOnPauseEnabled;
    BOOL _crashReportingEnabled;
    NSDate *_age;
}

+ (double)reduceLocationPrecision:(double)arg1;
+ (id)initialTimestampFilePath;
+ (id)oldInitialTimestampFilePathUptilAgentVersion109;
+ (id)currentSessionFilePath;
+ (void)removeCurrentSessionFile;
+ (id)sessionsFilePath;
+ (void)setMaxSessions:(int)arg1;
+ (id)removeOldSessionsIfNecessary:(id)arg1;
+ (void)addToSavedSessions:(id)arg1;
+ (void)setSavedSessions:(id)arg1;
+ (id)savedSessions;
+ (id)currentSession;
+ (void)setupCurrentSessionWithKey:(id)arg1;
+ (id)sessionWithApiKey:(id)arg1 startTime:(id)arg2;
+ (id)getAgentVersion;
+ (id)getAgentVersionWithBuild;
@property(retain, nonatomic) NSDate *age; // @synthesize age=_age;
@property(nonatomic) BOOL eventLoggingEnabled; // @synthesize eventLoggingEnabled=_eventLoggingEnabled;
@property(nonatomic) int serializationVersion; // @synthesize serializationVersion=_serializationVersion;
@property(readonly, nonatomic) NSString *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) int totalErrorCount; // @synthesize totalErrorCount=_totalErrorCount;
@property(retain, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(nonatomic) BOOL eventLogComplete; // @synthesize eventLogComplete=_eventLogComplete;
@property(retain, nonatomic) NSMutableArray *eventLog; // @synthesize eventLog=_eventLog;
@property(retain, nonatomic) NSMutableArray *pendingEventLog; // @synthesize pendingEventLog=_pendingEventLog;
@property(retain, nonatomic) NSMutableDictionary *eventCounts; // @synthesize eventCounts=_eventCounts;
@property(nonatomic) long long totalPauseIntervalMillis; // @synthesize totalPauseIntervalMillis=_totalPauseIntervalMillis;
@property(retain) NSDate *pauseTime; // @synthesize pauseTime=_pauseTime;
@property(retain) NSDate *resumeTime; // @synthesize resumeTime=_resumeTime;
@property(retain, nonatomic) NSMutableArray *purchaseItems; // @synthesize purchaseItems=_purchaseItems;
@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(nonatomic) int pageViewCount; // @synthesize pageViewCount=_pageViewCount;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) float accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSData *crashReportData; // @synthesize crashReportData=_crashReportData;
@property BOOL crashed; // @synthesize crashed=_crashed;
- (void)dealloc;
- (long long)sessionLength;
- (long long)timeIntervalSinceSessionStart:(id)arg1;
- (BOOL)sentReportSuccessful;
- (id)initialTimestamp;
- (BOOL)isPaused;
- (id)dataForSessions:(id)arg1;
- (id)data;
- (void)sendSessionsToServerIncludingCurrentSession:(BOOL)arg1;
- (void)sendSessionsToServerForCreateSession;
- (void)saveToDisk;
- (void)mergeValidPendingEventLog;
- (void)mergePendingEventLog;
- (void)putEventIntoLog:(id)arg1;
- (void)recordPurchaseItem:(id)arg1;
- (void)recordError:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 liveReport:(id)arg5;
- (void)recordError:(id)arg1 message:(id)arg2 error:(id)arg3 liveReport:(id)arg4;
- (void)recordError:(id)arg1 message:(id)arg2 exception:(id)arg3 liveReport:(id)arg4;
- (void)endTimedEvents;
- (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
- (void)recordEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3;
- (void)recordEvent:(id)arg1 withParameters:(id)arg2;
- (void)setAgeInYears:(int)arg1;
- (void)setGenderAsString:(id)arg1;
- (void)setPushToken:(id)arg1;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)maybeIncrementPageView;
- (void)finishSession;
- (void)endSession;
- (void)archiveSession;
- (void)resumeSession;
- (void)markSessionAsResuming;
- (void)pauseSession;
- (void)resetSessionData;
- (id)initWithAPIKey:(id)arg1 appVersion:(id)arg2 startDate:(id)arg3;
@property(nonatomic) BOOL crashReportingEnabled; // @synthesize crashReportingEnabled=_crashReportingEnabled;
@property(nonatomic) BOOL sessionReportsOnPauseEnabled; // @synthesize sessionReportsOnPauseEnabled=_sessionReportsOnPauseEnabled;
@property(nonatomic) BOOL sessionReportsOnCloseEnabled; // @synthesize sessionReportsOnCloseEnabled=_sessionReportsOnCloseEnabled;
- (id)sessionWithNewEventsWithApiKey:(id)arg1 startTime:(id)arg2;

@end

