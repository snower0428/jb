//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBFavoriteCategoryItem : TBModel
{
    NSString *_categoryId;
    NSString *_categoryValue;
    NSString *_categoryCount;
}

@property(retain, nonatomic) NSString *categoryCount; // @synthesize categoryCount=_categoryCount;
@property(retain, nonatomic) NSString *categoryValue; // @synthesize categoryValue=_categoryValue;
@property(retain, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end
