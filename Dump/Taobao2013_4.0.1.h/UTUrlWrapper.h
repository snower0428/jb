//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTRuntimeModule.h"

@class UTDeviceInfo, UTSoftConfig, UTVariables;

@interface UTUrlWrapper : UTRuntimeModule
{
    UTSoftConfig *mSoftConfig;
    UTDeviceInfo *mDeviceInfo;
    UTVariables *mVariables;
}

+ (id)sign:(id)arg1 appSecret:(id)arg2 channel:(id)arg3 appVersion:(id)arg4 platform:(id)arg5 sdkVersion:(id)arg6 utdid:(id)arg7 v:(id)arg8 timestamp:(long)arg9;
- (void).cxx_destruct;
- (void)dealloc;
- (id)wrapUrl:(id)arg1 version:(id)arg2 isDD:(_Bool)arg3;
- (id)signedExceptionReportUrl;
- (id)signedUploadUrl;
- (id)signedConfUrl;
- (void)onStop;
- (void)onStart;

@end

