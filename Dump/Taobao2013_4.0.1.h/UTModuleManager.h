//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UTRuntimeModule.h"

@class NSMutableArray;

@interface UTModuleManager : UTRuntimeModule
{
    NSMutableArray *mModuleList;
}

- (void).cxx_destruct;
- (void)removeModule:(id)arg1;
- (void)addModule:(id)arg1;
- (void)onSwitchBackground;
- (void)onSwitchForeground;
- (void)onStop;
- (void)onPreStop;
- (void)onStart;
- (void)onPreStart;
- (id)init;

@end

