//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSDKRequestModel.h"

@interface TBOrderDoRateModel : TBSDKRequestModel
{
}

- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)doRateWithOrderId:(id)arg1 mainOrderRateInfo:(id)arg2 subOrderRateInfo:(id)arg3;
- (void)doRateWithOrderId:(id)arg1 TMallDoRateItem:(id)arg2;
- (void)doRateWithOrderId:(id)arg1 taobaoDoRateItem:(id)arg2;

@end
