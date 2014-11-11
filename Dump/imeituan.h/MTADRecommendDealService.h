//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseService.h"

#import "MTListService.h"

@class MTADRecommendDealModel;

@interface MTADRecommendDealService : MTBaseService <MTListService>
{
    MTADRecommendDealModel *_model;
    int _offset;
    int _pageLimit;
    int _total;
}

@property(readonly, nonatomic) int total; // @synthesize total=_total;
@property(nonatomic) int pageLimit; // @synthesize pageLimit=_pageLimit;
@property(readonly, nonatomic) int offset; // @synthesize offset=_offset;
- (void).cxx_destruct;
- (void)refreshDataWithURLString:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)resetDataList;
- (BOOL)hasMore;
- (void)loadADRecommendDealsWithURLString:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) BOOL isPageEnabled;

@end
