//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TBGoldCoinHeaderView : UIView
{
    UIImageView *_headIcon;
    UILabel *_userName;
    UILabel *_coinNumber;
    UIImageView *_levelImage;
}

@property(retain, nonatomic) UIImageView *levelImage; // @synthesize levelImage=_levelImage;
@property(retain, nonatomic) UILabel *coinNumber; // @synthesize coinNumber=_coinNumber;
@property(retain, nonatomic) UILabel *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) UIImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)setUserIcon;
- (void)updateTotalCoinNumber:(id)arg1;
- (void)reloadPara:(id)arg1;
- (void)btnPress:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
