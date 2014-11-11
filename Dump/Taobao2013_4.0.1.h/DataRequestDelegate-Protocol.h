//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ITTBaseDataRequest, NSError;

@protocol DataRequestDelegate <NSObject>

@optional
- (void)request:(ITTBaseDataRequest *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)requestDidCancelLoad:(ITTBaseDataRequest *)arg1;
- (void)requestDidFinishLoad:(ITTBaseDataRequest *)arg1;
- (void)requestDidStartLoad:(ITTBaseDataRequest *)arg1;
@end
