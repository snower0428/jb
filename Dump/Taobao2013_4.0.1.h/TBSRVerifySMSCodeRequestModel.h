//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSimplestRegisterModel.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface TBSRVerifySMSCodeRequestModel : TBSimplestRegisterModel
{
    NSString *_checkCodeId;
    NSString *_checkCodeUrl;
    NSString *_sysGeneratedNick;
    NSString *_smsCodeForLogin;
    NSString *_aliAccountSource;
}

@property(retain, nonatomic) NSString *aliAccountSource; // @synthesize aliAccountSource=_aliAccountSource;
@property(retain, nonatomic) NSString *smsCodeForLogin; // @synthesize smsCodeForLogin=_smsCodeForLogin;
@property(retain, nonatomic) NSString *sysGeneratedNick; // @synthesize sysGeneratedNick=_sysGeneratedNick;
@property(retain, nonatomic) NSString *checkCodeUrl; // @synthesize checkCodeUrl=_checkCodeUrl;
@property(retain, nonatomic) NSString *checkCodeId; // @synthesize checkCodeId=_checkCodeId;
- (void).cxx_destruct;
- (void)requestDidLoadFailed:(id)arg1;
- (void)requestDidFinishLoad:(id)arg1;
- (void)verifyMobile:(id)arg1 inCountryRegion:(id)arg2 withSMSCode:(id)arg3 checkCodeId:(id)arg4 checkCode:(id)arg5 bizType:(unsigned int)arg6;
- (void)registerVerifyMobile:(id)arg1 inCountryRegion:(id)arg2 withSMSCode:(id)arg3 checkCodeId:(id)arg4 checkCode:(id)arg5;
- (void)loginVerifyMobile:(id)arg1 inCountryRegion:(id)arg2 withSMSCode:(id)arg3 checkCodeId:(id)arg4 checkCode:(id)arg5;

@end

