//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSString, NSURLConnection;

@interface tdvURLConnection : NSObject
{
    NSMutableData *_responseData;
    NSURLConnection *_urlConnection;
    double _timeOut;
    CDUnknownBlockType _resultHandleBlock;
    NSString *_urlString;
    BOOL _isConnectionGoingOn;
}

+ (id)sendAsynchronousRequestWithURLString:(id)arg1 timeOut:(double)arg2 resultHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) BOOL isConnectionGoingOn; // @synthesize isConnectionGoingOn=_isConnectionGoingOn;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(copy, nonatomic) CDUnknownBlockType resultHandleBlock; // @synthesize resultHandleBlock=_resultHandleBlock;
@property(nonatomic) double timeOut; // @synthesize timeOut=_timeOut;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(retain, nonatomic) NSMutableData *responseData; // @synthesize responseData=_responseData;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)cancelConnection;
- (BOOL)startAsynchronousRequest;
- (id)initURLConnectionWithURLString:(id)arg1 timeOut:(double)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

