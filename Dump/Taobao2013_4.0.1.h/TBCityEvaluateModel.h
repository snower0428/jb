//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCitySDKRequestModel.h"

@class TBCityShopCommentItem;

@interface TBCityEvaluateModel : TBCitySDKRequestModel
{
    TBCityShopCommentItem *_commentItem;
}

@property(readonly, nonatomic) TBCityShopCommentItem *commentItem; // @synthesize commentItem=_commentItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)sendEvaluate:(id)arg1 shopId:(id)arg2 content:(id)arg3 resourceUris:(id)arg4 feed:(id)arg5;

@end
