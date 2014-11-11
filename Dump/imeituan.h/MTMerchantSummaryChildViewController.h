//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseViewController.h"

@class MTDealImageView, MTMerchant, MTStarRater, UIImageView, UILabel, UIView;

@interface MTMerchantSummaryChildViewController : MTBaseViewController
{
    int _photoTotalCount;
    MTMerchant *_merchant;
    MTDealImageView *_merchantImageView;
    UILabel *_merchantNameLabel;
    UIImageView *_hasDealsView;
    UILabel *_averagePriceLabel;
    MTStarRater *_rate;
    UILabel *_rateLabel;
    UILabel *_rateCountLabel;
    UIView *_photoCountView;
    UILabel *_photoCountLabel;
}

@property(retain, nonatomic) UILabel *photoCountLabel; // @synthesize photoCountLabel=_photoCountLabel;
@property(retain, nonatomic) UIView *photoCountView; // @synthesize photoCountView=_photoCountView;
@property(retain, nonatomic) UILabel *rateCountLabel; // @synthesize rateCountLabel=_rateCountLabel;
@property(retain, nonatomic) UILabel *rateLabel; // @synthesize rateLabel=_rateLabel;
@property(retain, nonatomic) MTStarRater *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) UILabel *averagePriceLabel; // @synthesize averagePriceLabel=_averagePriceLabel;
@property(retain, nonatomic) UIImageView *hasDealsView; // @synthesize hasDealsView=_hasDealsView;
@property(retain, nonatomic) UILabel *merchantNameLabel; // @synthesize merchantNameLabel=_merchantNameLabel;
@property(retain, nonatomic) MTDealImageView *merchantImageView; // @synthesize merchantImageView=_merchantImageView;
@property(retain, nonatomic) MTMerchant *merchant; // @synthesize merchant=_merchant;
- (void).cxx_destruct;
- (void)didReceiveThemeChangeNotification:(id)arg1;
- (void)didTapRater;
- (void)didTapMerchantImage;
- (void)didReceiveMemoryWarning;
- (void)setPhotoURLArray:(id)arg1 andTotalCount:(int)arg2;
- (void)viewDidLoad;
- (void)setupUI;
- (float)heightForView;
- (void)cropMerchantImage;
- (void)dealloc;
- (id)initWithMerchant:(id)arg1;

@end

