//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSRunLoop, NSURLConnection, NSURLResponse, TAAutoResetEvent, TAMutex;

@interface TACommHttpInternal : NSObject
{
    BOOL bSync;
    unsigned int timeoutInterval;
    id commDelegate;
    int iRspStatCode;
    NSMutableData *responseData;
    NSURLResponse *responseHeader;
    NSURLConnection *urlConnection;
    NSRunLoop *runloop;
    TAAutoResetEvent *notifyCommQuit;
    TAMutex *locker;
    BOOL bCancelled;
    unsigned int cancelType;
    int ePhase;
    int eTimeoutAtPhase;
    unsigned int uiCreateTimeoutDelay;
    unsigned int uiReceDataDlgtCount;
    BOOL bReleaseWhenCommEnd;
    BOOL bLogLifecycle;
    BOOL bCommEndWaitTimeoutcheckerEnd;
}

- (void)dealloc;
- (id)init;

@end

