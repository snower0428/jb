//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AudioStreamer, NSString;

__attribute__((visibility("hidden")))
@interface TBAudioPlayerHelper : NSObject
{
    id <TBAudioPlayerHelperDelegate> _delegate;
    AudioStreamer *_streamer;
    NSString *_voiceUrlString;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *voiceUrlString; // @synthesize voiceUrlString=_voiceUrlString;
@property(retain, nonatomic) AudioStreamer *streamer; // @synthesize streamer=_streamer;
@property(nonatomic) id <TBAudioPlayerHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetStreamer;
- (void)destroyStreamer;
- (void)playbackStateChanged:(id)arg1;
- (void)clickToStopVoice:(id)arg1 sender:(id)arg2;
- (void)clickToPlayVoice:(id)arg1 sender:(id)arg2;
- (void)createVoiceStreamer;

@end

