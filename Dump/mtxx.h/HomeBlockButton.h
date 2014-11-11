//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class MTBadgeView, NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface HomeBlockButton : UIButton
{
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UILabel *_starLabel;
    UIImageView *_starImageView;
    MTBadgeView *_badgeView;
    UIImage *_normalImage;
    UIImage *_highlightedImage;
    NSString *_badgeImageName;
    NSString *_starLabelText;
    UIImage *_starImage;
}

@property(retain, nonatomic) UIImage *starImage; // @synthesize starImage=_starImage;
@property(copy, nonatomic) NSString *starLabelText; // @synthesize starLabelText=_starLabelText;
@property(copy, nonatomic) NSString *badgeImageName; // @synthesize badgeImageName=_badgeImageName;
@property(retain, nonatomic) UIImage *highlightedImage; // @synthesize highlightedImage=_highlightedImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)startStarAnimation;
- (void)setBadgeValue:(int)arg1;
@property(readonly, nonatomic) MTBadgeView *badgeView;
@property(readonly, nonatomic) UIImageView *iconImageView;
- (void)setIconImage:(id)arg1;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)setTitle:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)awakeFromNib;

@end
