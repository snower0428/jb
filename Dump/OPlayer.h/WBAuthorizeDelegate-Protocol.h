//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, WBAuthorize;

@protocol WBAuthorizeDelegate <NSObject>
- (void)authorize:(WBAuthorize *)arg1 didFailWithError:(NSError *)arg2;
- (void)authorize:(WBAuthorize *)arg1 didSucceedWithAccessToken:(NSString *)arg2 userID:(NSString *)arg3 expiresIn:(int)arg4;
@end
