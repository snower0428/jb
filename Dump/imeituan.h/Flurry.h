//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface Flurry : NSObject
{
}

+ (BOOL)sendUsageInfo;
+ (void)setShowErrorInLogEnabled:(BOOL)arg1;
+ (void)setPushToken:(id)arg1;
+ (void)setAge:(int)arg1;
+ (void)setGender:(id)arg1;
+ (void)setBackgroundSessionEnabled:(BOOL)arg1;
+ (void)setSessionReportsOnPauseEnabled:(BOOL)arg1;
+ (void)setSessionReportsOnCloseEnabled:(BOOL)arg1;
+ (void)setCrashReportingEnabled:(BOOL)arg1;
+ (void)setSecureTransportEnabled:(BOOL)arg1;
+ (void)setAppCloudServerToStaging:(BOOL)arg1;
+ (void)setServerURL:(id)arg1;
+ (void)setEventLoggingEnabled:(BOOL)arg1;
+ (void)setUserID:(id)arg1;
+ (void)logPageView;
+ (void)logAllPageViews:(id)arg1;
+ (void)logError:(id)arg1 message:(id)arg2 error:(id)arg3;
+ (void)logError:(id)arg1 message:(id)arg2 exception:(id)arg3;
+ (void)endTimedEvent:(id)arg1 withParameters:(id)arg2;
+ (void)logEvent:(id)arg1 withParameters:(id)arg2 timed:(BOOL)arg3;
+ (void)logEvent:(id)arg1 timed:(BOOL)arg2;
+ (void)logEvent:(id)arg1 withParameters:(id)arg2;
+ (void)logEvent:(id)arg1;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillEnterForeground;
+ (void)pauseSession;
+ (void)pauseBackgroundSession;
+ (void)endSession;
+ (void)setLatitude:(double)arg1 longitude:(double)arg2 horizontalAccuracy:(float)arg3 verticalAccuracy:(float)arg4;
+ (void)startSession:(id)arg1;
+ (void)startSession:(id)arg1 withOptions:(id)arg2;
+ (void)createAndSendSession;
+ (void)applicationWillResignActive;
+ (void)setMaxSessionsSaved:(int)arg1;
+ (void)setSessionContinueSeconds:(int)arg1;
+ (int)sessionContinueSeconds;
+ (void)setDebugLogEnabled:(BOOL)arg1;
+ (void)setLogLevel:(int)arg1;
+ (id)getFlurryAgentVersion;
+ (void)parseDictionary:(id)arg1;
+ (void)parsePropertyList:(id)arg1;
+ (void)setLaunchOptions:(id)arg1;
+ (void)setAppVersion:(id)arg1;

@end
