//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTCityBasedModel.h"

@class MTCity;

@interface MTSearchModel : MTBaseModel <MTCityBasedModel>
{
}

- (void)fetchSearchCountWithCategoryID:(id)arg1 areaID:(id)arg2 required:(id)arg3 keyword:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchSearchResultDealsWithKeyword:(id)arg1 searchSource:(id)arg2 userPosition:(id)arg3 fields:(id)arg4 categoryID:(id)arg5 areaID:(id)arg6 sortType:(int)arg7 offset:(unsigned int)arg8 limit:(unsigned int)arg9 filterDict:(id)arg10 completion:(CDUnknownBlockType)arg11;
- (void)fetchSearchResultMerchantsWithKeyword:(id)arg1 userPosition:(id)arg2 offset:(unsigned int)arg3 limit:(unsigned int)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchSearchResultDealsWithKeyword:(id)arg1 searchType:(id)arg2 searchSource:(id)arg3 userPosition:(id)arg4 fields:(id)arg5 offset:(unsigned int)arg6 limit:(unsigned int)arg7 completion:(CDUnknownBlockType)arg8;
- (void)fetchSearchSuggestsWithKeyword:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchSearchHotKeywordsByCityID:(int)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) MTCity *city;

@end
