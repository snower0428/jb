//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBOrderRateAuctionInfoItem : TBModel
{
    NSString *_auctionId;
    NSString *_auctionPicUrl;
    NSString *_auctionPrice;
    NSString *_auctionTitle;
    NSString *_skuInfo;
}

@property(retain, nonatomic) NSString *skuInfo; // @synthesize skuInfo=_skuInfo;
@property(retain, nonatomic) NSString *auctionTitle; // @synthesize auctionTitle=_auctionTitle;
@property(retain, nonatomic) NSString *auctionPrice; // @synthesize auctionPrice=_auctionPrice;
@property(retain, nonatomic) NSString *auctionPicUrl; // @synthesize auctionPicUrl=_auctionPicUrl;
@property(retain, nonatomic) NSString *auctionId; // @synthesize auctionId=_auctionId;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

