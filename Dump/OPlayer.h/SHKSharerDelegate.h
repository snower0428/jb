//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SHKSharerDelegate.h"

@class NSString;

@interface SHKSharerDelegate : NSObject <SHKSharerDelegate>
{
}

- (void)sharerShowOtherAuthorizationErrorAlert:(id)arg1;
- (void)sharerShowBadCredentialsAlert:(id)arg1;
- (void)sharerAuthDidFinish:(id)arg1 success:(BOOL)arg2;
- (void)sharerCancelledSending:(id)arg1;
- (void)sharer:(id)arg1 failedWithError:(id)arg2 shouldRelogin:(BOOL)arg3;
- (void)sharerFinishedSending:(id)arg1;
- (void)sharerStartedSending:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

