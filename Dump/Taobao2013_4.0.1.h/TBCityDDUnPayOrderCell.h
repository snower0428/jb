//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBCityDDOrderItem, UIButton, UIImageView, UILabel, UIView;

@interface TBCityDDUnPayOrderCell : UITableViewCell
{
    id <TBCityDDUnPayOrderCellDelegate> _delegate;
    UILabel *_titleView;
    UILabel *_descripView;
    UIButton *_payButton;
    TBCityDDOrderItem *_order;
    UIView *_desBackgroundView;
    UILabel *_addressView;
    UIImageView *_typeIconImageView;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *typeIconImageView; // @synthesize typeIconImageView=_typeIconImageView;
@property(retain, nonatomic) UILabel *addressView; // @synthesize addressView=_addressView;
@property(retain, nonatomic) UIView *desBackgroundView; // @synthesize desBackgroundView=_desBackgroundView;
@property(retain, nonatomic) TBCityDDOrderItem *order; // @synthesize order=_order;
@property(retain, nonatomic) UIButton *payButton; // @synthesize payButton=_payButton;
@property(retain, nonatomic) UILabel *descripView; // @synthesize descripView=_descripView;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) id <TBCityDDUnPayOrderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)payAction;
- (void)setData:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

