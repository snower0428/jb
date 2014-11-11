//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSString, TBStrikeThroughLabel, TTTAttributedLabel, UIImageView, UILabel, UIView;

@interface TBSearchResultsTableViewCell : UITableViewCell
{
    BOOL _isBig;
    BOOL _isPlaceHolder;
    TBStrikeThroughLabel *_priceLabelRight;
    UILabel *_priceLabelLeft;
    UIImageView *_productImageView;
    TTTAttributedLabel *_titleLabel;
    UILabel *_numLabel;
    UIImageView *_productBackgroundImageView;
    UIImageView *_tmallIconImageView;
    UIImageView *_p4pIconImageView;
    UILabel *_taoJinBiLabel;
    UIImageView *_mobiledDiscountImg;
    UILabel *_mobileLabel;
    UIView *_mobileView;
    UIImageView *_moreImageView;
    UILabel *_feeLabel;
    NSString *_imagePath;
    NSArray *_itemViews;
    UILabel *_locationLabel;
    CDUnknownBlockType _itemClickAction;
}

+ (float)doubleHeight;
+ (float)smallHeight;
+ (float)newbigHeight;
+ (float)bigHeight;
+ (id)doubleCell;
+ (id)newBigCell;
+ (id)bigCell;
+ (id)cell;
@property(copy, nonatomic) CDUnknownBlockType itemClickAction; // @synthesize itemClickAction=_itemClickAction;
@property(nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) NSArray *itemViews; // @synthesize itemViews=_itemViews;
@property(copy, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
@property(nonatomic) BOOL isBig; // @synthesize isBig=_isBig;
@property(nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
@property(nonatomic) UIImageView *moreImageView; // @synthesize moreImageView=_moreImageView;
@property(retain, nonatomic) UIView *mobileView; // @synthesize mobileView=_mobileView;
@property(retain, nonatomic) UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(retain, nonatomic) UIImageView *mobiledDiscountImg; // @synthesize mobiledDiscountImg=_mobiledDiscountImg;
@property(retain, nonatomic) UILabel *taoJinBiLabel; // @synthesize taoJinBiLabel=_taoJinBiLabel;
@property(retain, nonatomic) UIImageView *p4pIconImageView; // @synthesize p4pIconImageView=_p4pIconImageView;
@property(retain, nonatomic) UIImageView *tmallIconImageView; // @synthesize tmallIconImageView=_tmallIconImageView;
@property(retain, nonatomic) UIImageView *productBackgroundImageView; // @synthesize productBackgroundImageView=_productBackgroundImageView;
@property(nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(nonatomic) TTTAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) UILabel *priceLabelLeft; // @synthesize priceLabelLeft=_priceLabelLeft;
@property(nonatomic) TBStrikeThroughLabel *priceLabelRight; // @synthesize priceLabelRight=_priceLabelRight;
- (void).cxx_destruct;
- (void)imageViewWithPathsIfPlaceHolder:(id)arg1;
- (void)imageViewWithPaths:(id)arg1;
- (void)imageViewWithPath:(id)arg1 needAutoResize:(BOOL)arg2;
- (void)configwithWapItems:(id)arg1 tagIndexs:(id)arg2 clickAction:(CDUnknownBlockType)arg3;
- (void)configwithWapItem:(id)arg1;
- (void)configDouble;
- (void)configBig;
- (void)configSmall;
- (void)normalConfig;
- (void)configwithShopAuctionItem:(id)arg1;

@end

