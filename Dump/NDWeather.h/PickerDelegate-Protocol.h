//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol PickerDelegate

@optional
- (void)setYearMonthDayWithShowSolar:(BOOL)arg1 WithYear:(int)arg2 WithMonth:(int)arg3 WithDay:(int)arg4;
- (void)setDateAndTimeWithYear:(int)arg1 WithMonth:(int)arg2 WithDay:(int)arg3 WithTime:(NSString *)arg4;
- (void)setSolarYearMonthWithYear:(int)arg1 WithMonth:(int)arg2;
- (void)setStartEndTimeWithStartTime:(NSString *)arg1 WithEndTime:(NSString *)arg2;
- (void)setLunarTimeIntervalData:(NSString *)arg1;
- (void)setSolarTimeIntervalData:(NSString *)arg1;
- (void)setLunarYearData:(NSString *)arg1;
- (void)setSolarYearData:(NSString *)arg1;
- (void)setFestivalData:(NSString *)arg1;
@end

