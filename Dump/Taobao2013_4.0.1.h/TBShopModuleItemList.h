//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TBShopModuleItemList : TBModel
{
    NSArray *_items;
    NSString *_moreLink;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *moreLink; // @synthesize moreLink=_moreLink;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)stringWithJsonObject:(id)arg1;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

