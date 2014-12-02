//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, UIView;

__attribute__((visibility("hidden")))
@interface GADActiveViewMonitor : NSObject
{
    id <GADActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewBounds;
    struct CGRect _monitoredViewVisibleBounds;
    struct CGRect _monitoredViewContainerBounds;
    BOOL _monitoredViewIsVisible;
    BOOL _monitoredViewIsSubViewOfVisibleWindow;
    BOOL _activeViewMonitorEnabled;
    UIView *_monitoredView;
    NSArray *_refreshIntervals;
    unsigned int _nextRefreshIntervalIndex;
    NSTimer *_updateViewBoundsTimer;
    struct dispatch_queue_s *_lockQueue;
}

@property(nonatomic) struct dispatch_queue_s *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(nonatomic) BOOL activeViewMonitorEnabled; // @synthesize activeViewMonitorEnabled=_activeViewMonitorEnabled;
@property(retain, nonatomic) NSTimer *updateViewBoundsTimer; // @synthesize updateViewBoundsTimer=_updateViewBoundsTimer;
@property(nonatomic) unsigned int nextRefreshIntervalIndex; // @synthesize nextRefreshIntervalIndex=_nextRefreshIntervalIndex;
@property(readonly, copy, nonatomic) NSArray *refreshIntervals; // @synthesize refreshIntervals=_refreshIntervals;
@property(readonly, nonatomic) UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
@property BOOL monitoredViewIsSubViewOfVisibleWindow;
@property BOOL monitoredViewIsVisible;
@property struct CGRect monitoredViewContainerBounds;
@property struct CGRect monitoredViewVisibleBounds;
@property struct CGRect monitoredViewBounds;
@property __weak id <GADActiveViewMonitorDelegate> delegate;
- (void)updateViewBounds;
- (void)updateViewBoundsTimerCallback;
- (double)nextRefreshInterval;
- (void)stopMonitoring;
- (void)sample;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1 refreshIntervals:(id)arg2;

@end
