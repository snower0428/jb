//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKApplicationMetadata, GCKDeviceManager, NSError, NSString;

@protocol GCKDeviceManagerDelegate <NSObject>

@optional
- (void)deviceManager:(GCKDeviceManager *)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(BOOL)arg3;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveStatusForApplication:(GCKApplicationMetadata *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToStopApplicationWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didDisconnectFromApplicationWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToConnectToApplicationWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didConnectToCastApplication:(GCKApplicationMetadata *)arg2 sessionID:(NSString *)arg3 launchedApplication:(BOOL)arg4;
- (void)deviceManager:(GCKDeviceManager *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToConnectWithError:(NSError *)arg2;
- (void)deviceManagerDidConnect:(GCKDeviceManager *)arg1;
@end

