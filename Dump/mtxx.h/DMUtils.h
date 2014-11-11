//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DMUtils : NSObject
{
}

+ (long long)freeDiskSpaceInBytes;
+ (id)getImageFromMainBundleOrBundle:(id)arg1 withName:(id)arg2 withType:(id)arg3;
+ (id)getImageFromBundle:(id)arg1 orBundle:(id)arg2 withName:(id)arg3 withType:(id)arg4;
+ (id)getImageFromBundle:(id)arg1 withName:(id)arg2 withType:(id)arg3;
+ (id)getImageFromMainBundleWithName:(id)arg1 withType:(id)arg2;
+ (id)getAbsoluteRect:(id)arg1;
+ (id)chooseByLanguage:(id)arg1 international:(id)arg2;
+ (id)getErrorInfo:(id)arg1;
+ (id)getSDKCapabilities;
+ (BOOL)isAdTrackingEnable;
+ (id)getIdentifierForAdvertising;
+ (BOOL)isPad;
+ (BOOL)canApplicationSupportOrientation:(int)arg1;
+ (id)getDomobApSSID;
+ (id)getDomobApMacAddress;
+ (id)getDomobMacAddress;
+ (id)encrypt:(id)arg1;
+ (id)errorWithCode:(int)arg1 description:(id)arg2 domain:(id)arg3;
+ (id)errorWithCode:(int)arg1 description:(id)arg2;
+ (id)getInfoPlistDict;
+ (BOOL)getStatusBarStatus;

@end

