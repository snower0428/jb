//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBAlertItem.h"

@class NSString;

@interface SBEdgeActivationAlertItem : SBAlertItem
{
    int _error;
    NSString *_reason;
    BOOL _suggestWiFi;
    int _settingsButtonIndex;
}

- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)_showNetworkPrefs;
- (BOOL)dismissOnLock;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (void)dealloc;
- (id)initWithErrorCode:(int)arg1 reason:(id)arg2 suggestWiFi:(BOOL)arg3;

@end

