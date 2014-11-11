//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIFont;

@interface TMTradeStyle : NSObject
{
    UIFont *_headerTitleFont;
    UIFont *_tipTitleFont;
    UIFont *_tipDetailFont;
    UIFont *_itemTitleFont;
    UIFont *_priceBigFont;
    UIColor *_titleColor;
    UIColor *_detailColor;
    UIColor *_priceColor;
}

+ (id)sharedStyle;
@property(retain, nonatomic) UIColor *priceColor; // @synthesize priceColor=_priceColor;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *priceBigFont; // @synthesize priceBigFont=_priceBigFont;
@property(retain, nonatomic) UIFont *itemTitleFont; // @synthesize itemTitleFont=_itemTitleFont;
@property(retain, nonatomic) UIFont *tipDetailFont; // @synthesize tipDetailFont=_tipDetailFont;
@property(retain, nonatomic) UIFont *tipTitleFont; // @synthesize tipTitleFont=_tipTitleFont;
@property(retain, nonatomic) UIFont *headerTitleFont; // @synthesize headerTitleFont=_headerTitleFont;
- (void).cxx_destruct;
- (id)init;

@end
