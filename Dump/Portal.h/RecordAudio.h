/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AVAudioRecorderDelegate.h"
#import "AVAudioPlayerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AVAudioRecorder, NSError, NSURL, AVAudioPlayer;

@interface RecordAudio : XXUnknownSuperclass <AVAudioRecorderDelegate, AVAudioPlayerDelegate> {
	NSURL* recordedTmpFile;
	AVAudioRecorder* recorder;
	NSError* error;
	AVAudioPlayer* avPlayer;
	id target;
}
@property(assign, nonatomic) id target;
+(double)getAudioTime:(id)time;
-(void)startRecord;
-(void)audioPlayerDecodeErrorDidOccur:(id)audioPlayerDecodeError error:(id)error;
-(void)audioPlayerDidFinishPlaying:(id)audioPlayer successfully:(BOOL)successfully;
-(void)play:(id)play target:(id)target;
-(id)decodeAmr:(id)amr;
-(void)stopPlay;
-(void)sendStatus:(int)status;
-(id)stopRecord;
-(id)init;
-(void)dealloc;
@end

