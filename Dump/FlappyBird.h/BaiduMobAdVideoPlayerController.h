//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BaiduMobAdWebLPControllerDelegate.h"

@class BaiduMobAdVideoAdObj, MPMoviePlayerController, NSTimer, UIButton, UILabel;

@interface BaiduMobAdVideoPlayerController : UIViewController <BaiduMobAdWebLPControllerDelegate>
{
    struct CGRect windowFrame;
    struct CGRect bannerFrame;
    int state;
    BaiduMobAdVideoAdObj *currentAd;
    struct CGSize _natualSize;
    UIButton *_btnClose;
    UIButton *_silenceButton;
    UIButton *_btnLP;
    NSTimer *_countingTimer;
    UILabel *_label;
    UILabel *_startLabel;
    UILabel *_endLabel;
    UILabel *_bkgLabel;
    float _volume;
    BOOL _isSilenceMode;
    MPMoviePlayerController *_moviePlayer;
    id <BaiduMobAdVideoControllerDelegate> delegate;
}

@property(nonatomic) id <BaiduMobAdVideoControllerDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) BaiduMobAdVideoAdObj *Ad; // @synthesize Ad=currentAd;
@property(retain, nonatomic) MPMoviePlayerController *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
- (void)dealloc;
- (void)webLPController:(id)arg1 didFinishWithResult:(id)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)stopCountingTimer;
- (void)startCountingTimer;
- (void)counting:(id)arg1;
- (void)play:(BOOL)arg1;
- (void)playVideoAd;
- (void)stop;
- (void)layoutSubview:(struct CGSize)arg1 withOrientaion:(int)arg2;
- (void)createOverlayView;
- (void)slienceClick:(id)arg1;
- (void)clickClose:(id)arg1;
- (void)clickLP:(id)arg1;
- (void)clickAdToAction;
- (void)showClickBtn;
- (void)viewDidLoad;
- (void)moviePlayerPlaybackStateChanged:(id)arg1;
- (void)moviePlayBackDidFinish:(id)arg1;
- (struct CGRect)videoSizeToFit:(struct CGSize)arg1 natualSize:(struct CGSize)arg2;
- (id)init;
- (void)registerForeBackgroundEvent;
- (void)enteredForeground:(id)arg1;
- (void)enteredBackground:(id)arg1;

@end

