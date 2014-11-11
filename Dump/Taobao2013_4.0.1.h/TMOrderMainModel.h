//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMOrderElementModel.h"

@class NSArray, NSString;

@interface TMOrderMainModel : TMOrderElementModel
{
    NSString *buyerId;
    NSString *sellerId;
    NSArray *_postages;
    int insureType;
    NSArray *_insuranceList;
    NSString *shopId;
    NSString *shopName;
    NSString *wangwangName;
    NSString *_promotionId;
    NSArray *_promotions;
    long long point;
}

@property(nonatomic) long long point; // @synthesize point;
@property(retain, nonatomic) NSArray *promotions; // @synthesize promotions=_promotions;
@property(retain, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) NSString *wangwangName; // @synthesize wangwangName;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId;
@property(retain, nonatomic) NSArray *insuranceList; // @synthesize insuranceList=_insuranceList;
@property(nonatomic) int insureType; // @synthesize insureType;
@property(retain, nonatomic) NSArray *postages; // @synthesize postages=_postages;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId;
@property(retain, nonatomic) NSString *buyerId; // @synthesize buyerId;
- (void).cxx_destruct;
- (void)setSelectedPostage:(id)arg1;
- (int)selectedPostageIndex;
- (id)postageModel;
- (void)setSelectedPromotion:(id)arg1;
- (int)selectedPromotionIndex;
- (id)promotionModel;
- (float)promotionPrice;
- (id)initWithDictionary:(id)arg1;

@end

