//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "CalendarViewDataSource.h"
#import "CalendarViewDelegate.h"

@class CalendarView;

__attribute__((visibility("hidden")))
@interface UICalendar : BaseViewController <CalendarViewDataSource, CalendarViewDelegate>
{
    int year;
    int month;
    int day;
    int dayFromCity;
    CalendarView *calendarView;
    id <UICalendarDelegate> delegate;
    BOOL isShowSXBackground;
    BOOL isMondayFirstDay;
}

+ (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) id <UICalendarDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int dayFromCity; // @synthesize dayFromCity;
@property(nonatomic) int day; // @synthesize day;
@property(nonatomic) int month; // @synthesize month;
@property(nonatomic) int year; // @synthesize year;
- (void)dealloc;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)updateTheme;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupBackground;
- (void)calendarView:(id)arg1 doubleClickedDay:(id)arg2;
- (void)calendarView:(id)arg1 clickedDay:(id)arg2 isShowDayFromCity:(BOOL)arg3;
- (int)yearForCalendarView;
- (int)monthForCalendarView;
- (id)sxBackgroundImageForCalendarView;
- (BOOL)isShowSXBackgroundForCalendarView;
- (id)daysInfoOfMonthForCalendarView;
- (int)getNeedShowDayFromWeatherCity;
- (BOOL)isMondayFirstDayOfWeekForCalendarView;
- (void)updateData;
- (void)scheduleDidChange:(id)arg1;
- (void)updateDate:(id)arg1;
- (void)changeTheme;

@end
