//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TBShopModule : TBModel
{
    BOOL _isWeakNetworkOn;
    unsigned int _moduleId;
    NSMutableDictionary *_data;
    float _moduleHeight;
    NSMutableDictionary *_adjustedItemList;
}

@property(retain, nonatomic) NSMutableDictionary *adjustedItemList; // @synthesize adjustedItemList=_adjustedItemList;
@property(nonatomic) float moduleHeight; // @synthesize moduleHeight=_moduleHeight;
@property(retain, nonatomic) NSMutableDictionary *data; // @synthesize data=_data;
@property(nonatomic) unsigned int moduleId; // @synthesize moduleId=_moduleId;
@property(nonatomic) BOOL isWeakNetworkOn; // @synthesize isWeakNetworkOn=_isWeakNetworkOn;
- (void).cxx_destruct;
- (id)stringWithJsonObject:(id)arg1;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
