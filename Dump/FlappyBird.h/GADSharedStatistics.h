//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADStatistics.h"

__attribute__((visibility("hidden")))
@interface GADSharedStatistics : GADStatistics
{
    unsigned long long sessionId_;
    unsigned long long seqNum_;
}

+ (void)seedRandomIfNecessary;
+ (id)sessionStatsNames;
+ (id)sessionTimingNames;
+ (id)allCounterNames;
+ (id)allTimingNames;
+ (id)sharedInstance;
+ (void)releaseSharedStatistics;
@property(nonatomic) unsigned long long seqNum; // @synthesize seqNum=seqNum_;
@property(readonly, nonatomic) unsigned long long sessionId; // @synthesize sessionId=sessionId_;
- (int)incrementAdRequestCount;
- (id)incrementAndReturnSequenceNumberAsString;
- (id)sessionIdAsString;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (id)parameters;
@property(nonatomic) int adRequestCount;

@end

