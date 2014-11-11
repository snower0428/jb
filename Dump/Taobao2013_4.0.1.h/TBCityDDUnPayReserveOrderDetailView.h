//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBCityMyReservationItem, UIButton;

@interface TBCityDDUnPayReserveOrderDetailView : UIView
{
    UIButton *_closeBtn;
    UIView *_maskView;
    UIButton *_payBtn;
    UIView *_bgView;
    TBCityMyReservationItem *_item;
    UIView *_footView;
}

@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) TBCityMyReservationItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (void)addHeadView;
- (void)addBgView;
- (void)addMaskBgView;
- (void)addLoadView;
- (void)addReserveType;
- (void)addReserveTime;
- (void)addReserveMoney;
- (void)addReserveDetail;
- (void)addFootView;
- (void)showErrorView:(id)arg1;
- (void)reloadView:(id)arg1;
- (void)setupLoadView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

