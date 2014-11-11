//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSString, NSURL, NSURLResponse;

@protocol GADURLConnectionDelegate
- (void)loadDidFail:(NSError *)arg1 httpStatusCode:(int)arg2;
- (void)loadDidFinish:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)loadDidReceiveCachedResponse:(NSURLResponse *)arg1;
- (BOOL)loadShouldUseCachedResponse:(NSURLResponse *)arg1;
- (void)loadDidReceiveRedirectResponse:(NSURLResponse *)arg1;
- (NSError *)shouldRedirectToURL:(NSURL *)arg1;
@end
