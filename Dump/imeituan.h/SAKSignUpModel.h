//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTBaseModel.h"

@interface SAKSignUpModel : MTBaseModel
{
}

- (void)checkUserName:(id)arg1 withCityID:(int)arg2 finished:(CDUnknownBlockType)arg3;
- (void)signUpForUserName:(id)arg1 withCode:(id)arg2 password:(id)arg3 andCity:(int)arg4 finished:(CDUnknownBlockType)arg5;
- (void)signUpForPhone:(id)arg1 withCode:(id)arg2 password:(id)arg3 andCity:(int)arg4 finished:(CDUnknownBlockType)arg5;
- (void)verifyPhone:(id)arg1 withCode:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)sendVerificationCodeToPhone:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)willExecuteHTTPRequest:(id)arg1;

@end

