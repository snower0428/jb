//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@protocol GCKCastChannelHandler <NSObject>
- (int)generateRequestID;
- (BOOL)sendBinaryMessage:(NSData *)arg1 withNamespace:(NSString *)arg2 toDestinationID:(NSString *)arg3;
- (BOOL)sendBinaryMessage:(NSData *)arg1 withNamespace:(NSString *)arg2;
- (BOOL)sendTextMessage:(NSString *)arg1 withNamespace:(NSString *)arg2 toDestinationID:(NSString *)arg3;
- (BOOL)sendTextMessage:(NSString *)arg1 withNamespace:(NSString *)arg2;
@end

