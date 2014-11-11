//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableString, TAMutex;

@interface TALogCore : NSObject
{
    BOOL bDebug;
    BOOL bInfo;
    BOOL bImportant;
    BOOL bWarning;
    BOOL bError;
    BOOL bFatal;
    BOOL bFileLog;
    BOOL bLocation;
    TAMutex *locker;
    NSMutableString *fpTxtLog;
}

+ (id)getInstance;
- (void)recLog:(id)arg1 type:(int)arg2;
- (void)fileLog:(id)arg1 type:(int)arg2;
- (void)logToTxt:(BOOL)arg1;
- (void)hideLocation:(BOOL)arg1;
- (void)hideFatal:(BOOL)arg1;
- (void)hideError:(BOOL)arg1;
- (void)hideWarning:(BOOL)arg1;
- (void)hideImportant:(BOOL)arg1;
- (void)hideInfo:(BOOL)arg1;
- (void)hideDebug:(BOOL)arg1;
- (BOOL)containLocation;
- (BOOL)allowFatal;
- (BOOL)allowError;
- (BOOL)allowWarning;
- (BOOL)allowImportant;
- (BOOL)allowInfo;
- (BOOL)allowDebug;
- (BOOL)allowType:(int)arg1;
- (void)loadSwitch:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)reopenLogTxt;

@end
