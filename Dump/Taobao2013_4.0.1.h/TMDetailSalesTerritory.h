//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMModel.h"

@class NSArray;

@interface TMDetailSalesTerritory : TMModel
{
    BOOL _isAllEnable;
    NSArray *_divisions;
}

@property(retain, nonatomic) NSArray *divisions; // @synthesize divisions=_divisions;
@property(nonatomic) BOOL isAllEnable; // @synthesize isAllEnable=_isAllEnable;
- (void).cxx_destruct;
- (id)defaultCityDivision;
- (id)findCityById:(long long)arg1;
- (id)findProvinceById:(long long)arg1;
- (Class)classForKey:(id)arg1;

@end

