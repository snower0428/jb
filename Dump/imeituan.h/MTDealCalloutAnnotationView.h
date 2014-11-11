//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTCalloutAnnotationView.h"

@class MTDeal, MTKeywordLabel, MTMapImageView, MTStarRater, UIImageView, UILabel;

@interface MTDealCalloutAnnotationView : MTCalloutAnnotationView
{
    MTDeal *_deal;
    MTMapImageView *_imageView;
    UILabel *_titleLabel;
    MTKeywordLabel *_priceLabel;
    MTStarRater *_starRater;
    UIImageView *_arrowView;
    UIImageView *_backgroundImageView;
}

@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) MTStarRater *starRater; // @synthesize starRater=_starRater;
@property(retain, nonatomic) MTKeywordLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MTMapImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) MTDeal *deal; // @synthesize deal=_deal;
- (void).cxx_destruct;
- (void)calloutViewTapped;
- (void)setAnnotation:(id)arg1;

@end
