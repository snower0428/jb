//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncSocket, FtpConnection, NSMutableData;

__attribute__((visibility("hidden")))
@interface FtpDataConnection : NSObject
{
    AsyncSocket *dataSocket;
    FtpConnection *ftpConnection;
    AsyncSocket *dataListeningSocket;
    id dataConnection;
    NSMutableData *receivedData;
    int connectionState;
}

@property int connectionState; // @synthesize connectionState;
@property(readonly) NSMutableData *receivedData; // @synthesize receivedData;
- (BOOL)onReadStreamEnded:(id)arg1;
- (void)onSocket:(id)arg1 willDisconnectWithError:(id)arg2;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)onSocket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (BOOL)onSocketWillConnect:(id)arg1;
- (void)closeConnection;
- (void)writeQueuedData:(id)arg1;
- (void)writeData:(id)arg1;
- (void)writeString:(id)arg1;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 forConnection:(id)arg2 withQueuedData:(id)arg3;

@end

