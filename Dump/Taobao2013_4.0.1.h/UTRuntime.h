//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UTDataUploader, UTDeviceInfo, UTExcptionReporter, UTExecProxy, UTHardConfig, UTMethods, UTModuleManager, UTOnlineConfManager, UTProtocol, UTSession, UTSoftConfig, UTSystemHooks, UTTracer, UTUrlWrapper, UTVariables;

@interface UTRuntime : NSObject
{
    UTExecProxy *mExecProxy;
    UTSoftConfig *mSoftConfig;
    UTTracer *mTracer;
    UTProtocol *mProtocol;
    UTUrlWrapper *mUrlWrapper;
    UTOnlineConfManager *onlineConfManager;
    UTVariables *mVariables;
    UTDeviceInfo *mDeviceInfo;
    UTSession *mSession;
    UTDataUploader *mDataUploader;
    UTHardConfig *mHardConfig;
    UTMethods *mMethods;
    UTSystemHooks *mSystemHooks;
    UTModuleManager *mModuleManager;
    UTExcptionReporter *mExceptionReporter;
}

@property(readonly) UTExcptionReporter *mExceptionReporter; // @synthesize mExceptionReporter;
@property(readonly) UTModuleManager *mModuleManager; // @synthesize mModuleManager;
@property(readonly) UTSystemHooks *mSystemHooks; // @synthesize mSystemHooks;
@property(readonly) UTMethods *mMethods; // @synthesize mMethods;
@property(readonly) UTHardConfig *mHardConfig; // @synthesize mHardConfig;
@property(readonly) UTDataUploader *mDataUploader; // @synthesize mDataUploader;
@property(readonly) UTSession *mSession; // @synthesize mSession;
@property(readonly) UTDeviceInfo *mDeviceInfo; // @synthesize mDeviceInfo;
@property(readonly) UTVariables *mVariables; // @synthesize mVariables;
@property(readonly) UTUrlWrapper *mUrlWrapper; // @synthesize mUrlWrapper;
@property(readonly) UTProtocol *mProtocol; // @synthesize mProtocol;
@property(readonly) UTTracer *mTracer; // @synthesize mTracer;
@property(readonly) UTSoftConfig *mSoftConfig; // @synthesize mSoftConfig;
@property(readonly) UTExecProxy *mExecProxy; // @synthesize mExecProxy;
- (void).cxx_destruct;
- (void)uninit;
- (void)preUninit;
- (void)init_;
- (void)onCrashOccurred;
- (void)switchForeground;
- (void)switchBackground;
- (_Bool)preInit;
- (void)create;
- (id)getMSoftConfig;
- (id)getMExecProxy;

@end
