//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSimplestRegisterModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBSRRegisterRequestModel : TBSimplestRegisterModel
{
    NSString *_smsCodeForLogin;
}

@property(retain, nonatomic) NSString *smsCodeForLogin; // @synthesize smsCodeForLogin=_smsCodeForLogin;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)registerMobile:(id)arg1 inCountryRegion:(id)arg2 nick:(id)arg3 withSMSCode:(id)arg4 rsaPassword:(id)arg5 ts:(id)arg6;

@end

