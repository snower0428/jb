//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

#import "MTCityBasedService.h"
#import "MTListService.h"
#import "MTUserBasedService.h"

@class MTCity, MTHomeHotDealDAO, MTHotDealModel, SAKUser;

@interface MTHomeHotDealService : MTBaseService <MTListService, MTCityBasedService, MTUserBasedService>
{
    MTHotDealModel *_model;
    MTHomeHotDealDAO *_DAO;
    int _offset;
    int _pageLimit;
    int _total;
}

@property(readonly, nonatomic) int total; // @synthesize total=_total;
@property(nonatomic) int pageLimit; // @synthesize pageLimit=_pageLimit;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)refreshHotDealWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadHomeHotDealForHolderPlaceWithCompletion:(CDUnknownBlockType)arg1;
- (void)loadHomeHotDealWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasMore;
@property(retain, nonatomic) SAKUser *user;
@property(retain, nonatomic) MTCity *city;
- (id)init;
- (void)resetDataList;

// Remaining properties
@property(readonly, nonatomic) BOOL isPageEnabled;

@end

