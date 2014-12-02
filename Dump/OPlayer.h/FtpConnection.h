//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AsyncSocket, FtpDataConnection, FtpServer, NSArray, NSFileHandle, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FtpConnection : NSObject
{
    AsyncSocket *connectionSocket;
    FtpServer *server;
    AsyncSocket *dataListeningSocket;
    AsyncSocket *dataSocket;
    FtpDataConnection *dataConnection;
    NSArray *msgComponents;
    unsigned short dataPort;
    int transferMode;
    NSMutableArray *queuedData;
    NSString *currentUser;
    NSString *currentDir;
    NSString *currentFile;
    NSFileHandle *currentFileHandle;
    NSString *rnfrFilename;
    int clientEncoding;
}

@property int clientEncoding; // @synthesize clientEncoding;
@property(retain) NSString *rnfrFilename; // @synthesize rnfrFilename;
@property(retain) NSString *currentDir; // @synthesize currentDir;
@property(retain) NSString *currentFile; // @synthesize currentFile;
@property int transferMode; // @synthesize transferMode;
- (id)rootedPath:(id)arg1;
- (id)visibleCurrentDir;
- (unsigned char)validNewFilePath:(id)arg1;
- (unsigned char)accessibleFilePath:(id)arg1;
- (unsigned char)canChangeDirectoryTo:(id)arg1;
- (unsigned char)changedCurrentDirectoryTo:(id)arg1;
- (id)fileNameFromArgs:(id)arg1;
- (unsigned long long)fileSize:(id)arg1;
- (id)makeFilePathFrom:(id)arg1;
- (void)doRnto:(id)arg1 arguments:(id)arg2;
- (void)doRnfr:(id)arg1 arguments:(id)arg2;
- (void)doCdUp:(id)arg1 arguments:(id)arg2;
- (void)doMkdir:(id)arg1 arguments:(id)arg2;
- (void)doSize:(id)arg1 arguments:(id)arg2;
- (void)doMlst:(id)arg1 arguments:(id)arg2;
- (void)doDele:(id)arg1 arguments:(id)arg2;
- (void)doRetr:(id)arg1 arguments:(id)arg2;
- (void)doStor:(id)arg1 arguments:(id)arg2;
- (void)notifyWIFIUpload:(id)arg1 localPath:(id)arg2 desiredLen:(unsigned long long)arg3;
- (void)doNlst:(id)arg1 arguments:(id)arg2;
- (void)doCwd:(id)arg1 arguments:(id)arg2;
- (void)doType:(id)arg1 arguments:(id)arg2;
- (void)doOpts:(id)arg1 arguments:(id)arg2;
- (void)doPort:(id)arg1 arguments:(id)arg2;
- (void)doEpsv:(id)arg1 arguments:(id)arg2;
- (void)doPasv:(id)arg1 arguments:(id)arg2;
- (void)doEprt:(id)arg1 arguments:(id)arg2;
- (void)doLprt:(id)arg1 arguments:(id)arg2;
- (void)doSyst:(id)arg1 arguments:(id)arg2;
- (void)doNoop:(id)arg1 arguments:(id)arg2;
- (void)doPwd:(id)arg1 arguments:(id)arg2;
- (void)doList:(id)arg1 arguments:(id)arg2;
- (void)doFeat:(id)arg1 arguments:(id)arg2;
- (void)doStat:(id)arg1 arguments:(id)arg2;
- (void)doPass:(id)arg1 arguments:(id)arg2;
- (void)doUser:(id)arg1 arguments:(id)arg2;
- (void)doQuit:(id)arg1 arguments:(id)arg2;
- (void)processCommand;
- (void)processDataRead:(id)arg1;
- (void)didFinishReading;
- (void)didReceiveDataRead;
- (void)didReceiveDataWritten;
- (void)sendData:(id)arg1;
- (void)sendDataString:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)onSocket:(id)arg1 didWriteDataWithTag:(long)arg2;
- (void)onSocket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)onSocket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (BOOL)onSocketWillConnect:(id)arg1;
- (int)choosePasvDataPort;
- (BOOL)openDataSocket:(int)arg1;
- (id)connectionAddress;
- (void)dealloc;
- (id)initWithAsyncSocket:(id)arg1 forServer:(id)arg2;

@end

