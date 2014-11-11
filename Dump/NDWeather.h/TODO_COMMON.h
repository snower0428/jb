//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TODO_COMMON : NSObject
{
}

+ (void)threadSolveGuestData:(id)arg1;
+ (id)getTaskByID:(id)arg1;
+ (id)getNotCollectedTaskArrayAtTime:(double)arg1 toTime:(double)arg2;
+ (id)getCollectedTaskArrayAtTime:(double)arg1 toTime:(double)arg2;
+ (id)getTaskArrayAtTime:(double)arg1 toTime:(double)arg2;
+ (void)deleteTaskWithID:(id)arg1;
+ (void)modifyTask:(id)arg1;
+ (_Bool)addTaskWithName:(id)arg1 withDescription:(id)arg2 withVoice:(id)arg3 withProject:(id)arg4 withPriority:(unsigned char)arg5 withStar:(_Bool)arg6 withEndTime:(double)arg7 withRemind:(id)arg8 withEstimated:(int)arg9 withProcess:(double)arg10 withCollecting:(_Bool)arg11;
+ (_Bool)addTaskWithName:(id)arg1 withDescription:(id)arg2 withVoice:(id)arg3 withProject:(id)arg4 withPriority:(unsigned char)arg5 withStar:(_Bool)arg6 withEndTime:(double)arg7 withRemind:(id)arg8 withEstimated:(int)arg9 withProcess:(double)arg10;
+ (_Bool)addTaskWithName:(id)arg1 withEndTime:(double)arg2;
+ (_Bool)stopSyncData;
+ (_Bool)syncData;
+ (void)reset;
+ (void)loginFailed;
+ (void)loginWithUid:(id)arg1 andSessionID:(id)arg2 andUserName:(id)arg3 delegate:(id)arg4;
+ (void)setAutoTransfer:(BOOL)arg1;
+ (void)setNetStatus:(BOOL)arg1;
+ (void)clear;
+ (void)init;

@end
