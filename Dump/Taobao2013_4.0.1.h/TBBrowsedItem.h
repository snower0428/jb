//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBBrowsedItem : TBModel
{
    NSString *_item_id;
    NSString *_title;
    NSString *_price;
    NSString *_fastPostFee;
    NSString *_sold;
    NSString *_pic_url;
    NSString *_priceWithRate;
    NSString *_isInLimitPromotion;
    NSString *_isB2c;
}

@property(copy, nonatomic) NSString *isB2c; // @synthesize isB2c=_isB2c;
@property(copy, nonatomic) NSString *isInLimitPromotion; // @synthesize isInLimitPromotion=_isInLimitPromotion;
@property(copy, nonatomic) NSString *priceWithRate; // @synthesize priceWithRate=_priceWithRate;
@property(copy, nonatomic) NSString *pic_url; // @synthesize pic_url=_pic_url;
@property(copy, nonatomic) NSString *sold; // @synthesize sold=_sold;
@property(copy, nonatomic) NSString *fastPostFee; // @synthesize fastPostFee=_fastPostFee;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *item_id; // @synthesize item_id=_item_id;
- (void).cxx_destruct;
- (id)keys;
- (id)convertToJson;

@end
