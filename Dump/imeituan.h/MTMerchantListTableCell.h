//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTTableViewCell.h"

@class MTDealImageView, MTKeywordLabel, MTStarRater, TTTAttributedLabel, UIImageView, UILabel;

@interface MTMerchantListTableCell : MTTableViewCell
{
    MTDealImageView *_imgView;
    UILabel *_merchantLabel;
    UIImageView *_hasSeatImageView;
    UIImageView *_hasDealImageView;
    MTStarRater *_starView;
    TTTAttributedLabel *_priceLabel;
    MTKeywordLabel *_categoryAndAreaLabel;
    UILabel *_distanceLabel;
    UIImageView *_separateLineView;
    UIImageView *_hasPreferentialImageView;
}

@property(retain, nonatomic) UIImageView *hasPreferentialImageView; // @synthesize hasPreferentialImageView=_hasPreferentialImageView;
@property(retain, nonatomic) UIImageView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UILabel *distanceLabel; // @synthesize distanceLabel=_distanceLabel;
@property(retain, nonatomic) MTKeywordLabel *categoryAndAreaLabel; // @synthesize categoryAndAreaLabel=_categoryAndAreaLabel;
@property(retain, nonatomic) TTTAttributedLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) MTStarRater *starView; // @synthesize starView=_starView;
@property(retain, nonatomic) UIImageView *hasDealImageView; // @synthesize hasDealImageView=_hasDealImageView;
@property(retain, nonatomic) UIImageView *hasSeatImageView; // @synthesize hasSeatImageView=_hasSeatImageView;
@property(retain, nonatomic) UILabel *merchantLabel; // @synthesize merchantLabel=_merchantLabel;
@property(retain, nonatomic) MTDealImageView *imgView; // @synthesize imgView=_imgView;
- (void).cxx_destruct;
- (void)setItem:(id)arg1;
- (void)cropMerchantImage;
- (void)setThemeDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end
