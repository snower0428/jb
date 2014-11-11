//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetWorkRequestBase.h"

@class BussSyncDownLoad, BussSyncUpLoad, BussSyncUserInit, NSString;

__attribute__((visibility("hidden")))
@interface PersonalInfoSync : NetWorkRequestBase
{
    int curStep;
    NSString *accountSid;
    NSString *stbname;
    NSString *sSyncDate;
    BussSyncUserInit *synLogin;
    BussSyncDownLoad *synDown;
    BussSyncUpLoad *synUp;
    BOOL isBeginTransct;
    BOOL isEndTransct;
    NSString *sHostPepGUID;
    int iCurProg;
    id retvObj;
    SEL retvFunc;
    int iCurStep;
}

@property(copy, nonatomic) NSString *accountSid; // @synthesize accountSid;
@property(copy, nonatomic) NSString *stbname; // @synthesize stbname;
@property(nonatomic) int iCurProg; // @synthesize iCurProg;
@property(nonatomic) int iCurStep; // @synthesize iCurStep;
@property(retain, nonatomic) NSString *sHostPepGUID; // @synthesize sHostPepGUID;
@property(nonatomic) BOOL isEndTransct; // @synthesize isEndTransct;
@property(nonatomic) BOOL isBeginTransct; // @synthesize isBeginTransct;
@property(nonatomic) SEL retvFunc; // @synthesize retvFunc;
@property(nonatomic) id retvObj; // @synthesize retvObj;
@property(retain, nonatomic) BussSyncUpLoad *synUp; // @synthesize synUp;
@property(retain, nonatomic) BussSyncDownLoad *synDown; // @synthesize synDown;
@property(retain, nonatomic) BussSyncUserInit *synLogin; // @synthesize synLogin;
@property(retain, nonatomic) NSString *sSyncDate; // @synthesize sSyncDate;
- (void)notifyUICallBack:(int)arg1 Msg:(id)arg2 Type:(int)arg3 IsStop:(BOOL)arg4;
- (id)makeSyncProgressInfo:(int)arg1 Msg:(id)arg2 Type:(int)arg3 IsStop:(BOOL)arg4;
- (void)onRetriveSyncUpLoad:(id)arg1;
- (void)onRetriveSyncDownLoad:(id)arg1;
- (void)onRetriveRelogin:(id)arg1;
- (void)dbCommit;
- (void)dbRollback;
- (void)updateHostPeople;
- (void)updateShouldSynPeopleVersionToLast;
- (void)updateLocalDbBySrv;
- (void)updateSyncedResult;
- (void)setMaxVerToLocalPepList;
- (void)InvokeInitUser;
- (void)InvokeSyncUp;
- (void)InvokeSyncDown;
- (void)StartSyncPersonInfo:(id)arg1 withSelector:(SEL)arg2 withSid:(id)arg3;
- (void)dealloc;
- (id)init;

@end

