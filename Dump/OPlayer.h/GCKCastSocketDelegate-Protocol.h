//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GCKCastSocket, NSData, NSError;

@protocol GCKCastSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSocket *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didFailToConnectWithError:(NSError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didConnectWithPeerSecTrust:(struct __SecTrust *)arg2;
@end

