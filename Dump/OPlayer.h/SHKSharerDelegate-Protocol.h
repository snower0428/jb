//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SHKSharer;

@protocol SHKSharerDelegate <NSObject>
- (void)sharerShowOtherAuthorizationErrorAlert:(SHKSharer *)arg1;
- (void)sharerShowBadCredentialsAlert:(SHKSharer *)arg1;
- (void)sharerCancelledSending:(SHKSharer *)arg1;
- (void)sharer:(SHKSharer *)arg1 failedWithError:(NSError *)arg2 shouldRelogin:(BOOL)arg3;
- (void)sharerFinishedSending:(SHKSharer *)arg1;
- (void)sharerStartedSending:(SHKSharer *)arg1;

@optional
- (void)sharerAuthDidFinish:(SHKSharer *)arg1 success:(BOOL)arg2;
@end
