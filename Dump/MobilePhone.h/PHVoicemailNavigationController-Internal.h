//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHVoicemailNavigationController.h"

@class PHVoicemailListViewController, PHVoicemailNoContentViewController, PHVoicemailSetupViewController;

@interface PHVoicemailNavigationController (Internal)
@property(readonly) PHVoicemailNoContentViewController *noContentViewController;
@property(readonly) PHVoicemailSetupViewController *setupViewController;
@property(readonly) PHVoicemailListViewController *blockedViewController;
@property(readonly) PHVoicemailListViewController *trashViewController;
@property(readonly) PHVoicemailListViewController *inboxViewController;
- (void)_invalidateBadge;
@end
