//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBShopRelatedRecommendItem;

__attribute__((visibility("hidden")))
@interface TBShopRelatedRecommendModel : TBSDKRequestModel
{
    TBShopRelatedRecommendItem *_shopRelatedRecommendItem;
}

@property(readonly, nonatomic) TBShopRelatedRecommendItem *shopRelatedRecommendItem; // @synthesize shopRelatedRecommendItem=_shopRelatedRecommendItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)getRelatedRecommendItemsWithItemId:(id)arg1 sellerId:(id)arg2;
- (void)getRelatedRecommendItemsWithItemId:(id)arg1;

@end
