//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseCellControl.h"

@class MTMerchant, MTStarRater, UIImageView, UILabel;

@interface MTCinemaMiniSummaryView : MTBaseCellControl
{
    UILabel *_titleLabel;
    MTStarRater *_ratingControl;
    UILabel *_ratingLabel;
    UILabel *_ratingCountLabel;
    UILabel *_addressLabel;
    UIImageView *_chooseSeatImageView;
    UIImageView *_hasDealImageView;
    MTMerchant *_merchant;
}

@property(retain, nonatomic) MTMerchant *merchant; // @synthesize merchant=_merchant;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1;

@end

