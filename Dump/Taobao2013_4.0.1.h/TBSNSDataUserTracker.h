//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface TBSNSDataUserTracker : NSObject
{
    BOOL _enableWeitaoUserTracker;
    NSMutableDictionary *_dataUserTrackerArgs;
}

+ (void)clearDataUserTrackerArgs;
+ (id)allKeys;
+ (void)addEventObject:(id)arg1 withKey:(id)arg2;
+ (id)dataUserTrackerArgs;
+ (void)effectEventWithArgs:(id)arg1;
+ (BOOL)isWeitaoUserTrackerEnable;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dataUserTrackerArgs; // @synthesize dataUserTrackerArgs=_dataUserTrackerArgs;
@property(nonatomic) BOOL enableWeitaoUserTracker; // @synthesize enableWeitaoUserTracker=_enableWeitaoUserTracker;
- (void).cxx_destruct;
- (void)clearDataUserTrackerArgs;
- (id)allKeys;
- (void)setUserTrackerArgs:(id)arg1;
- (void)addEventObject:(id)arg1 withKey:(id)arg2;
- (id)init;

@end

