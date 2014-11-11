//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface Schedule : NSObject
{
    int _taskDoneCount;
    int _taskUnDoneCount;
    int _taskExpiredCount;
    int _taskTotal;
}

+ (id)Instance;
@property(nonatomic) int taskTotal; // @synthesize taskTotal=_taskTotal;
@property(nonatomic) int taskExpiredCount; // @synthesize taskExpiredCount=_taskExpiredCount;
@property(nonatomic) int taskUnDoneCount; // @synthesize taskUnDoneCount=_taskUnDoneCount;
@property(nonatomic) int taskDoneCount; // @synthesize taskDoneCount=_taskDoneCount;
- (BOOL)scheduleLoginWithDelegate:(id)arg1;
- (id)init;
- (id)getScheduleStatisticsWithYear:(int)arg1 WithMonth:(int)arg2;
- (id)getScheduleStatisticsWithYear:(int)arg1 WithMonth:(int)arg2 withDay:(int)arg3;
- (id)getScheduleGroupWithYear:(int)arg1 WithMonth:(int)arg2 WithType:(int)arg3;
- (id)getScheduleGroupWithYear:(int)arg1 WithMonth:(int)arg2 WithDay:(int)arg3;
- (void)deleteScheduleTaskWithID:(id)arg1;
- (BOOL)modifiyScheduleTask:(id)arg1;
- (BOOL)addScheduleTaskwithName:(id)arg1 withEndTime:(double)arg2;
- (id)getSortedScheduleArrayWithYear:(int)arg1 WithMonth:(int)arg2 WithDay:(int)arg3;
- (id)getTotalScheduleList;
- (void)reloadScheduleStatisticsData;

@end

