//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBToAppWorkspaceTransaction.h"

#import "SBUIAnimationControllerDelegate.h"

@class SBAlert, SBUIAnimationController;

@interface SBAlertToAppWorkspaceTransaction : SBToAppWorkspaceTransaction <SBUIAnimationControllerDelegate>
{
    SBAlert *_alert;
    SBUIAnimationController *_animation;
    BOOL _animatedAppActivation;
    BOOL _animatingAlertSuspension;
    BOOL _deactivateAfterNextLaunch;
    BOOL _activatingFromAssistant;
    BOOL _fadeAssistant;
}

@property(readonly, nonatomic) SBAlert *alert; // @synthesize alert=_alert;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 didCommitAnimation:(BOOL)arg2 withDuration:(double)arg3 afterDelay:(double)arg4;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_handleFailure;
- (void)_deactivateAlertIfNecessary;
- (void)_alertAnimationComplete:(id)arg1;
- (void)_transactionComplete;
- (void)_endAnimation;
- (BOOL)shouldPerformToAppStateCleanupOnCompletion;
- (BOOL)selfAlertDidDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (BOOL)selfApplicationDidFinishLaunching:(id)arg1 withInfo:(id)arg2;
- (BOOL)selfApplicationDidBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationWillBecomeReceiver:(id)arg1 fromApplication:(id)arg2;
- (BOOL)selfApplicationActivated:(id)arg1;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 alertManager:(id)arg2 alert:(id)arg3 toApplication:(id)arg4;

@end

