//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTResponse.h"

@class NSArray;

@interface MTHomeCategoryResponse : MTResponse
{
    NSArray *_homePageCategoryArray;
    NSArray *_morePageCategoryArray;
}

@property(copy, nonatomic) NSArray *morePageCategoryArray; // @synthesize morePageCategoryArray=_morePageCategoryArray;
@property(copy, nonatomic) NSArray *homePageCategoryArray; // @synthesize homePageCategoryArray=_homePageCategoryArray;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

