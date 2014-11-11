//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityModel.h"

@class NSArray, NSString;

@interface TBCityMenuItem : TBCityModel
{
    NSString *_itemId;
    NSString *_itemName;
    NSString *_picPath;
    NSString *_intro;
    NSString *_shotIndex;
    NSString *_fullIndex;
    NSString *_itemUnit;
    NSString *_hot;
    float _price;
    float _oriPrice;
    float _totalPrice;
    int _soldCount;
    int _flags;
    int _count;
    int _niceCount;
    BOOL _expand;
    BOOL _isTakeout;
    NSArray *_skus;
    BOOL _isRecommend;
    BOOL _isSale;
    BOOL _isNew;
    BOOL _isHot;
    BOOL _showInWifi;
    BOOL _isSoldOut;
    BOOL _exist;
    BOOL _isSpecialOffer;
    int _couldBuyNumber;
    int _stock;
    NSString *_skuId;
}

@property(retain, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(nonatomic) BOOL isSpecialOffer; // @synthesize isSpecialOffer=_isSpecialOffer;
@property(nonatomic) int stock; // @synthesize stock=_stock;
@property(nonatomic) int couldBuyNumber; // @synthesize couldBuyNumber=_couldBuyNumber;
@property(nonatomic) BOOL exist; // @synthesize exist=_exist;
@property(nonatomic) float totalPrice; // @synthesize totalPrice=_totalPrice;
@property(nonatomic) BOOL showInWifi; // @synthesize showInWifi=_showInWifi;
@property(nonatomic) BOOL isHot; // @synthesize isHot=_isHot;
@property(nonatomic) BOOL isNew; // @synthesize isNew=_isNew;
@property(nonatomic) BOOL isSale; // @synthesize isSale=_isSale;
@property(nonatomic) BOOL isRecommend; // @synthesize isRecommend=_isRecommend;
@property(retain, nonatomic) NSString *hot; // @synthesize hot=_hot;
@property(nonatomic) BOOL isSoldOut; // @synthesize isSoldOut=_isSoldOut;
@property(retain, nonatomic) NSArray *skus; // @synthesize skus=_skus;
@property(nonatomic) BOOL expand; // @synthesize expand=_expand;
@property(nonatomic) BOOL isTakeout; // @synthesize isTakeout=_isTakeout;
@property(nonatomic) int niceCount; // @synthesize niceCount=_niceCount;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) int soldCount; // @synthesize soldCount=_soldCount;
@property(nonatomic) float oriPrice; // @synthesize oriPrice=_oriPrice;
@property(nonatomic) float price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *fullIndex; // @synthesize fullIndex=_fullIndex;
@property(retain, nonatomic) NSString *shotIndex; // @synthesize shotIndex=_shotIndex;
@property(retain, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(retain, nonatomic) NSString *itemUnit; // @synthesize itemUnit=_itemUnit;
@property(retain, nonatomic) NSString *picPath; // @synthesize picPath=_picPath;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)string;
- (void)setFromDictionary:(id)arg1;

@end

