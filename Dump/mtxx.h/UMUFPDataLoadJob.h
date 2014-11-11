//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "NSObject.h"

@class NSData, NSMutableData, NSMutableURLRequest, NSURL, NSURLConnection, NSURLResponse;

@interface UMUFPDataLoadJob : NSOperation <NSObject>
{
    NSURL *_imageURL;
    NSURLResponse *_response;
    NSMutableData *_responseData;
    NSURLConnection *_connection;
    double _timeoutInterval;
    NSMutableURLRequest *_request;
    id <UMDataLoadJobDelegate> _delegate;
    BOOL _shouldBlockedByUIManipulations;
    BOOL _executing;
    BOOL _finished;
    int dataType;
    double _cacheTimeoutInterval;
}

@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(nonatomic) double cacheTimeoutInterval; // @synthesize cacheTimeoutInterval=_cacheTimeoutInterval;
@property(nonatomic) BOOL shouldBlockedByUIManipulations; // @synthesize shouldBlockedByUIManipulations=_shouldBlockedByUIManipulations;
@property(nonatomic) int dataType; // @synthesize dataType;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSMutableURLRequest *request; // @synthesize request=_request;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) id <UMDataLoadJobDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void)dealloc;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
@property(readonly, nonatomic) NSData *responseData;
- (BOOL)isConcurrent;
- (void)reset;
- (void)done;
- (void)cancel;
- (void)start;
- (id)initWithImageURL:(id)arg1 delegate:(id)arg2;

@end
