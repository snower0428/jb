//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

@interface TBCartBagUpdateItemInfo : TBModel
{
    NSString *_cartId;
    NSString *_originalPrice;
    NSString *_unitPrice;
    NSString *_descendPrice;
    NSString *_tprice;
}

@property(readonly, nonatomic) NSString *tprice; // @synthesize tprice=_tprice;
@property(readonly, nonatomic) NSString *descendPrice; // @synthesize descendPrice=_descendPrice;
@property(readonly, nonatomic) NSString *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(readonly, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
@property(readonly, nonatomic) NSString *cartId; // @synthesize cartId=_cartId;
- (void).cxx_destruct;

@end
