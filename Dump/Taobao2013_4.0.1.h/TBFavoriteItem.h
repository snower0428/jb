//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSDecimalNumber, NSString;

__attribute__((visibility("hidden")))
@interface TBFavoriteItem : TBModel
{
    BOOL _mall;
    NSString *_numId;
    NSString *_title;
    NSString *_img;
    NSString *_collectCount;
    NSString *_collecttime;
    NSString *_tag;
    NSString *_ownernick;
    NSString *_ownerId;
    NSString *_url;
    NSString *_price;
    NSString *_promotionPrice;
    NSString *_status;
    NSString *_auctionType;
    NSString *_userType;
    NSString *_promotions;
    NSString *_type;
    NSString *_rank;
    NSString *_goodPercent;
    NSString *_goodsCount;
    NSArray *_goods;
    NSArray *_promotion;
    NSDecimalNumber *_num_iid;
}

@property(retain, nonatomic) NSDecimalNumber *num_iid; // @synthesize num_iid=_num_iid;
@property(nonatomic) BOOL mall; // @synthesize mall=_mall;
@property(retain, nonatomic) NSArray *promotion; // @synthesize promotion=_promotion;
@property(retain, nonatomic) NSArray *goods; // @synthesize goods=_goods;
@property(retain, nonatomic) NSString *goodsCount; // @synthesize goodsCount=_goodsCount;
@property(retain, nonatomic) NSString *goodPercent; // @synthesize goodPercent=_goodPercent;
@property(retain, nonatomic) NSString *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(retain, nonatomic) NSString *auctionType; // @synthesize auctionType=_auctionType;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSString *ownernick; // @synthesize ownernick=_ownernick;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *collecttime; // @synthesize collecttime=_collecttime;
@property(retain, nonatomic) NSString *collectCount; // @synthesize collectCount=_collectCount;
@property(retain, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *numId; // @synthesize numId=_numId;
- (void).cxx_destruct;
- (BOOL)isMall;
- (int)favoriteType;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
