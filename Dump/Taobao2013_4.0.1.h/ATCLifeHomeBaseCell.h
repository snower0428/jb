//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LQTableViewCell.h"

@class ATCLifeTheme, CAGradientLayer, CATextLayer, LQLabel, UIImageView, UILabel, UIView;

@interface ATCLifeHomeBaseCell : LQTableViewCell
{
    ATCLifeTheme *_defaultTheme;
    CAGradientLayer *_countMaskLayer;
    CATextLayer *_countInfoLabel;
    UIView *_topLine;
    UIView *_bottomLine;
    BOOL _hideCategoryImageView;
    UIImageView *_categoryImageView;
    UILabel *_firstInfoCategoryLabel;
    UILabel *_timeLabel;
    UIView *_objectSourceView;
    UIImageView *_objectImageView;
    LQLabel *_objectMainDescriptionLabel;
    UILabel *_objectDescriptionLabel;
}

@property(nonatomic, getter=isHideCategoryImageView) BOOL hideCategoryImageView; // @synthesize hideCategoryImageView=_hideCategoryImageView;
@property(retain, nonatomic) UILabel *objectDescriptionLabel; // @synthesize objectDescriptionLabel=_objectDescriptionLabel;
@property(retain, nonatomic) LQLabel *objectMainDescriptionLabel; // @synthesize objectMainDescriptionLabel=_objectMainDescriptionLabel;
@property(retain, nonatomic) UIImageView *objectImageView; // @synthesize objectImageView=_objectImageView;
@property(retain, nonatomic) UIView *objectSourceView; // @synthesize objectSourceView=_objectSourceView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *firstInfoCategoryLabel; // @synthesize firstInfoCategoryLabel=_firstInfoCategoryLabel;
@property(retain, nonatomic) UIImageView *categoryImageView; // @synthesize categoryImageView=_categoryImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tapAccountAction:(id)arg1;
- (void)downloadWithURL:(id)arg1 forImageView:(id)arg2 cropped:(BOOL)arg3;
- (void)imageView:(id)arg1 fetchImageWithURL:(id)arg2 cropped:(BOOL)arg3;
- (void)setFeed:(id)arg1;
- (void)initObjectDescriptionLabel;
- (void)initObjectMainDescriptionLabel;
- (void)initObjectImageView;
- (void)initObjectSourceView;
- (void)initTimeLabel;
- (void)initFirstInfoCategoryLabel;
- (void)initCategoryImageView;
- (void)initStyle;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
