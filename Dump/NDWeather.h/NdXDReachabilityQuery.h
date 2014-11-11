//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NdXDReachabilityQuery : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    struct __CFArray *_runLoops;
    NSString *_hostNameOrAddress;
}

@property(retain, nonatomic) NSString *hostNameOrAddress; // @synthesize hostNameOrAddress=_hostNameOrAddress;
@property(nonatomic) struct __CFArray *runLoops; // @synthesize runLoops=_runLoops;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef=_reachabilityRef;
- (struct __CFRunLoop *)startListeningForReachabilityChanges:(struct __SCNetworkReachability *)arg1 onRunLoop:(struct __CFRunLoop *)arg2;
- (void)scheduleOnRunLoop:(id)arg1;
- (BOOL)isScheduledOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)dealloc;
- (id)init;

@end

