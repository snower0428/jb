//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityItemList;

@interface TBCityWMReviewModel : TBCitySDKRequestModel
{
    TBCityItemList *_reviewList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityItemList *reviewList; // @synthesize reviewList=_reviewList;
- (void)resetForLoadType:(int)arg1;
- (void)reset;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getReviewList:(id)arg1;

@end

