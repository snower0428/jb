//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSString;

@interface VolumeControl : NSObject
{
    BOOL _debounce;
    int _numberOfVolumeDecreasesSinceDownButtonDown;
    int _mode;
    NSMutableSet *_alwaysHiddenCategories;
    NSString *_lastDisplayedCategory;
    NSString *_lastEventCategory;
    BOOL _hudHandledLastVolumeChange;
    BOOL _euDevice;
    float _euVolumeLimit;
    BOOL _euVolumeLimitEnforced;
    BOOL _lastVolumeChangedWasBlocked;
    BOOL _volumeDownButtonIsDown;
    BOOL _volumeUpButtonIsDown;
}

+ (id)sharedVolumeControl;
- (float)getMediaVolume;
- (void)setMediaVolume:(float)arg1;
- (void)sendEUVolumeLimitAcknowledgementIfNecessary;
- (void)_EUVolumeEnforcementChanged:(id)arg1;
- (void)_EUVolumeLimitChanged:(id)arg1;
- (BOOL)_isVolumeHUDVisibleOrFading;
- (BOOL)_isVolumeHUDVisible;
- (void)hideVolumeHUDIfVisible;
- (id)volumeHUDForCurrentCategory;
- (void)_presentVolumeHUDWithMode:(int)arg1 volume:(float)arg2;
- (id)_volumeHUDViewWithMode:(int)arg1 volume:(float)arg2;
- (BOOL)_headphonesPresent;
- (void)_effectiveVolumeChanged:(id)arg1;
- (int)_volumeModeForCategory:(id)arg1;
- (void)_serverConnectionDied:(id)arg1;
- (void)_unregisterForAVSystemControllerNotifications;
- (void)_registerForAVSystemControllerNotifications;
- (void)cancelVolumeEvent;
- (void)handleVolumeEvent:(struct __GSEvent *)arg1;
- (void)_turnOnScreenIfNecessaryForEULimit;
- (id)lastDisplayedCategory;
- (void)decreaseVolume;
- (void)increaseVolume;
- (float)_calcButtonRepeatDelay;
- (void)_changeVolumeBy:(float)arg1;
- (BOOL)_isMusicPlayingSomewhere;
- (void)_userAcknowledgedEUEnforcement;
- (float)volume;
- (void)toggleMute;
- (BOOL)_HUDIsDisplayableForCategory:(id)arg1;
- (void)removeAlwaysHiddenCategory:(id)arg1;
- (void)addAlwaysHiddenCategory:(id)arg1;
- (void)dealloc;
- (void)_initializeEUVolumeLimits;
- (id)init;
- (float)volumeStepDown;
- (float)volumeStepUp;

@end

