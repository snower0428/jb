//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@class TBOrderDetailItem;

@interface TBOrderDetailModel : TBSDKRequestModel
{
    TBOrderDetailItem *_orderDetailItem;
}

@property(readonly, nonatomic) TBOrderDetailItem *orderDetailItem; // @synthesize orderDetailItem=_orderDetailItem;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)loadOrderDetailWithOrderId:(id)arg1;
- (void)loadOrderDetailWithOrderId:(id)arg1 archive:(BOOL)arg2;
- (void)loadOrderDetailWithOrderId:(id)arg1 archive:(BOOL)arg2 type:(id)arg3;

@end
