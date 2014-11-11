//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIButton, UIScrollView;

@interface TBCityDDUnPayOrderDetailView : UIView
{
    UIButton *_closeBtn;
    UIView *_maskView;
    UIButton *_payBtn;
    UIView *_bgView;
    NSArray *_items;
    UIScrollView *_scrollView;
    UIView *_footView;
    int _itemNum;
}

@property(nonatomic) int itemNum; // @synthesize itemNum=_itemNum;
@property(retain, nonatomic) UIView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (void)fixViewFrame;
- (void)addFootView;
- (void)addItemsView;
- (void)addHeadView;
- (void)addBgView;
- (void)addMaskBgView;
- (void)setupView;
- (void)addLoadView;
- (void)showErrorView:(id)arg1;
- (void)setupLoadView;
- (void)dealloc;
- (void)reloadView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withItemNum:(int)arg2;

@end
