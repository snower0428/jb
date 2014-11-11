//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCityService.h"

@class TBCityDDOrderReviewModel, TBCityEvaluateModel, TBCityShopCommentItem, TBCityTakeoutReviewModel, TBCityUploadFileItem, TBCityUploadFileModel, TBCityUploadTokenItem, TBCityUploadTokenModel;

@interface TBCityEvaluateService : TBCityService
{
    TBCityUploadTokenModel *_uploadTokenModel;
    TBCityUploadFileModel *_uploadFileModel;
    TBCityEvaluateModel *_evaluateModel;
    TBCityDDOrderReviewModel *_orderReviewModel;
    TBCityTakeoutReviewModel *_takeoutReviewModel;
}

@property(retain, nonatomic) TBCityTakeoutReviewModel *takeoutReviewModel; // @synthesize takeoutReviewModel=_takeoutReviewModel;
@property(retain, nonatomic) TBCityDDOrderReviewModel *orderReviewModel; // @synthesize orderReviewModel=_orderReviewModel;
@property(retain, nonatomic) TBCityEvaluateModel *evaluateModel; // @synthesize evaluateModel=_evaluateModel;
@property(retain, nonatomic) TBCityUploadFileModel *uploadFileModel; // @synthesize uploadFileModel=_uploadFileModel;
@property(retain, nonatomic) TBCityUploadTokenModel *uploadTokenModel; // @synthesize uploadTokenModel=_uploadTokenModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) TBCityShopCommentItem *commentItem;
@property(readonly, nonatomic) TBCityUploadFileItem *uploadFileItem;
@property(readonly, nonatomic) TBCityUploadTokenItem *uploadTokenItem;
- (void)sendTakeoutReview:(id)arg1 orderId:(id)arg2 content:(id)arg3 score:(int)arg4 speed:(int)arg5 diggItemIds:(id)arg6 context:(id)arg7;
- (void)sendReview:(id)arg1 orderId:(id)arg2 content:(id)arg3 score:(int)arg4 ugc:(id)arg5 context:(id)arg6;
- (void)sendEvaluate:(id)arg1 shopId:(id)arg2 content:(id)arg3 resourceUris:(id)arg4 feed:(id)arg5 context:(id)arg6;
- (void)uploadFile:(id)arg1 uploadToken:(id)arg2 context:(id)arg3;
- (void)getUploadToken:(id)arg1;
- (void)dealloc;

@end

