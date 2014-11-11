//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRGridViewCell.h"

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MTMagicPenCell : NRGridViewCell
{
    BOOL _showed;
    UILabel *_penNameLabel;
    UIImageView *_penImageView;
    UIImageView *_shareFlagImageView;
    UIImageView *_iconNewFlagImageView;
}

@property(nonatomic, getter=isShowed) BOOL showed; // @synthesize showed=_showed;
@property(retain, nonatomic) UIImageView *iconNewFlagImageView; // @synthesize iconNewFlagImageView=_iconNewFlagImageView;
@property(retain, nonatomic) UIImageView *shareFlagImageView; // @synthesize shareFlagImageView=_shareFlagImageView;
@property(retain, nonatomic) UIImageView *penImageView; // @synthesize penImageView=_penImageView;
@property(retain, nonatomic) UILabel *penNameLabel; // @synthesize penNameLabel=_penNameLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)hidePenWithAnimated:(BOOL)arg1;
- (void)showPenWithAnimated:(BOOL)arg1;
- (void)awakeFromNib;

@end
