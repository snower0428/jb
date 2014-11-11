//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

#import "MTUserBasedModel.h"

@class SAKUser;

@interface MTOrderReviewModel : MTBaseModel <MTUserBasedModel>
{
}

- (void)uploadReviewImage:(id)arg1 OrderID:(int)arg2 uploadProgress:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4;
- (void)pushOrderReview:(id)arg1 version:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchTobeReviewedOrdersCompletion:(CDUnknownBlockType)arg1;
- (void)fetchReviewTypeWithOrderID:(int)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(retain, nonatomic) SAKUser *user;

@end

