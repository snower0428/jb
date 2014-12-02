//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncSocket, NSDictionary, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FtpServer : NSObject
{
    AsyncSocket *listenSocket;
    NSMutableArray *connectedSockets;
    id server;
    id notificationObject;
    int portNumber;
    id delegate;
    NSMutableArray *connections;
    NSDictionary *commands;
    NSString *baseDir;
    unsigned char changeRoot;
    int clientEncoding;
}

@property unsigned char changeRoot; // @synthesize changeRoot;
@property int clientEncoding; // @synthesize clientEncoding;
@property(retain) NSMutableArray *connections; // @synthesize connections;
@property(retain) NSString *baseDir; // @synthesize baseDir;
@property(retain) NSDictionary *commands; // @synthesize commands;
@property(retain) id delegate; // @synthesize delegate;
@property int portNumber; // @synthesize portNumber;
@property(retain) id notificationObject; // @synthesize notificationObject;
@property(retain) id server; // @synthesize server;
@property(retain) NSMutableArray *connectedSockets; // @synthesize connectedSockets;
@property(retain) AsyncSocket *listenSocket; // @synthesize listenSocket;
- (void)dealloc;
- (id)createList:(id)arg1;
- (void)closeConnection:(id)arg1;
- (void)didReceiveFileListChanged;
- (void)onSocket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)onSocket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)stopFtpServer;
- (id)initWithPort:(unsigned int)arg1 withDir:(id)arg2 notifyObject:(id)arg3;
- (id)settingsFilePath;
- (unsigned int)getEncodingMethodInLong:(id)arg1;

@end
