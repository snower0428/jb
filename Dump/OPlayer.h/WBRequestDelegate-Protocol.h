//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSURLResponse, WBRequest;

@protocol WBRequestDelegate <NSObject>

@optional
- (void)request:(WBRequest *)arg1 didFinishLoadingWithResult:(id)arg2;
- (void)request:(WBRequest *)arg1 didFailWithError:(NSError *)arg2;
- (void)request:(WBRequest *)arg1 didReceiveRawData:(NSData *)arg2;
- (void)request:(WBRequest *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
@end

