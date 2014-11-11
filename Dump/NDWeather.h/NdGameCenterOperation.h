//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NdCPServerOperation.h"

@class NSError, NSNumber;

@interface NdGameCenterOperation : NdCPServerOperation
{
    NSNumber *referenceNumber;
    int actionNumber;
    SEL protocolMethod;
    NSError *errorMessage;
}

- (id)init;
- (void)dealloc;
- (id)requestUrl;
- (int)transverToOutputError:(int)arg1;
- (void)generateResponse:(id)arg1;
- (id)invocationOnTarget:(id)arg1 action:(SEL)arg2 withArguments:(void *)arg3;
- (id)callbackInvocationOnObject:(id)arg1;
- (void)callProtocolMethodOnObject:(id)arg1;
- (int)sendRequest:(id)arg1 encrytType:(int)arg2;
- (void)success;
- (void)communicateDidFinish:(id)arg1 receivedData:(id)arg2;
- (void)communicateDidFail:(id)arg1 error:(id)arg2;
- (void)communicateDidCancel:(id)arg1;
- (void)fail:(id)arg1 shouldPostError:(BOOL)arg2;
@property(retain, nonatomic) NSError *errorMessage; // @synthesize errorMessage;
@property(nonatomic) SEL protocolMethod; // @synthesize protocolMethod;
@property(nonatomic) int actionNumber; // @synthesize actionNumber;
@property(retain, nonatomic) NSNumber *referenceNumber; // @synthesize referenceNumber;

@end
