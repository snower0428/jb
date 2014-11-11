//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, TKAlertView;

@interface TKAlertCenter : NSObject
{
    NSMutableArray *_alerts;
    NSMutableArray *_alertMessages;
    BOOL _active;
    TKAlertView *_alertView;
    struct CGRect _alertFrame;
    double _duration;
}

+ (id)defaultCenter;
- (void)orientationWillChange:(id)arg1;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)postAlertWithMessage:(id)arg1 duration:(double)arg2;
- (void)postAlertWithMessage:(id)arg1;
- (void)postAlertWithMessage:(id)arg1 image:(id)arg2;
- (void)animationStep3;
- (void)animationStep2;
- (void)showAlerts;
- (void)dealloc;
- (id)init;

@end

