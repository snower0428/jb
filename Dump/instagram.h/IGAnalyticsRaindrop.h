//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGRaindropActivitySession, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface IGAnalyticsRaindrop : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    IGRaindropActivitySession *_currentActivitySession;
    unsigned long long _currentActivitySessionTimestamp;
    id _subscriptionDidBecomeActiveNotification;
    NSMutableArray *_loggedEvents;
    NSString *_deviceID;
    NSString *_deviceSoftwareVersion;
    NSString *_deviceHardwareVersion;
    CDUnknownBlockType _extractUserInfo;
    NSString *_appID;
    NSString *_appVersion;
}

+ (id)sharedInstance;
@property(copy) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy) NSString *appID; // @synthesize appID=_appID;
@property(copy) CDUnknownBlockType extractUserInfo; // @synthesize extractUserInfo=_extractUserInfo;
- (void).cxx_destruct;
- (id)getLoggedEvents;
- (void)addLoggedEvent:(id)arg1;
- (void)placePageViewItem:(id)arg1 navState:(id)arg2;
- (void)hashTagPageViewItem:(id)arg1 navState:(id)arg2;
- (void)commentOnFeedItem:(id)arg1 navState:(id)arg2;
- (void)sharePersonURL:(id)arg1 navState:(id)arg2;
- (void)shareMediaURL:(id)arg1 navState:(id)arg2;
- (void)likeMedia:(id)arg1 navState:(id)arg2;
- (void)viewSearchResultLocation:(id)arg1 navState:(id)arg2;
- (void)exploreViewPopularItem:(id)arg1 navState:(id)arg2;
- (void)exploreSearchFollowPerson:(id)arg1 navState:(id)arg2;
- (void)exploreSearchHashtag:(id)arg1 navState:(id)arg2;
- (void)exploreSearchViewPerson:(id)arg1 navState:(id)arg2;
- (void)searchEvent:(id)arg1 navState:(id)arg2;
- (void)searchBeginEvent:(id)arg1 navState:(id)arg2;
- (void)_logRaindropEntry:(id)arg1;
- (id)_newLogEntryWithNavState:(id)arg1 event:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)_updateActivitySession;

@end
