//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceTransaction.h"

@class SBAlert;

@interface SBAlertToAlertWorkspaceTransaction : SBWorkspaceTransaction
{
    SBAlert *_activatingAlert;
    SBAlert *_deactivatingAlert;
    BOOL _activation;
}

- (BOOL)alertDidDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillDeactivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertDidActivate:(id)arg1 overAlerts:(id)arg2;
- (BOOL)selfAlertWillActivate:(id)arg1 overAlerts:(id)arg2;
- (void)_commit;
- (id)debugDescription;
- (void)dealloc;
- (id)_initWithWorkspace:(id)arg1 alertManager:(id)arg2 activatingAlert:(id)arg3 deactivatingAlert:(id)arg4 activation:(BOOL)arg5;
- (id)initDeactivationWithWorkspace:(id)arg1 alertManager:(id)arg2 from:(id)arg3 to:(id)arg4;
- (id)initActivationWithWorkspace:(id)arg1 alertManager:(id)arg2 from:(id)arg3 to:(id)arg4;

@end

