//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FlurryUtil : NSObject
{
}

+ (id)allCounters;
+ (void)printCounters;
+ (void)decrementCounter:(id)arg1;
+ (void)decrementCounter:(id)arg1 locationName:(char *)arg2;
+ (void)incrementCounter:(id)arg1;
+ (void)incrementCounter:(id)arg1 locationName:(char *)arg2;
+ (id)preferredLanguage;
+ (id)getCFUUIDBasedUIDWithChecksum:(id)arg1;
+ (id)generateCFUUIDBasedUID;
+ (id)getCFUUIDBasedUIDAndStatus:(int *)arg1;
+ (id)generateCFUUID;
+ (unsigned int)generateCFUUIDBasedUIDChecksum:(id)arg1;
+ (BOOL)isAdTrackingEnabled;
+ (void)storeIdentifierForVendor:(id)arg1;
+ (id)getStoredIdentifierForVendor;
+ (id)getIdentifierForVendor;
+ (id)getIdentifierForAdvertiser;
+ (id)getMACUID;
+ (id)getMACBasedUID;
+ (id)MACString;
+ (id)hashDataToHexString:(char *)arg1 length:(int)arg2;
+ (id)hashData:(id)arg1;
+ (id)iTunesMetadataPlist;
+ (BOOL)appIsCracked;
+ (BOOL)deviceIsJailbroken;
+ (int)deviceCPUFrequency;
+ (int)deviceMemory;
+ (id)devicePlatform;
+ (id)filePathDirectory;
+ (id)oldFilePathDirectoryUptilAgentVersion109;
+ (BOOL)isKeyWindowAlertView;
+ (struct _NSRange)flurryRangeOfData:(id)arg1 inData:(id)arg2;
+ (id)createParamKeysDictFromUrlParams:(id)arg1 paramsHeader:(id *)arg2 paramsKVString:(id *)arg3;
+ (int)dataChecksum:(id)arg1;
+ (void)generateChecksumTable;
+ (BOOL)theAppIsActive;
+ (BOOL)viewIsVisible:(id)arg1;
+ (id)encodeToPercentEscapeString:(id)arg1;
+ (id)decodeFromPercentEscapeString:(id)arg1;
+ (BOOL)addSkipBackupAttributeToItemAtURL:(id)arg1;
+ (int)getSystemVersionAsAnInteger;
+ (BOOL)addToSet:(id)arg1 obj:(id)arg2;
+ (BOOL)isRetina;
+ (BOOL)isIPad;
+ (id)convertStrToNum:(id)arg1;
+ (void)removeViewFromSuperview:(id)arg1;
+ (int)currentInterfaceOrientation;
+ (BOOL)canvasInPortraitUpsideDown;
+ (BOOL)canvasInLandscapeLeft;
+ (BOOL)canvasInLandscapeRight;
+ (BOOL)canvasInLandscape;
+ (id)getCanvasOrientation;
+ (BOOL)canvasInPortraitUpsideDown:(id)arg1;
+ (BOOL)canvasInLandscapeLeft:(id)arg1;
+ (BOOL)canvasInLandscapeRight:(id)arg1;
+ (BOOL)canvasInLandscape:(id)arg1;
+ (struct CGRect)screenBounds;
+ (struct CGRect)screenBounds:(id)arg1;
+ (id)getOrientationStrFromInterfaceOrientation:(int)arg1;
+ (id)safeUnarchiveObjectWithFile:(id)arg1;
+ (void)handleException:(id)arg1;
+ (void)setShowErrorInLogEnabled:(BOOL)arg1;
+ (int)logLevel;
+ (void)setLogLevel:(int)arg1;
+ (void)assertThreadIsNotMain;

@end

