//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MTOrderReviewType, MTStarRater, NSArray, UILabel;

@interface MTOrderReviewUnitView : UIView
{
    UILabel *_titleLabel;
    UILabel *_levelTextLabel;
    MTStarRater *_rater;
    NSArray *_levelTextArray;
    BOOL _valueChanged;
    MTOrderReviewType *_reviewType;
}

@property(readonly, nonatomic) BOOL valueChanged; // @synthesize valueChanged=_valueChanged;
@property(retain, nonatomic) MTOrderReviewType *reviewType; // @synthesize reviewType=_reviewType;
- (void).cxx_destruct;
- (void)updateLevelTextLabel;
- (void)updateRaterHighlightedStar;
- (void)didClickStarRater:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

