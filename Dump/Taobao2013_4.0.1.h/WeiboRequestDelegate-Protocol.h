//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError;

@protocol WeiboRequestDelegate <NSObject>

@optional
- (void)didFailWithError:(NSError *)arg1 reqNo:(int)arg2;
- (void)didReceiveRawData:(NSData *)arg1 reqNo:(int)arg2;
@end

