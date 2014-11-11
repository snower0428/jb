//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBStrikeThroughLabel, UIImageView, UILabel;

@interface TBSubResultViewInCell : UIView
{
    BOOL _isPlaceHolder;
    NSString *_imagePath;
    UIImageView *_productBackgroundImageView;
    UIImageView *_productImageView;
    UILabel *_titleLabel;
    TBStrikeThroughLabel *_priceLabelRight;
    UILabel *_priceLabelLeft;
    UILabel *_numLabel;
    UIImageView *_tmallIconImageView;
    UIImageView *_p4pIconImageView;
    UIImageView *_mobiledDiscountImg;
    UILabel *_mobileLabel;
    UIView *_mobileView;
    UILabel *_taoJinBiLabel;
    UIImageView *_rightRim;
    UIImageView *_bottomLine;
    CDUnknownBlockType _itemClickAction;
    int _itemIndex;
}

+ (id)itemView;
@property(nonatomic) int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(copy, nonatomic) CDUnknownBlockType itemClickAction; // @synthesize itemClickAction=_itemClickAction;
@property(nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) UIImageView *rightRim; // @synthesize rightRim=_rightRim;
@property(retain, nonatomic) UILabel *taoJinBiLabel; // @synthesize taoJinBiLabel=_taoJinBiLabel;
@property(retain, nonatomic) UIView *mobileView; // @synthesize mobileView=_mobileView;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UIImageView *mobiledDiscountImg; // @synthesize mobiledDiscountImg=_mobiledDiscountImg;
@property(retain, nonatomic) UIImageView *p4pIconImageView; // @synthesize p4pIconImageView=_p4pIconImageView;
@property(retain, nonatomic) UIImageView *tmallIconImageView; // @synthesize tmallIconImageView=_tmallIconImageView;
@property(nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) UILabel *priceLabelLeft; // @synthesize priceLabelLeft=_priceLabelLeft;
@property(nonatomic) TBStrikeThroughLabel *priceLabelRight; // @synthesize priceLabelRight=_priceLabelRight;
@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) UIImageView *productBackgroundImageView; // @synthesize productBackgroundImageView=_productBackgroundImageView;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
- (void).cxx_destruct;
- (void)touchEndAction:(id)arg1;
- (void)touchDownAction:(id)arg1;
- (void)imageViewWithPath:(id)arg1;
- (void)configwithWapItem:(id)arg1;
- (void)config;
- (void)itemAction:(id)arg1;

@end

