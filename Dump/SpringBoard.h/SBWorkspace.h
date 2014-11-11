//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKSWorkspaceDelegate.h"
#import "SBAlertManagerDelegate.h"
#import "SBWorkspaceTransactionDelegate.h"

@class BKSWorkspace, NSMutableArray, NSObject<OS_dispatch_source>, NSTimer, SBAlertManager, SBWorkspaceEventQueueLockAssertion, SBWorkspaceTransaction;

@interface SBWorkspace : NSObject <BKSWorkspaceDelegate, SBAlertManagerDelegate, SBWorkspaceTransactionDelegate>
{
    BKSWorkspace *_bksWorkspace;
    SBAlertManager *_alertManager;
    SBWorkspaceTransaction *_currentTransaction;
    SBWorkspaceEventQueueLockAssertion *_eventQueueLock;
    NSObject<OS_dispatch_source> *_transactionWatchdog;
    NSTimer *_relaunchTimer;
    NSMutableArray *_applicationsToRelaunch;
}

@property(readonly, nonatomic) SBAlertManager *alertManager; // @synthesize alertManager=_alertManager;
@property(readonly, nonatomic) BKSWorkspace *bksWorkspace; // @synthesize bksWorkspace=_bksWorkspace;
@property(retain, nonatomic) SBWorkspaceTransaction *currentTransaction; // @synthesize currentTransaction=_currentTransaction;
- (void)transactionDidFinish:(id)arg1 success:(BOOL)arg2;
- (void)alertManager:(id)arg1 didDeactivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willDeactivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 didActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)alertManager:(id)arg1 willActivateAlert:(id)arg2 overAlerts:(id)arg3;
- (void)workspace:(id)arg1 applicationDebugStateChanged:(id)arg2 newState:(BOOL)arg3;
- (void)workspace:(id)arg1 handleStatusBarReturnActionFromApplication:(id)arg2 statusBarStyle:(id)arg3;
- (void)workspace:(id)arg1 handleOpenURL:(id)arg2 fromApplication:(id)arg3;
- (void)workspace:(id)arg1 applicationSuspensionSettingsUpdated:(id)arg2 withSettings:(id)arg3;
- (void)workspace:(id)arg1 applicationSuspended:(id)arg2 withSettings:(id)arg3;
- (void)workspace:(id)arg1 applicationExited:(id)arg2 withInfo:(id)arg3;
- (void)workspace:(id)arg1 applicationDidFailToLaunch:(id)arg2;
- (void)workspace:(id)arg1 applicationActivated:(id)arg2;
- (void)workspace:(id)arg1 applicationDidFinishLaunching:(id)arg2 withInfo:(id)arg3;
- (void)workspace:(id)arg1 applicationDidStartLaunching:(id)arg2;
- (void)workspaceDidResume:(id)arg1;
- (void)workspaceWillResume:(id)arg1;
- (void)workspaceDidSuspend:(id)arg1;
- (void)workspaceWillSuspend:(id)arg1;
- (void)workspace:(id)arg1 applicationDidBecomeReceiver:(id)arg2 fromApplication:(id)arg3;
- (id)workspace:(id)arg1 applicationWillBecomeReceiver:(id)arg2 fromApplication:(id)arg3;
- (void)updateInterruptedByCallSettingsFrom:(id)arg1 to:(id)arg2;
- (BOOL)_applicationExited:(id)arg1 withInfo:(id)arg2;
- (BOOL)_handleSetupExited:(id)arg1;
- (void)_invalidateRelaunchTimer;
- (void)_memoryPressureRelieved:(id)arg1;
- (void)_memoryPressureWarn:(id)arg1;
- (void)_launchNextPendedAutoLaunchApp;
- (void)_scheduleRelaunchTimerIfNecessary;
- (void)_handleBuddyLaunchFinished;
- (id)_applicationForBundleIdentifier:(id)arg1 frontmost:(BOOL)arg2;
- (void)_noteCurrentTransactionFailed:(const char *)arg1;
- (id)debugDescription;
- (void)dealloc;
- (id)init;

@end

