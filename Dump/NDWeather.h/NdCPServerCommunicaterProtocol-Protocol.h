//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NdCPServerCommunicateReceivePackage, NdCPServerCommunicater;

@protocol NdCPServerCommunicaterProtocol
- (void)communicateDidCancel:(NdCPServerCommunicater *)arg1;
- (void)communicateDidFail:(NdCPServerCommunicater *)arg1 error:(NSError *)arg2;
- (void)communicateDidFinish:(NdCPServerCommunicater *)arg1 receivedData:(NdCPServerCommunicateReceivePackage *)arg2;
@end
