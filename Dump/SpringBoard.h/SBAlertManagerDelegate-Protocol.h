//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SBAlert, SBAlertManager;

@protocol SBAlertManagerDelegate <NSObject>
- (void)alertManager:(SBAlertManager *)arg1 didDeactivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 willDeactivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 didActivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
- (void)alertManager:(SBAlertManager *)arg1 willActivateAlert:(SBAlert *)arg2 overAlerts:(NSArray *)arg3;
@end

