//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface CalendarHolidayHttpClient : NSObject
{
    NSTimer *timer;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer;
- (void)dealloc;
- (void)requestFailed:(id)arg1;
- (void)requestFinished:(id)arg1;
- (void)removeHolidayObserver:(id)arg1;
- (void)addHolidayObserver:(id)arg1 selector:(SEL)arg2;
- (void)checkHoliday;
- (void)downloadHolidayByYear:(int)arg1;
- (BOOL)handleResponseString:(id)arg1;
- (void)postCalendarHolidayNotification;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned int)retainCount;
- (id)retain;

@end
