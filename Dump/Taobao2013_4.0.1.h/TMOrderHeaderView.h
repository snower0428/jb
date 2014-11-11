//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMOrderBaseView.h"

@class NSString, UIButton, UIImage, UIImageView;

@interface TMOrderHeaderView : TMOrderBaseView
{
    BOOL _highlighted;
    BOOL _isExpand;
    BOOL _hasPromoPrice;
    UIImage *_iconImage;
    NSString *_name;
    int _itemCount;
    UIButton *_actionCtl;
    UIImageView *_arrowView;
    UIImageView *_expandView;
    double _totalPrice;
    double _originalPrice;
}

+ (float)calculateHeight;
@property(nonatomic) BOOL hasPromoPrice; // @synthesize hasPromoPrice=_hasPromoPrice;
@property(retain, nonatomic) UIImageView *expandView; // @synthesize expandView=_expandView;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIButton *actionCtl; // @synthesize actionCtl=_actionCtl;
@property(nonatomic) double originalPrice; // @synthesize originalPrice=_originalPrice;
@property(nonatomic) double totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) int itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (float)drawContent:(struct CGContext *)arg1;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)setExpand:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
