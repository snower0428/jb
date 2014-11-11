//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTA4QCReachability : NSObject
{
    struct __SCNetworkReachability *reachabilityRef;
    struct dispatch_queue_s *reachabilitySerialQueue;
    BOOL reachableOnWWAN;
    CDUnknownBlockType reachableBlock;
    CDUnknownBlockType unreachableBlock;
    id reachabilityObject;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostname:(id)arg1;
@property(retain, nonatomic) id reachabilityObject; // @synthesize reachabilityObject;
@property(copy, nonatomic) CDUnknownBlockType unreachableBlock; // @synthesize unreachableBlock;
@property(copy, nonatomic) CDUnknownBlockType reachableBlock; // @synthesize reachableBlock;
@property(nonatomic) BOOL reachableOnWWAN; // @synthesize reachableOnWWAN;
@property(nonatomic) struct dispatch_queue_s *reachabilitySerialQueue; // @synthesize reachabilitySerialQueue;
@property(nonatomic) struct __SCNetworkReachability *reachabilityRef; // @synthesize reachabilityRef;
- (void)reachabilityChanged:(unsigned int)arg1;
- (id)currentReachabilityFlags;
- (id)currentReachabilityString;
- (unsigned int)reachabilityFlags;
- (int)currentReachabilityStatus;
- (BOOL)isInterventionRequired;
- (BOOL)isConnectionOnDemand;
- (BOOL)connectionRequired;
- (BOOL)isConnectionRequired;
- (BOOL)isReachableViaWiFi;
- (BOOL)isReachableViaWWAN;
- (BOOL)isReachable;
- (BOOL)isReachableWithFlags:(unsigned int)arg1;
- (void)stopNotifier;
- (BOOL)startNotifier;
- (void)dealloc;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

