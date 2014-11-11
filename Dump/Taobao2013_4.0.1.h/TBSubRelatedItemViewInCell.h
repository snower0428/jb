//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface TBSubRelatedItemViewInCell : UIView
{
    BOOL _isPlaceHolder;
    NSString *_imagePath;
    UIImageView *_productImageView;
    UILabel *_itemTitle;
    UILabel *_itemSalePrice;
    UILabel *_itemReservePrice;
    UILabel *_itemSold;
    CDUnknownBlockType _itemClickAction;
    int _itemIndex;
}

+ (id)itemView;
@property(nonatomic) int itemIndex; // @synthesize itemIndex=_itemIndex;
@property(copy, nonatomic) CDUnknownBlockType itemClickAction; // @synthesize itemClickAction=_itemClickAction;
@property(nonatomic) UILabel *itemSold; // @synthesize itemSold=_itemSold;
@property(nonatomic) UILabel *itemReservePrice; // @synthesize itemReservePrice=_itemReservePrice;
@property(nonatomic) UILabel *itemSalePrice; // @synthesize itemSalePrice=_itemSalePrice;
@property(nonatomic) UILabel *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(nonatomic) UIImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(nonatomic) BOOL isPlaceHolder; // @synthesize isPlaceHolder=_isPlaceHolder;
- (void).cxx_destruct;
- (void)imageViewWithPath:(id)arg1;
- (void)configwithRelatedItem:(id)arg1;
- (void)itemAction:(id)arg1;

@end

