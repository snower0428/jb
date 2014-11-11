//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSString;

@interface DMDataDetectManager : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    int ddStep;
    BOOL started;
    double nextDetectInterval;
    NSString *sequenceId;
    NSString *publisherId;
}

+ (id)detectOrigin;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *publisherId; // @synthesize publisherId;
- (void)dealloc;
- (id)buildCommonParams;
- (void)doReportResultRequest:(id)arg1;
- (void)doTaskListRequest;
- (void)startDataDetectInner;
- (void)startDataDetect;
- (id)visitUrl:(id)arg1;
- (id)detectThirdparty:(id)arg1;
- (void)processTaskListResponse:(id)arg1;
- (void)startDataDetectOnMainThread;
- (void)processReceiveData:(id)arg1;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

