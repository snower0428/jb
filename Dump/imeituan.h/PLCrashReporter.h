//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLCrashReporter : NSObject
{
    BOOL _enabled;
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    NSString *_applicationShortVersion;
    NSString *_crashReportDirectory;
}

+ (id)sharedReporter;
+ (void)initialize;
- (void)setCrashCallbacks:(struct PLCrashReporterCallbacks *)arg1;
- (id)generateLiveReportAndReturnError:(id *)arg1;
- (id)generateLiveReport;
- (BOOL)enableCrashReporterAndReturnError:(id *)arg1;
- (BOOL)enableCrashReporter;
- (BOOL)purgePendingCrashReportAndReturnError:(id *)arg1;
- (BOOL)purgePendingCrashReport;
- (id)loadPendingCrashReportDataAndReturnError:(id *)arg1;
- (id)loadPendingCrashReportData;
- (BOOL)hasPendingCrashReport;
- (id)crashReportPath;
- (id)queuedCrashReportDirectory;
- (id)crashReportDirectory;
- (BOOL)populateCrashReportDirectoryAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)initWithBundle:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 appVersion:(id)arg2 appShortVersion:(id)arg3;

@end

