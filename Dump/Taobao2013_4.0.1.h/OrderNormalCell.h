//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class DividerLine, OrderInfo, UIButton, UILabel, UIViewController;

@interface OrderNormalCell : UITableViewCell
{
    UILabel *_name;
    UILabel *_value;
    DividerLine *_divider;
    UIButton *_purchaseBtn;
    UIViewController *_father;
    OrderInfo *_order;
}

@property(retain, nonatomic) OrderInfo *order; // @synthesize order=_order;
@property(retain, nonatomic) UIViewController *father; // @synthesize father=_father;
@property(retain, nonatomic) UIButton *purchaseBtn; // @synthesize purchaseBtn=_purchaseBtn;
@property(retain, nonatomic) DividerLine *divider; // @synthesize divider=_divider;
@property(retain, nonatomic) UILabel *value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)setShowPayButton:(BOOL)arg1 fatherView:(id)arg2 order:(id)arg3;
- (void)setName:(id)arg1 value:(id)arg2;
- (void)setName:(id)arg1 value:(id)arg2 isValueRed:(BOOL)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)userPressPurchaseBtn:(id)arg1;

@end
