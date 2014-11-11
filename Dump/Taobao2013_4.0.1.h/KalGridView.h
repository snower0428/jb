//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KalDate, KalLogic, KalMonthView, KalTileView;

@interface KalGridView : UIView
{
    KalLogic *logic;
    KalMonthView *frontMonthView;
    KalMonthView *backMonthView;
    KalTileView *selectedTile;
    KalTileView *highlightedTile;
    BOOL transitioning;
    id <KalViewDelegate> _delegate;
}

@property(nonatomic) id <KalViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KalLogic *logic; // @synthesize logic;
@property(readonly, nonatomic) BOOL transitioning; // @synthesize transitioning;
@property(retain, nonatomic) KalTileView *highlightedTile; // @synthesize highlightedTile;
@property(retain, nonatomic) KalTileView *selectedTile; // @synthesize selectedTile;
- (void).cxx_destruct;
@property(readonly, nonatomic) KalDate *selectedDate;
- (void)markTilesForDates:(id)arg1;
- (void)jumpToSelectedMonth;
- (void)swapMonthViews;
- (void)selectDate:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)slideDown;
- (void)slideUp;
- (void)slide:(int)arg1;
- (void)swapMonthsAndSlide:(int)arg1 keepOneRow:(BOOL)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)receivedTouches:(id)arg1 withEvent:(id)arg2;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 logic:(id)arg2 delegate:(id)arg3;

@end
