//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSArray, NSDictionary;

@interface TMDetailSKU : TMModel
{
    NSArray *_skus;
    NSArray *_props;
    NSDictionary *_propsMap;
}

@property(retain, nonatomic) NSDictionary *propsMap; // @synthesize propsMap=_propsMap;
@property(retain, nonatomic) NSArray *props; // @synthesize props=_props;
@property(retain, nonatomic) NSArray *skus; // @synthesize skus=_skus;
- (void).cxx_destruct;
- (id)getProps:(id)arg1;
- (void)buildPropsMap;
- (Class)classForKey:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

