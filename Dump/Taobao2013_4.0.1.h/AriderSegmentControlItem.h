//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface AriderSegmentControlItem : UIButton
{
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    UIColor *_normalTitleColor;
    UIColor *_highTitleColor;
    BOOL _isSelected;
    NSString *_title;
    float _width;
    NSString *_badgeNumber;
    UILabel *_badgeLabel;
    UILabel *_titleItemLabel;
    float _iconTitleBadgeInterval;
    UIImage *_normalBackgroundImage;
    UIImage *_highBackgroundImage;
    UIImage *_normalIconImage;
    UIImage *_highIconImage;
}

@property(retain, nonatomic) UIImage *highIconImage; // @synthesize highIconImage=_highIconImage;
@property(retain, nonatomic) UIImage *normalIconImage; // @synthesize normalIconImage=_normalIconImage;
@property(retain, nonatomic) UIImage *highBackgroundImage; // @synthesize highBackgroundImage=_highBackgroundImage;
@property(retain, nonatomic) UIImage *normalBackgroundImage; // @synthesize normalBackgroundImage=_normalBackgroundImage;
@property(readonly, nonatomic) BOOL isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) float iconTitleBadgeInterval; // @synthesize iconTitleBadgeInterval=_iconTitleBadgeInterval;
@property(retain, nonatomic) UILabel *titleItemLabel; // @synthesize titleItemLabel=_titleItemLabel;
@property(retain, nonatomic) UILabel *badgeLabel; // @synthesize badgeLabel=_badgeLabel;
@property(copy, nonatomic) NSString *badgeNumber; // @synthesize badgeNumber=_badgeNumber;
@property(nonatomic) float width; // @synthesize width=_width;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)clearOldStatus;
- (void)resetHighlightedState:(BOOL)arg1;
- (void)showViews;
- (void)frameFitTextWidth:(id)arg1;
- (id)initWithTitle:(id)arg1 font:(id)arg2 normalTitleColor:(id)arg3 highTitleColor:(id)arg4;
- (id)initWithNormalBackgroundImage:(id)arg1 highBackgroundImage:(id)arg2;
- (id)initWithTitle:(id)arg1 font:(id)arg2 normalBackgroundImage:(id)arg3 highBackgroundImage:(id)arg4 normalTitleColor:(id)arg5 highTitleColor:(id)arg6;
- (id)initWithTitle:(id)arg1 normalBackgroundImage:(id)arg2 highBackgroundImage:(id)arg3 normalTitleColor:(id)arg4 highTitleColor:(id)arg5;

@end

