//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityItemList, TBCityReviewModel, TBCityWMReviewModel;

@interface TBCityReviewService : TBCityService
{
    TBCityReviewModel *_reviewModel;
    TBCityWMReviewModel *_wmReviewModel;
    TBCityItemList *_reviewList;
    TBCityItemList *_wmReviewList;
}

@property(retain, nonatomic) TBCityWMReviewModel *wmReviewModel; // @synthesize wmReviewModel=_wmReviewModel;
@property(retain, nonatomic) TBCityReviewModel *reviewModel; // @synthesize reviewModel=_reviewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityItemList *wmReviewList; // @synthesize wmReviewList=_wmReviewList;
@property(readonly, nonatomic) TBCityItemList *reviewList; // @synthesize reviewList=_reviewList;
- (void)dealloc;
- (void)getWMReviewList:(id)arg1 loadType:(int)arg2 context:(id)arg3;
- (void)getReviewList:(id)arg1 loadType:(int)arg2 context:(id)arg3;

@end

