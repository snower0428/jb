//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TBCityMenuAdderViewDelegate.h"
#import "TBCityMenuSKUViewDelegate.h"

@class TBCityMenuAdderView, TBCityMenuItem, TBCityMenuSKUView, TBCityStrikeThroughLabel, UIButton, UIImageView, UILabel, UIView;

@interface TBCityMenuItemColorCell : UITableViewCell <TBCityMenuAdderViewDelegate, TBCityMenuSKUViewDelegate>
{
    UIButton *_picBtn;
    UIImageView *_picView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_nickAndSoldLabel;
    UIImageView *_arrowView;
    TBCityStrikeThroughLabel *_oriPriceLabel;
    TBCityMenuAdderView *_adderView;
    TBCityMenuSKUView *_skuView;
    TBCityMenuItem *_item;
    UIButton *_tagImageView;
    UIView *_bottomLine;
}

+ (float)tableView:(id)arg1 rowHeightForObject:(id)arg2;
- (void).cxx_destruct;
- (void)doPicAction:(id)arg1;
- (void)menuSKUViewDidUpdateWithIndex:(int)arg1 withCount:(int)arg2;
- (void)menuAdderDidClickWith:(id)arg1 withCount:(int)arg2;
- (void)setObject:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setItem:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end
