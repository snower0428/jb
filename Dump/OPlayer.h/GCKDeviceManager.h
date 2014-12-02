//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCKCastChannelHandler.h"
#import "GCKCastSocketDelegate.h"
#import "GCKDeviceAuthChannelDelegate.h"
#import "GCKHeartbeatChannelDelegate.h"
#import "GCKReceiverControlChannelDelegate.h"

@class GCKApplicationMetadata, GCKCastSocket, GCKConnectionControlChannel, GCKDevice, GCKDeviceAuthChannel, GCKHeartbeatChannel, GCKReceiverControlChannel, NSError, NSMutableDictionary, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface GCKDeviceManager : NSObject <GCKCastSocketDelegate, GCKCastChannelHandler, GCKDeviceAuthChannelDelegate, GCKReceiverControlChannelDelegate, GCKHeartbeatChannelDelegate>
{
    NSString *_sourceID;
    NSMutableDictionary *_channels;
    GCKCastSocket *_socket;
    int _nextRequestID;
    double _inactivityTimeout;
    NSString *_currentAppTransportID;
    GCKApplicationMetadata *_currentAppMetadata;
    NSString *_applicationIDToJoin;
    NSString *_sessionIDToJoin;
    NSString *_pausedAppID;
    NSString *_pausedSessionID;
    int _stopAppRequestID;
    BOOL _isRegisteredForAppStateNotifications;
    NSTimer *_joinAppTimeoutTimer;
    NSTimer *_stopAppTimeoutTimer;
    NSTimer *_reconnectTimeoutTimer;
    NSTimer *_nextConnectionAttemptTimer;
    BOOL _shouldLaunchIfJoinFails;
    BOOL _isStoppingApp;
    NSError *_disconnectionError;
    NSError *_reconnectCauseError;
    double _reconnectStartIntervalSince1970;
    double _lastConnectAttemptIntervalSince1970;
    BOOL _isConnected;
    BOOL _isConnectedToApp;
    BOOL _isReconnecting;
    BOOL _isConnecting;
    BOOL _isPaused;
    GCKDevice *_device;
    id <GCKDeviceManagerDelegate> _delegate;
    id <GCKDeviceManagerDelegateInternal> _internalDelegate;
    GCKConnectionControlChannel *_connectionControlChannel;
    GCKDeviceAuthChannel *_deviceAuthChannel;
    GCKHeartbeatChannel *_heartbeatChannel;
    GCKReceiverControlChannel *_receiverControlChannel;
    double _reconnectTimeout;
}

@property(retain, nonatomic) GCKReceiverControlChannel *receiverControlChannel; // @synthesize receiverControlChannel=_receiverControlChannel;
@property(retain, nonatomic) GCKHeartbeatChannel *heartbeatChannel; // @synthesize heartbeatChannel=_heartbeatChannel;
@property(retain, nonatomic) GCKDeviceAuthChannel *deviceAuthChannel; // @synthesize deviceAuthChannel=_deviceAuthChannel;
@property(retain, nonatomic) GCKConnectionControlChannel *connectionControlChannel; // @synthesize connectionControlChannel=_connectionControlChannel;
@property(nonatomic) BOOL isPaused; // @synthesize isPaused=_isPaused;
@property(nonatomic) BOOL isConnecting; // @synthesize isConnecting=_isConnecting;
@property(nonatomic) __weak id <GCKDeviceManagerDelegateInternal> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(nonatomic) __weak id <GCKDeviceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GCKDevice *device; // @synthesize device=_device;
@property(nonatomic) double reconnectTimeout; // @synthesize reconnectTimeout=_reconnectTimeout;
@property(nonatomic) BOOL isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(nonatomic) BOOL isConnectedToApp; // @synthesize isConnectedToApp=_isConnectedToApp;
@property(nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
- (void).cxx_destruct;
- (void)heartbeatChannelDidTimeout:(id)arg1;
- (void)startNextConnectionAttempt:(id)arg1;
- (void)reconnectTimeoutTimerDidFire:(id)arg1;
- (void)stopAppTimeoutTimerDidFire:(id)arg1;
- (void)joinAppTimeoutTimerDidFire:(id)arg1;
- (void)deviceAuthChannel:(id)arg1 didFailToAuthenticateWithError:(id)arg2;
- (void)deviceAuthChannelDidAuthenticate:(id)arg1;
- (void)notifyDidFailToStopAppWithError:(id)arg1;
- (void)notifyDidFailToConnectToAppWithError:(id)arg1;
- (void)disconnectFromApplicationAndNotifyWithError:(id)arg1;
- (void)notifyDidConnectToApplication:(id)arg1 launchedApplication:(BOOL)arg2;
- (void)connectAndNotifyDidConnectToApplication:(id)arg1 launchedApplication:(BOOL)arg2;
- (void)receiverControlChannel:(id)arg1 didReceiveAppAvailability:(id)arg2;
- (void)receiverControlChannel:(id)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(BOOL)arg3;
- (void)receiverControlChannel:(id)arg1 didReceiveStatusForApplication:(id)arg2;
- (void)receiverControlChannel:(id)arg1 requestDidFailWithID:(int)arg2 error:(id)arg3;
- (void)receiverControlChannel:(id)arg1 didFailToLaunchCastApplicationWithError:(id)arg2;
- (void)receiverControlChannel:(id)arg1 didLaunchCastApplication:(id)arg2;
- (void)castSocket:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)cancelPendingRequestsWithError:(id)arg1;
- (void)castSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)notifyDidFailToConnectWithError:(id)arg1;
- (void)castSocket:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)castSocket:(id)arg1 didConnectWithPeerSecTrust:(struct __SecTrust *)arg2;
- (void)notifyReconnectFailedWithError:(id)arg1;
- (void)connectToReceiverChannel;
- (int)generateRequestID;
- (BOOL)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (BOOL)sendBinaryMessage:(id)arg1 withNamespace:(id)arg2;
- (BOOL)sendTextMessage:(id)arg1 withNamespace:(id)arg2 toDestinationID:(id)arg3;
- (BOOL)sendTextMessage:(id)arg1 withNamespace:(id)arg2;
- (BOOL)setMuted:(BOOL)arg1;
- (BOOL)setVolume:(float)arg1;
- (BOOL)stopApplicationWithSessionID:(id)arg1;
- (BOOL)stopApplication;
- (BOOL)leaveApplication;
- (BOOL)joinApplication:(id)arg1 sessionID:(id)arg2;
- (BOOL)joinApplication:(id)arg1;
- (BOOL)launchApplication:(id)arg1 relaunchIfRunning:(BOOL)arg2;
- (BOOL)launchApplication:(id)arg1;
- (BOOL)sendMessageWithNamespace:(id)arg1 toDestinationID:(id)arg2 stringPayload:(id)arg3 binaryPayload:(id)arg4;
- (BOOL)requestAvailabilityForAppIDs:(id)arg1;
- (BOOL)requestDeviceStatus;
- (BOOL)removeChannel:(id)arg1;
- (BOOL)addChannel:(id)arg1;
- (void)reconnectWithTimeout:(double)arg1;
- (void)clearReconnectState;
- (void)clearStopState;
- (void)clearJoinState;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)disconnectInternalUnchecked;
- (void)disconnectWithError:(id)arg1;
- (void)disconnect;
- (void)connectInternalUnchecked;
- (void)connectWithInactivityTimeout:(double)arg1;
- (void)connect;
- (void)unregisterForAppStateNotifications;
- (void)registerForAppStateNotifications;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 clientPackageName:(id)arg2;
- (id)init;

@end
