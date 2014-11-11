//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIGestureRecognizerDelegate.h"

@class MPMoviePlayerController, NSDictionary, NSString, NSURL, UILabel;

@interface AdMoGoFullScreenVideoManager : NSObject <UIGestureRecognizerDelegate>
{
    NSDictionary *_infoDict;
    NSURL *v_url;
    NSString *filePath;
    MPMoviePlayerController *adsMogoPlayer;
    UILabel *timeView;
    BOOL m_isReady;
    BOOL m_isPlayed;
    BOOL isStop;
    BOOL m_isClicked;
    BOOL m_isNeedShowTime;
    BOOL m_isPaused;
    BOOL m_isNeedShowBar;
    BOOL m_isClosed;
    double videoTime;
    id <AdMoGoFullScreenVideoManagerDelegate> delegate;
}

@property(nonatomic) id <AdMoGoFullScreenVideoManagerDelegate> delegate; // @synthesize delegate;
- (id)md5:(id)arg1;
- (id)getAdMoGoCacheFilePath;
- (void)fireClick;
- (void)firePlayFinish;
- (void)firePlay;
- (void)fireSuccess;
- (void)fireError;
- (void)becomeActive:(id)arg1;
- (void)resignActive:(id)arg1;
- (void)removeApplicationNotifCenter;
- (void)addApplicationNotifCenter;
- (void)moviePlayBackDidChange:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (void)moviePlayerLoadStateChanged:(id)arg1;
- (void)initVideoStream:(id)arg1;
- (void)initVideoFile;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)videoTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)playVideoStream:(id)arg1;
- (void)setNeedDisplayTime;
- (void)startLoadVideoAdFile:(id)arg1;
- (void)showStatusBar;
- (void)playVideoAd;
- (BOOL)addVideoInView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)setVideoCenter:(struct CGPoint)arg1;
- (void)setVideoFrame:(struct CGRect)arg1;
- (void)pauseVideo;
- (void)closeVideo;
- (BOOL)canCacheVideo;
- (id)initWithAdInfo:(id)arg1 AndDelegate:(id)arg2;
- (id)initWithUrl:(id)arg1 AndDelegate:(id)arg2;
- (void)stopLoad;
- (void)dealloc;

@end
