//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CPBettingItemBaseView.h"

#import "ButtonGroupDelegate.h"
#import "TBGridViewDataSource.h"
#import "TBGridViewDelegate.h"

@class TBGridView, TBMechanicalSeleButton, UIImageView, UILabel, UIView;

@interface CPBettingItemMechSelBallView : CPBettingItemBaseView <ButtonGroupDelegate, TBGridViewDelegate, TBGridViewDataSource>
{
    TBMechanicalSeleButton *_mechSeleBtn;
    TBGridView *_gridView;
    UILabel *_rinderLabel;
    UIImageView *_separatorBar;
    UIView *maskView;
    int meshSelectCount;
}

+ (id)BettingItemViewWithItemData:(id)arg1 andGridWidth:(float)arg2;
@property(nonatomic) int meshSelectCount; // @synthesize meshSelectCount;
@property(retain, nonatomic) UIImageView *separatorBar; // @synthesize separatorBar=_separatorBar;
@property(retain, nonatomic) UILabel *rinderLabel; // @synthesize rinderLabel=_rinderLabel;
@property(retain, nonatomic) TBGridView *gridView; // @synthesize gridView=_gridView;
@property(retain, nonatomic) TBMechanicalSeleButton *mechSeleBtn; // @synthesize mechSeleBtn=_mechSeleBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gridView:(id)arg1 didTapGridAtIndexPath:(int)arg2;
- (void)updateCell:(id)arg1 cellForGridAtIndexPath:(int)arg2;
- (id)gridView:(id)arg1 cellForGridAtIndexPath:(int)arg2;
- (int)gridView:(id)arg1 numberOfGridsInSection:(int)arg2;
- (void)btnGroupViewWillDisapper;
- (void)btnGroupSelect:(id)arg1;
- (void)mechSeleBtnValueChanged:(id)arg1;
- (void)resMechSeletedStatus;
- (int)gridView:(id)arg1 didDeselectGridAtIndex:(int)arg2;
- (int)gridView:(id)arg1 didSelectGridAtIndex:(int)arg2;
- (int)gridView:(id)arg1 willDeselectGridAtIndex:(int)arg2;
- (int)gridView:(id)arg1 willSelectGridAtIndex:(int)arg2;
- (int)GridView:(id)arg1 numberOfCellsInSection:(int)arg2;
- (id)GridView:(id)arg1 itemForIndex:(int)arg2;
- (void)updateShow;
- (void)resetSelectedStatus;
- (id)attributedLabelComponent;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithGridWidth:(float)arg1;

@end

