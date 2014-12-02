//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GCKDeviceManagerDelegate.h"
#import "GCKDeviceScannerListener.h"
#import "GCKMediaControlChannelDelegate.h"
#import "UIActionSheetDelegate.h"

@class GCKApplicationMetadata, GCKDevice, GCKDeviceManager, GCKDeviceScanner, GCKMediaControlChannel, GCKMediaInformation, NSString, UIBarButtonItem, UIImage;

__attribute__((visibility("hidden")))
@interface ChromecastDeviceController : NSObject <GCKDeviceScannerListener, GCKDeviceManagerDelegate, GCKMediaControlChannelDelegate, UIActionSheetDelegate>
{
    UIImage *_btnImage;
    UIImage *_btnImageSelected;
    GCKDeviceScanner *_deviceScanner;
    GCKDeviceManager *_deviceManager;
    NSString *_deviceName;
    int _playerState;
    GCKMediaInformation *_mediaInformation;
    UIBarButtonItem *_chromecastBarButton;
    id <ChromecastControllerDelegate> _delegate;
    GCKMediaControlChannel *_mediaControlChannel;
    GCKApplicationMetadata *_applicationMetadata;
    GCKDevice *_selectedDevice;
    double _streamDuration;
    double _streamPosition;
}

@property(retain) GCKDevice *selectedDevice; // @synthesize selectedDevice=_selectedDevice;
@property(retain) GCKApplicationMetadata *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(retain) GCKMediaControlChannel *mediaControlChannel; // @synthesize mediaControlChannel=_mediaControlChannel;
@property(nonatomic) id <ChromecastControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIBarButtonItem *chromecastBarButton; // @synthesize chromecastBarButton=_chromecastBarButton;
@property(readonly, nonatomic) GCKMediaInformation *mediaInformation; // @synthesize mediaInformation=_mediaInformation;
@property(readonly, nonatomic) int playerState; // @synthesize playerState=_playerState;
@property(readonly, nonatomic) double streamPosition; // @synthesize streamPosition=_streamPosition;
@property(readonly, nonatomic) double streamDuration; // @synthesize streamDuration=_streamDuration;
@property(readonly, getter=getDeviceName) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) GCKDeviceManager *deviceManager; // @synthesize deviceManager=_deviceManager;
@property(retain, nonatomic) GCKDeviceScanner *deviceScanner; // @synthesize deviceScanner=_deviceScanner;
- (void).cxx_destruct;
- (void)showError:(id)arg1;
- (void)deviceManager:(id)arg1 didReceiveStatusForApplication:(id)arg2;
- (void)deviceManager:(id)arg1 didDisconnectWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didFailToLaunchCastApplicationWithError:(id)arg2;
- (void)deviceManager:(id)arg1 didConnectToCastApplication:(id)arg2 sessionID:(id)arg3 launchedApplication:(BOOL)arg4;
- (void)deviceManagerDidConnect:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)deviceDidGoOffline:(id)arg1;
- (void)deviceDidComeOnline:(id)arg1;
- (BOOL)loadMedia:(id)arg1 thumbnailURL:(id)arg2 title:(id)arg3 subtitle:(id)arg4 mimeType:(id)arg5 startTime:(double)arg6 autoPlay:(BOOL)arg7;
- (void)mediaControlChannelDidUpdateMetadata:(id)arg1;
- (void)mediaControlChannelDidUpdateStatus:(id)arg1;
- (void)mediaControlChannel:(id)arg1 didCompleteLoadWithSessionID:(int)arg2;
- (void)stopCastMedia;
- (void)pauseCastMedia:(BOOL)arg1;
- (void)changeRelativeSeek:(int)arg1;
- (void)setPlaybackPercent:(float)arg1;
- (void)updateStatsFromDevice;
- (void)updateButtonStates;
- (void)deviceDisconnected;
- (void)disconnectFromDevice;
- (void)connectToDevice;
- (void)chooseDevice:(id)arg1;
- (BOOL)isMediaControlChannelOn;
- (BOOL)isPlayingMedia;
- (BOOL)isConnected;
- (void)performScan:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
