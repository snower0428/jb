//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSStreamDelegate.h"

@class NSInputStream, NSNumber, NSOutputStream, NSRunLoop, NSString;

__attribute__((visibility("hidden")))
@interface FTPGet : NSObject <NSStreamDelegate>
{
    NSNumber *sizeNum;
    NSString *fileURL;
    NSInputStream *networkStream;
    NSString *filePath;
    NSOutputStream *fileStream;
    NSRunLoop *runLoop;
}

@property(retain, nonatomic) NSString *fileURL; // @synthesize fileURL;
@property(retain, nonatomic) NSOutputStream *fileStream; // @synthesize fileStream;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath;
@property(retain, nonatomic) NSInputStream *networkStream; // @synthesize networkStream;
@property(retain, nonatomic) NSNumber *sizeNum; // @synthesize sizeNum;
- (unsigned long)getEncodingMethodInLong:(id)arg1;
- (unsigned long)getFTPEncoding;
- (void)startOrStopGet;
- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned int)arg2;
- (void)_stopReceiveWithStatus:(id)arg1;
- (void)_startReceive;
- (id)smartURLForString:(id)arg1;
- (id)getFileName:(id)arg1;
- (id)genFilePath:(id)arg1;
- (id)getFTPDownloadFullPath:(id)arg1;
- (id)downloadingFilePath;
- (id)settingsFilePath;
@property(readonly, nonatomic) BOOL isReceiving;
- (void)_receiveDidStop;
- (void)_receiveDidStart;
- (id)initWithFullURL:(id)arg1 fileSize:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
