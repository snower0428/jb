//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface TBAudioPlayView : UIView
{
    UIImageView *_bgImageView;
    UIButton *_playBtn;
    UILabel *_timeLabel;
    UIImageView *_playImgView;
    UIImageView *_voiceWaveAnimationImageView;
}

@property(retain, nonatomic) UIImageView *voiceWaveAnimationImageView; // @synthesize voiceWaveAnimationImageView=_voiceWaveAnimationImageView;
@property(retain, nonatomic) UIImageView *playImgView; // @synthesize playImgView=_playImgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)setPlayStatus:(BOOL)arg1;
- (void)setPlayTime:(int)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)spinVoiceButton;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end
