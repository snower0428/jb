//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface GADNetwork : NSObject
{
    unsigned int _changeCount;
    unsigned int _networkType;
    struct __SCNetworkReachability *_networkReachabilityRef;
    NSRecursiveLock *_recursiveLock;
}

@property(retain, nonatomic) NSRecursiveLock *recursiveLock; // @synthesize recursiveLock=_recursiveLock;
@property(nonatomic) struct __SCNetworkReachability *networkReachabilityRef; // @synthesize networkReachabilityRef=_networkReachabilityRef;
- (void).cxx_destruct;
- (void)stopNetworkChecking;
- (void)startNetworkChecking;
- (void)setNetworkTypeFromFlags:(unsigned int)arg1;
@property unsigned int networkType;
- (void)disableNetworkChecking;
- (void)enableNetworkChecking;
- (BOOL)networkCheckingIsEnabled;
- (unsigned int)changeCount;
- (id)networkTypeString;
- (void)dealloc;
- (id)init;

@end

