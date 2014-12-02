//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADSDKCoreWebViewNotification.h"

@class GADSDKCoreWebView, NSArray, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GADSDKCoreController : NSObject <GADSDKCoreWebViewNotification>
{
    NSArray *_activeViewMonitorRefreshIntervals;
    BOOL _observesSDKCoreWebView;
    BOOL _SDKConstantsNeedReload;
    struct dispatch_queue_s *_lockQueue;
    GADSDKCoreWebView *_activeSDKCoreWebView;
    unsigned int _requestID;
    NSMutableArray *_pendingActiveWebViewLoadDelegates;
    NSMutableDictionary *_pendingBuildAdURLDelegates;
    NSMutableArray *_activeViewSDKCoreWebViews;
    unsigned long long _lastWebViewRefreshTimestamp;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *activeViewSDKCoreWebViews; // @synthesize activeViewSDKCoreWebViews=_activeViewSDKCoreWebViews;
@property(nonatomic) BOOL SDKConstantsNeedReload; // @synthesize SDKConstantsNeedReload=_SDKConstantsNeedReload;
@property(nonatomic) BOOL observesSDKCoreWebView; // @synthesize observesSDKCoreWebView=_observesSDKCoreWebView;
@property(retain, nonatomic) NSMutableDictionary *pendingBuildAdURLDelegates; // @synthesize pendingBuildAdURLDelegates=_pendingBuildAdURLDelegates;
@property(retain, nonatomic) NSMutableArray *pendingActiveWebViewLoadDelegates; // @synthesize pendingActiveWebViewLoadDelegates=_pendingActiveWebViewLoadDelegates;
@property(nonatomic) unsigned int requestID; // @synthesize requestID=_requestID;
@property(retain, nonatomic) GADSDKCoreWebView *activeSDKCoreWebView; // @synthesize activeSDKCoreWebView=_activeSDKCoreWebView;
@property(nonatomic) struct dispatch_queue_s *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(nonatomic) unsigned long long lastWebViewRefreshTimestamp; // @synthesize lastWebViewRefreshTimestamp=_lastWebViewRefreshTimestamp;
- (void).cxx_destruct;
@property(copy) NSArray *activeViewMonitorRefreshIntervals;
- (void)registerForSDKCoreNotifications;
- (void)loadAdURL:(id)arg1;
- (void)loadSDKConstants:(id)arg1;
- (void)didMakeInvalidRequest:(id)arg1;
- (void)observeSDKCoreWebViewForSDKCoreLoadRequestCompleted;
- (void)didFinishLoadingSDKCoreInSDKCoreWebView:(id)arg1;
- (BOOL)refreshActiveWebViewSDKCore;
- (void)buildAdURL:(id)arg1;
- (void)finishedUsingSDKCoreWebView:(id)arg1;
- (id)nextSDKCoreWebView;
- (void)dealloc;
- (id)init;
- (void)removeFinishedActiveViewWebViews;
- (void)cacheRunningActiveViewWebView:(id)arg1;

@end

