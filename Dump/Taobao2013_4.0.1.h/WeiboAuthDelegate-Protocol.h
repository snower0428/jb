//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, WeiboApi;

@protocol WeiboAuthDelegate <NSObject>

@optional
- (void)DidAuthFailWithError:(NSError *)arg1;
- (void)DidAuthCanceled:(WeiboApi *)arg1;
- (void)DidAuthFinished:(WeiboApi *)arg1;
- (void)DidAuthRefreshFail:(NSError *)arg1;
- (void)DidAuthRefreshed:(WeiboApi *)arg1;
@end

