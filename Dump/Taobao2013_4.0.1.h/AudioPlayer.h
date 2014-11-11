//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVAudioPlayer, NSData;

@interface AudioPlayer : NSObject
{
    AVAudioPlayer *_audioPlayer;
    NSData *_data;
    BOOL _isPause;
    BOOL isPlaying;
    id <AVAudioPlayerDelegate> delegate;
}

@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) BOOL isPlaying; // @synthesize isPlaying;
@property id <AVAudioPlayerDelegate> delegate; // @synthesize delegate;
- (void)dealloc;
- (float)averagePowerForChannel:(int)arg1;
- (void)stopPlaying;
- (void)pausePlay;
- (_Bool)startPlay;
- (float)getSoundTimeLenth;
- (id)initAudioPlayerWithSDCacheKey:(id)arg1 withDelegate:(id)arg2;
- (id)initAudioPlayerWithData:(id)arg1 withDelegate:(id)arg2;

@end
