//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LQTableViewCell.h"

@class ATCCircleFeedDetailItem, UIImage, UIImageView, UILabel, UIView;

@interface ATCCircleFeedDetailCouponCell : LQTableViewCell
{
    UIImage *_placeHoldeImage;
    ATCCircleFeedDetailItem *_feedDetailItem;
    UILabel *_titleLabel;
    UILabel *_distanceLabel;
    UIImageView *_itemImageView;
    UIImageView *_lineImageView;
    UILabel *_priceLabel;
    UILabel *_oriPriceLabel;
    UIView *_priceView;
    UILabel *_discountLabel;
    UILabel *_numberLabel;
    UIView *_cutLine;
}

@property(retain, nonatomic) UIView *cutLine; // @synthesize cutLine=_cutLine;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UIView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UILabel *oriPriceLabel; // @synthesize oriPriceLabel=_oriPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIImageView *lineImageView; // @synthesize lineImageView=_lineImageView;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setFeedDetailItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
