//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TBShopActivityItem : TBModel
{
    NSArray *_activityList;
    NSString *_catId;
    NSString *_activityId;
    NSString *_itemCount;
    NSArray *_itemIds;
    NSString *_picUrl;
    NSString *_shopId;
    NSString *_title;
    NSString *_type;
}

@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
@property(retain, nonatomic) NSArray *itemIds; // @synthesize itemIds=_itemIds;
@property(retain, nonatomic) NSString *itemCount; // @synthesize itemCount=_itemCount;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(retain, nonatomic) NSString *catId; // @synthesize catId=_catId;
@property(retain, nonatomic) NSArray *activityList; // @synthesize activityList=_activityList;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
