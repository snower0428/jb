//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DMPlayerControlViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class AVPlayer, DMPlayerControlView, DMPlayerHeadView, DMVideoModel, NSMutableArray;

@interface DMPlayerView : UIView <UIGestureRecognizerDelegate, DMPlayerControlViewDelegate>
{
    AVPlayer *_player;
    BOOL fullScreen;
    struct CGRect originalFrame;
    DMPlayerControlView *_controlBar;
    DMPlayerHeadView *_headView;
    DMVideoModel *_videoModel;
    id <DMPlayerViewDelegate> _delegate;
    NSMutableArray *_playerItems;
    int _status;
    BOOL _isImpSecond;
    BOOL seekToZeroBeforePlay;
    BOOL load;
    BOOL loadToPlay;
    BOOL _isPlayingAtResignActive;
    CDStruct_1b6d18a9 currentTime;
    int _playerItemIndexAtResignActive;
    BOOL _isPausedManually;
    BOOL _isPause;
    BOOL _isReplay;
}

+ (Class)layerClass;
@property(nonatomic) BOOL isReplay; // @synthesize isReplay=_isReplay;
@property(nonatomic) BOOL isPause; // @synthesize isPause=_isPause;
@property(nonatomic) BOOL isImpSecond; // @synthesize isImpSecond=_isImpSecond;
@property(nonatomic) int status; // @synthesize status=_status;
@property(nonatomic) BOOL isPausedManually; // @synthesize isPausedManually=_isPausedManually;
@property(retain, nonatomic) DMVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) DMPlayerHeadView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) DMPlayerControlView *controlBar; // @synthesize controlBar=_controlBar;
@property(retain, nonatomic) NSMutableArray *playerItems; // @synthesize playerItems=_playerItems;
@property(nonatomic) BOOL fullScreen; // @synthesize fullScreen;
@property(nonatomic) BOOL seekToZeroBeforePlay; // @synthesize seekToZeroBeforePlay;
@property(nonatomic) id <DMPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dmButtonClick:(id)arg1;
- (void)changeSitchToVolume;
- (void)changeSitchToSlient;
- (void)enterFullScreen;
- (void)exitFullScreenByTappingFullScreenBtn;
- (void)videoResumePlay;
- (void)videoDidPlay;
- (void)videoPauseToPlay;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playerItemDidPlayToEndTime:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (CDStruct_1b6d18a9)playerItemDuration;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (BOOL)needRecoverPlayerItemWhenBecomeActive;
- (void)doneLoadingAsset:(id)arg1 withKeys:(id)arg2;
- (id)currentPlayItem;
- (id)loadedTimeRanges;
- (void)playerViewDidTap:(id)arg1;
- (void)showControlBarImmediately;
- (void)hideControlBarImmediately;
- (void)hideControlBarAfterDelay;
- (void)stop;
- (void)pause;
- (BOOL)isPlaying;
- (void)playMethod;
- (void)play;
- (void)replayMethod;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoModel:(id)arg2 andBundleName:(id)arg3;

@end
