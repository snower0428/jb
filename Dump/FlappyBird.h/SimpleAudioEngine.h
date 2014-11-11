//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CDAudioInterruptProtocol.h"

__attribute__((visibility("hidden")))
@interface SimpleAudioEngine : NSObject <CDAudioInterruptProtocol>
{
    BOOL mute_;
    BOOL enabled_;
}

+ (void)end;
+ (id)alloc;
+ (id)sharedEngine;
- (id)soundSourceForFile:(id)arg1;
@property float effectsVolume;
@property float backgroundMusicVolume;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (void)setMute:(BOOL)arg1;
- (BOOL)mute;
- (void)unloadEffect:(id)arg1;
- (void)preloadEffect:(id)arg1;
- (void)stopAllEffects;
- (void)resumeAllEffects;
- (void)resumeEffect:(unsigned int)arg1;
- (void)pauseAllEffects;
- (void)pauseEffect:(unsigned int)arg1;
- (void)stopEffect:(unsigned int)arg1;
- (unsigned int)playEffect:(id)arg1 loop:(BOOL)arg2 pitch:(float)arg3 pan:(float)arg4 gain:(float)arg5;
- (unsigned int)playEffect:(id)arg1 loop:(BOOL)arg2;
@property(readonly) BOOL willPlayBackgroundMusic;
- (BOOL)isBackgroundMusicPlaying;
- (void)rewindBackgroundMusic;
- (void)resumeBackgroundMusic;
- (void)pauseBackgroundMusic;
- (void)stopBackgroundMusic;
- (void)playBackgroundMusic:(id)arg1 loop:(BOOL)arg2;
- (void)playBackgroundMusic:(id)arg1;
- (void)preloadBackgroundMusic:(id)arg1;
- (void)dealloc;
- (id)init;

@end
