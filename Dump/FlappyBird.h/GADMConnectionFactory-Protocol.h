//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLConnection, NSURLRequest;

@protocol GADMConnectionFactory <NSObject>
- (NSURLConnection *)newConnectionWithRequest:(NSURLRequest *)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (NSURLConnection *)connectionWithRequest:(NSURLRequest *)arg1 delegate:(id)arg2;
@end

