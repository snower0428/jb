//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSimplestRegisterModel.h"

__attribute__((visibility("hidden")))
@interface TBSRSendSMSCodeRequestModel : TBSimplestRegisterModel
{
}

- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)sendSMSCodeForRegisterToMobile:(id)arg1 inCountryRegion:(id)arg2 withBizType:(unsigned int)arg3;
- (void)sendSMSCodeForRegisterToMobile:(id)arg1 inCountryRegion:(id)arg2;
- (void)sendSMSCodeForLoginToMobile:(id)arg1 inCountryRegion:(id)arg2;

@end
