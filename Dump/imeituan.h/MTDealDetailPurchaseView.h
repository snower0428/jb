//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class MTDeal, MTKeywordLabel, MTStrikeThroughLabel, UIButton;

@interface MTDealDetailPurchaseView : UIImageView
{
    MTKeywordLabel *_priceLabel;
    MTStrikeThroughLabel *_originPriceLabel;
    UIButton *_purchaseButton;
    MTDeal *_deal;
}

@property(readonly, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) MTDeal *deal; // @synthesize deal=_deal;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

