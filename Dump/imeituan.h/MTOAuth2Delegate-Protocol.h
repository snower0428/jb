//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTOAuth2, NSError;

@protocol MTOAuth2Delegate <NSObject>

@optional
- (void)oauth2ShareDidFinish:(NSError *)arg1;
- (void)oauth2LoginFinished:(MTOAuth2 *)arg1;
@end

