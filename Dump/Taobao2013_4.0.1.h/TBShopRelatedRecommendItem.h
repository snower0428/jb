//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TBShopRelatedRecommendItem : TBModel
{
    NSArray *_itemList;
    NSString *_name;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSArray *itemList; // @synthesize itemList=_itemList;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
