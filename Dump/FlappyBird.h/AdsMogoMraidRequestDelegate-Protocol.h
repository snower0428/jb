//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURLConnection;

@protocol AdsMogoMraidRequestDelegate <NSObject>
- (void)connection:(NSURLConnection *)arg1 didFailWithError:(NSError *)arg2;
- (void)connectionDidFinishLoading:(NSURLConnection *)arg1 data:(NSData *)arg2;
@end
