//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBCityFilterItem : NSObject
{
    NSString *_itemId;
    NSString *_itemName;
    NSString *_alias;
    int _index;
    NSString *_iconNameNormal;
    NSString *_iconNameSelected;
}

+ (id)modelFromDictionary:(id)arg1;
@property(retain, nonatomic) NSString *iconNameSelected; // @synthesize iconNameSelected=_iconNameSelected;
@property(retain, nonatomic) NSString *iconNameNormal; // @synthesize iconNameNormal=_iconNameNormal;
@property(nonatomic) int index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

