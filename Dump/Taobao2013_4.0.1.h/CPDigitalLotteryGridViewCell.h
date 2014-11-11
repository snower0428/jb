//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBGridViewCell.h"

@class UIImageView, UILabel;

@interface CPDigitalLotteryGridViewCell : TBGridViewCell
{
    UIImageView *_iconImageView;
    UIImageView *_todayDrawImageView;
    UILabel *_lotteryNameLabel;
    UILabel *_accessorInfoLabel;
    UIImageView *_backgroundImageView;
    int _lotteryType;
}

@property(retain, nonatomic) UILabel *accessorInfoLabel; // @synthesize accessorInfoLabel=_accessorInfoLabel;
@property(retain, nonatomic) UILabel *lotteryNameLabel; // @synthesize lotteryNameLabel=_lotteryNameLabel;
@property(retain, nonatomic) UIImageView *todayDrawImageView; // @synthesize todayDrawImageView=_todayDrawImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) int lotteryType; // @synthesize lotteryType=_lotteryType;
- (void).cxx_destruct;
- (BOOL)isTodayDrawForIssuePicker:(id)arg1;
- (void)layoutSubviewsWithIssuePicker:(id)arg1;
- (void)clearAccessorInfoAndPoolprizeText;
- (void)setCountdowntText:(id)arg1;
- (void)setUIWithIssuePicker:(id)arg1;
- (void)deployUIWithIssuePicker:(id)arg1;
- (void)cleanUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
