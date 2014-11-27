//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHAudioPlayerDataSource.h"

@class NSObject<OS_dispatch_queue>, NSString, VMVoicemail;

@interface PHAudioPlayerVoicemailDataSource : NSObject <PHAudioPlayerDataSource>
{
    VMVoicemail *_voicemail;
    NSObject<OS_dispatch_queue> *_modifyingFileSizeQueue;
    unsigned long long _expectedTotalBytes;
    unsigned long long _availableBytes;
}

@property(readonly) VMVoicemail *voicemail; // @synthesize voicemail=_voicemail;
@property(readonly) unsigned long long availableBytes;
@property(readonly) unsigned long long expectedTotalBytes;
@property(readonly) double duration;
@property(readonly) _Bool fullFileAvailable;
@property(readonly) NSString *audioFilePath;
- (void)_handleDataAvailable:(id)arg1;
- (void)_handlePlayableDurationChanged:(id)arg1;
- (void)_deregisterForVoicemailNotifications;
- (void)_registerForVoicemailNotifications;
- (void)dealloc;
- (id)initWithVoicemail:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

