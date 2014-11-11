//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

#import "MTHTTPRequestProtocol.h"

@class NSDate;

@interface MTHTTPRequestOperation : AFHTTPRequestOperation <MTHTTPRequestProtocol>
{
    CDUnknownBlockType _cancelBlock;
    NSDate *_creationTime;
    double _startTime;
    double _endTime;
}

@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSDate *creationTime; // @synthesize creationTime=_creationTime;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (id)logDictionary;
- (id)log;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)setCompletionBlockWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)start;
- (id)initWithRequest:(id)arg1;
- (void)discard;

@end

