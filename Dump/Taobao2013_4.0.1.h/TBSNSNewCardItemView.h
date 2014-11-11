//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SevenSwitch, TBSNSNewCardItemViewOption, UIButton, UIImageView, UILabel;

@interface TBSNSNewCardItemView : UIView
{
    UIView *_dotView;
    TBSNSNewCardItemViewOption *_itemOption;
    UILabel *_titleLabel;
    UIImageView *_tailIcon;
    UIImageView *_fronterView;
    SevenSwitch *_switchView;
    UIButton *_button;
    UIImageView *_maskImageView;
}

@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) SevenSwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UIImageView *fronterView; // @synthesize fronterView=_fronterView;
@property(retain, nonatomic) UIImageView *tailIcon; // @synthesize tailIcon=_tailIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBSNSNewCardItemViewOption *itemOption; // @synthesize itemOption=_itemOption;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
- (void).cxx_destruct;
- (void)removeNumber;
- (void)setSwitchStatus:(BOOL)arg1;
- (void)initButton;
- (void)initSwitchView;
- (void)initUI;
- (void)initViewWithParams:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

