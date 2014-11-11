//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlert.h"

@interface SBVoiceControlAlert : SBAlert
{
    struct {
        unsigned int shouldBeActivated:1;
        unsigned int isReadyToBeActivated:1;
        unsigned int hasBeenActivated:1;
    } _voiceControlFlags;
}

+ (void)_setNextRecognitionAudioInputPathForSession:(id)arg1 resetting:(BOOL)arg2;
+ (void)setNextRecognitionAudioInputPaths:(id)arg1;
+ (void)_configureSession:(id)arg1 forAlert:(id)arg2;
+ (BOOL)_bluetoothDevicesPickable;
+ (void)bluetoothDeviceTerminatedVoiceControl:(id)arg1;
+ (void)bluetoothDeviceRequestedVoiceControl:(id)arg1;
+ (BOOL)resetVoiceControlIfNecessary:(BOOL)arg1;
+ (BOOL)shouldEnterVoiceControl;
+ (void)unregisterForAlerts;
+ (void)registerForAlerts;
+ (id)pendingOrActiveAlert;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (double)autoDimTime;
- (BOOL)handleMenuButtonTap;
- (void)handleHeadsetButtonUpFromActivation:(BOOL)arg1;
- (void)_proximityChanged:(id)arg1;
- (void)dealloc;
- (void)cancel;
- (void)cancelIfNotActivated;
- (void)activateWhenReady;
- (id)initFromMenuButton;
- (void)activate;
- (void)deactivate;
- (BOOL)allowsEventOnlySuspension;
- (id)initFromBluetoothDevice:(id)arg1;
- (id)initFromWiredHeadsetButton;
- (id)init;
- (void)_setRoutingAttributesForWiredHeadset:(BOOL)arg1;
- (void)_prime;
- (BOOL)recognitionSessionWillBeginAction:(id)arg1;
- (void)_workspaceActivate;
- (id)_session;
- (void)_makeActive;
- (void)_resign;

@end

