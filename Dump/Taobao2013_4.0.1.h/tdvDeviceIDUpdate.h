//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface tdvDeviceIDUpdate : NSObject
{
}

+ (void)updateDeviceIDWithResultHandler:(CDUnknownBlockType)arg1;
+ (void)sendUpdatedDeviceInfoToServerWithResultHandler:(CDUnknownBlockType)arg1;
+ (void)reset;
+ (void)getStoredDeviceHashWithResultHandler:(CDUnknownBlockType)arg1;
+ (id)deviceHashCacheSingleton;

@end
