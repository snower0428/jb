//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, TBOrderTaobaoDoRateMainOrderRateInfo;

@interface TBOrderTaoBaoDoRateItem : TBModel
{
    TBOrderTaobaoDoRateMainOrderRateInfo *_mainOrderRateInfo;
    NSArray *_subOrderRateInfo;
}

@property(retain, nonatomic) NSArray *subOrderRateInfo; // @synthesize subOrderRateInfo=_subOrderRateInfo;
@property(retain, nonatomic) TBOrderTaobaoDoRateMainOrderRateInfo *mainOrderRateInfo; // @synthesize mainOrderRateInfo=_mainOrderRateInfo;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)init;

@end

