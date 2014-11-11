//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MylotteryController, NSString, OrderInfo, UIButton, UIImageView, UILabel;

@interface LotteryOrderTableViewCell : UITableViewCell
{
    UILabel *_titleName;
    UILabel *_orderDetail;
    UIImageView *_icon;
    UIImageView *_triangle;
    UILabel *_payMoney;
    UILabel *_winMoney;
    UILabel *_state;
    UILabel *_substate;
    UILabel *_issue;
    UIButton *_purchaseBtn;
    NSString *_tradeNum;
    MylotteryController *_father;
    OrderInfo *_order;
    UILabel *_labelTime;
    UIImageView *_lineView;
    NSString *_strMobile;
}

@property(retain, nonatomic) OrderInfo *order; // @synthesize order=_order;
@property(nonatomic) MylotteryController *father; // @synthesize father=_father;
@property(retain, nonatomic) NSString *tradeNum; // @synthesize tradeNum=_tradeNum;
@property(retain, nonatomic) UIButton *purchaseBtn; // @synthesize purchaseBtn=_purchaseBtn;
@property(retain, nonatomic) UILabel *substate; // @synthesize substate=_substate;
@property(retain, nonatomic) UILabel *state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *winMoney; // @synthesize winMoney=_winMoney;
@property(retain, nonatomic) UILabel *payMoney; // @synthesize payMoney=_payMoney;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UIImageView *triangle; // @synthesize triangle=_triangle;
@property(retain, nonatomic) UILabel *orderDetail; // @synthesize orderDetail=_orderDetail;
@property(retain, nonatomic) UILabel *titleName; // @synthesize titleName=_titleName;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)showButton:(id)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)resetWinMoney:(float)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setFatherViewController:(id)arg1;
- (void)userPressPurchaseBtn:(id)arg1;

@end
