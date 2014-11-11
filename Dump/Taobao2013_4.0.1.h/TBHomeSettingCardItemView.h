//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSBasicMenuItemView.h"

@class NSTimer, SevenSwitch, TBLoadingView, UIButton, UIImageView, UILabel, UIView;

@interface TBHomeSettingCardItemView : TBSNSBasicMenuItemView
{
    BOOL _pushSwitchStatus;
    UILabel *_label;
    UILabel *_descriptionLabel;
    UILabel *_attentionLabel;
    UIButton *_button;
    UIImageView *_imageView;
    UIImageView *_imageIcon;
    SevenSwitch *_pushSwitch;
    TBLoadingView *_buttonLoadingIndicator;
    UIView *_buttonLoadingMastView;
    NSTimer *_levelTimer;
}

@property(retain, nonatomic) NSTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(retain, nonatomic) UIView *buttonLoadingMastView; // @synthesize buttonLoadingMastView=_buttonLoadingMastView;
@property(retain, nonatomic) TBLoadingView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(nonatomic) BOOL pushSwitchStatus; // @synthesize pushSwitchStatus=_pushSwitchStatus;
@property(retain, nonatomic) SevenSwitch *pushSwitch; // @synthesize pushSwitch=_pushSwitch;
@property(retain, nonatomic) UIImageView *imageIcon; // @synthesize imageIcon=_imageIcon;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *attentionLabel; // @synthesize attentionLabel=_attentionLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (int)tag;
- (void)setTag:(int)arg1;
- (void)setPushSwitchShow:(BOOL)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned int)arg3;
- (void)changeShowStatus:(id)arg1;
- (void)setAccountPushButtonStatus:(BOOL)arg1;
- (void)setUpView;
- (void)initMaskImageView;
- (void)initAccountButton;
- (void)initDescriptionLabel;
- (void)initAccountLabel;
- (void)initAccountIconView;
- (void)initBackground;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

