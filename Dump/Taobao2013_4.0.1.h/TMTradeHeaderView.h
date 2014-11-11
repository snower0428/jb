//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMTradeDetailBaseView.h"

@class NSString, UIButton;

@interface TMTradeHeaderView : TMTradeDetailBaseView
{
    BOOL _highlighted;
    NSString *_name;
    UIButton *_actionCtl;
    NSString *_sellerNick;
    NSString *_sellerTel;
    UIButton *_wangwangBtn;
    UIButton *_telephoneBtn;
}

+ (float)calculateHeight:(id)arg1 sellerTel:(id)arg2;
@property(retain, nonatomic) UIButton *telephoneBtn; // @synthesize telephoneBtn=_telephoneBtn;
@property(retain, nonatomic) UIButton *wangwangBtn; // @synthesize wangwangBtn=_wangwangBtn;
@property(retain, nonatomic) NSString *sellerTel; // @synthesize sellerTel=_sellerTel;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) UIButton *actionCtl; // @synthesize actionCtl=_actionCtl;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)addTelephoneTarget:(id)arg1 action:(SEL)arg2;
- (void)addWangWangTarget:(id)arg1 action:(SEL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (float)drawContent:(struct CGContext *)arg1;
- (void)layoutSubviews;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

