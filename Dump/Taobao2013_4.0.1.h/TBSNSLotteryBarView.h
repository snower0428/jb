//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface TBSNSLotteryBarView : UIView
{
    UIButton *_lotteryBtn;
    NSString *_showStr;
    UIImageView *_backgroundImageView;
    UIView *_backgroundView;
    UILabel *_lable;
}

+ (float)viewHeight;
@property(retain, nonatomic) UILabel *lable; // @synthesize lable=_lable;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(copy, nonatomic) NSString *showStr; // @synthesize showStr=_showStr;
@property(retain, nonatomic) UIButton *lotteryBtn; // @synthesize lotteryBtn=_lotteryBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

