//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface CPBettingView : UIView
{
    NSMutableArray *_itemArray;
    int _lotteryType;
}

@property int lotteryType; // @synthesize lotteryType=_lotteryType;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
- (void).cxx_destruct;
- (void)setItemObserver:(id)arg1;
- (void)updateShow;
- (void)resetSelectedStatus;
- (void)layoutSubviews;
- (void)instantiationSubViews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
