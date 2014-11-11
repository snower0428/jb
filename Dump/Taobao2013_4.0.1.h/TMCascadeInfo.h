//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSArray, NSDictionary;

@interface TMCascadeInfo : TMModel
{
    NSArray *_rootPropIds;
    NSDictionary *_casPropDepthMap;
    NSDictionary *_topSkuPVMap;
    NSDictionary *_skuCascadeMap;
}

@property(retain, nonatomic) NSDictionary *skuCascadeMap; // @synthesize skuCascadeMap=_skuCascadeMap;
@property(retain, nonatomic) NSDictionary *topSkuPVMap; // @synthesize topSkuPVMap=_topSkuPVMap;
@property(retain, nonatomic) NSDictionary *casPropDepthMap; // @synthesize casPropDepthMap=_casPropDepthMap;
@property(retain, nonatomic) NSArray *rootPropIds; // @synthesize rootPropIds=_rootPropIds;
- (void).cxx_destruct;
- (BOOL)isRootProperty:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

