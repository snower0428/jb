/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Portal-Structs.h"

@class NSString;

@interface PLCrashReporter : XXUnknownSuperclass {
@private
	BOOL _enabled;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _crashReportDirectory;
}
+(id)sharedReporter;
+(void)initialize;
-(void)setCrashCallbacks:(PLCrashReporterCallbacks*)callbacks;
-(id)generateLiveReportAndReturnError:(id*)error;
-(id)generateLiveReport;
-(BOOL)enableCrashReporterAndReturnError:(id*)error;
-(BOOL)enableCrashReporter;
-(BOOL)purgePendingCrashReportAndReturnError:(id*)error;
-(BOOL)purgePendingCrashReport;
-(id)loadPendingCrashReportDataAndReturnError:(id*)error;
-(id)loadPendingCrashReportData;
-(BOOL)hasPendingCrashReport;
-(id)crashReportPath;
-(id)queuedCrashReportDirectory;
-(id)crashReportDirectory;
-(BOOL)populateCrashReportDirectoryAndReturnError:(id*)error;
-(void)dealloc;
-(id)initWithBundle:(id)bundle;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier appVersion:(id)version;
@end
