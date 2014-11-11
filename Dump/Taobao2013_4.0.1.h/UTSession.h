//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTRuntimeModule.h"

@class NSDictionary, NSString;

@interface UTSession : UTRuntimeModule
{
    NSString *mSessionId;
    NSString *mUsernick;
    NSString *mLongLoginUsernick;
    _Bool mIsSessionCreated;
    NSString *mCurrentPageName;
    NSString *mCurrentControlName;
    long long mPageEnterTimestamp;
    long long mPreForegroundResident;
    long long mTotalApplicationResident;
    long long mTotalForegroundResident;
    NSDictionary *mSessionProperties;
    int mPageState;
}

@property long long mPreForegroundResident; // @synthesize mPreForegroundResident;
@property int mPageState; // @synthesize mPageState;
@property _Bool mIsSessionCreated; // @synthesize mIsSessionCreated;
@property(readonly) NSString *mLongLoginUsernick; // @synthesize mLongLoginUsernick;
@property(readonly) NSString *mUsernick; // @synthesize mUsernick;
@property(readonly) NSString *mSessionId; // @synthesize mSessionId;
- (void).cxx_destruct;
- (void)onStop;
- (void)onStart;
- (void)reset;
- (_Bool)saveLongLoginUsernick:(id)arg1;
- (void)updateUserAccount:(id)arg1 userid:(id)arg2 args:(id)arg3;
- (long long)getAndResetTotalApplicationResident;
- (long long)getAndResetTotalForegroundResident;
- (void)pageLeave;
- (void)pageEnter;
- (id)mCurrentControlName;
- (void)currentControlName:(id)arg1;
- (id)mCurrentPageName;
- (void)currentPageName:(id)arg1;
- (id)generateSessionId;
- (void)clearSessionProperties;
- (id)sessionProperties;
- (void)updateSessionProperties:(id)arg1;
- (void)onPreStart;
- (id)init;

@end
