//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NdVGFeeInfoBase;

@interface NdVGCommodityInfo : NSObject
{
    NSString *strProductId;
    NSString *strProductName;
    NSString *strCateId;
    NSString *strOriginPrice;
    NSString *strSalePrice;
    NSString *strChecksum;
    NSString *strUnit;
    NSString *strGoodsDesc;
    NdVGFeeInfoBase *vgFeeInfo;
}

@property(retain, nonatomic) NdVGFeeInfoBase *vgFeeInfo; // @synthesize vgFeeInfo;
@property(retain, nonatomic) NSString *strGoodsDesc; // @synthesize strGoodsDesc;
@property(retain, nonatomic) NSString *strUnit; // @synthesize strUnit;
@property(retain, nonatomic) NSString *strChecksum; // @synthesize strChecksum;
@property(retain, nonatomic) NSString *strSalePrice; // @synthesize strSalePrice;
@property(retain, nonatomic) NSString *strOriginPrice; // @synthesize strOriginPrice;
@property(retain, nonatomic) NSString *strCateId; // @synthesize strCateId;
@property(retain, nonatomic) NSString *strProductName; // @synthesize strProductName;
@property(retain, nonatomic) NSString *strProductId; // @synthesize strProductId;
- (int)vgSellFlag;
- (id)description;
- (void)dealloc;

@end

