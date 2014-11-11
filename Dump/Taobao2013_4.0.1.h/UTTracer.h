//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTOnlineConfBusiness.h"

@class UTDelayEventIDStrategier, UTNetworkTimeHelper, UTSimpleEventIDStrategier;

@interface UTTracer : UTOnlineConfBusiness
{
    UTNetworkTimeHelper *mTimeUtil;
    int mIdx;
    UTSimpleEventIDStrategier *mEventStrategier;
    UTDelayEventIDStrategier *mDelayEventStrategier;
    id <UTEventDispatchProtocol> _delegate;
}

+ (id)getSimpleFormatString:(int)arg1 idx:(int)arg2 page:(id)arg3 eventId:(int)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 args:(id)arg8;
+ (id)correctField:(id)arg1;
@property(nonatomic) id <UTEventDispatchProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onFail:(id)arg1;
- (void)onNoConfArrived:(id)arg1;
- (void)onArrived:(id)arg1 confContent:(id)arg2;
- (void)onPreLoad:(id)arg1 confContent:(id)arg2;
- (id)requiredConfNameList;
- (_Bool)doTrace:(int)arg1 page:(id)arg2 eventId:(int)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 args:(id)arg7 timestamp:(long long)arg8;
- (id)getFullFormatString:(id)arg1 timestamp:(long long)arg2;
- (void)updateServerTimestamp:(long long)arg1;
- (void)onSwitchBackground;
- (void)saveIdx;
- (void)onStop;
- (void)onPreStart;

@end

