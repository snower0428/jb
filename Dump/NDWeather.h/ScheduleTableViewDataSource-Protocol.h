//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, UICScheduleGroup;

@protocol ScheduleTableViewDataSource
- (int)getExpiredScheduleCount;
- (int)getDoneScheduleCount;
- (int)getUndoneScheduleCount;
- (int)getTotalScheduleCount;
- (NSString *)getScheduleJQ;
- (NSString *)getScheduleFeast;
- (NSString *)getScheduleDate;
- (UICScheduleGroup *)taskListForScheduleTableView;
@end
