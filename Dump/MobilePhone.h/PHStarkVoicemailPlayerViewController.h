//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHStarkGenericViewController.h"

#import "PHAudioPlayerDelegate.h"

@class PHAudioPlayer, PHAudioPlayerVoicemailDataSource, PHStarkProgressView, UIButton, UILabel, VMVoicemail;

@interface PHStarkVoicemailPlayerViewController : PHStarkGenericViewController <PHAudioPlayerDelegate>
{
    _Bool _firstAppearanceEvent;
    _Bool _isPlaying;
    VMVoicemail *_representedVoicemail;
    UILabel *_nameLabel;
    UILabel *_detailLabel;
    PHStarkProgressView *_progressView;
    UIButton *_callBackButton;
    UIButton *_rewindButton;
    UIButton *_playPauseButton;
    PHAudioPlayer *_audioPlayerController;
    PHAudioPlayerVoicemailDataSource *_voicemailDataSource;
}

+ (id)detailStringForVoicemail:(id)arg1;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property _Bool firstAppearanceEvent; // @synthesize firstAppearanceEvent=_firstAppearanceEvent;
@property(retain) PHAudioPlayerVoicemailDataSource *voicemailDataSource; // @synthesize voicemailDataSource=_voicemailDataSource;
@property(retain) PHAudioPlayer *audioPlayerController; // @synthesize audioPlayerController=_audioPlayerController;
@property(retain) UIButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(retain) UIButton *rewindButton; // @synthesize rewindButton=_rewindButton;
@property(retain) UIButton *callBackButton; // @synthesize callBackButton=_callBackButton;
@property(retain) PHStarkProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) VMVoicemail *representedVoicemail; // @synthesize representedVoicemail=_representedVoicemail;
- (void)hardwareControlEventNotification:(id)arg1;
- (void)rewindButtonTapped:(id)arg1;
- (void)callBackButtonTapped:(id)arg1;
- (void)playPauseButtonTapped:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)updateWithElapsedTime:(double)arg1 playableTime:(double)arg2 totalTime:(double)arg3 isPlaying:(_Bool)arg4 isPlayable:(_Bool)arg5 dataSource:(id)arg6;
- (void)stoppedPlayingWithDataSource:(id)arg1 withError:(id)arg2;
- (void)startedPlayingWithDataSource:(id)arg1;
- (void)dealloc;
- (id)init;

@end
