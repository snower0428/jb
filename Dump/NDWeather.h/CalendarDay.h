//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CalendarDay : NSObject
{
    int nweek;
    int nday;
    BOOL isToday;
    NSString *dayDes;
    int dayScheduleType;
    int dayRestType;
    int dayColorType;
}

@property(copy, nonatomic) NSString *dayDes; // @synthesize dayDes;
@property(nonatomic) int dayColorType; // @synthesize dayColorType;
@property(nonatomic) int dayRestType; // @synthesize dayRestType;
@property(nonatomic) int dayScheduleType; // @synthesize dayScheduleType;
@property(nonatomic) BOOL isToday; // @synthesize isToday;
@property(nonatomic) int nday; // @synthesize nday;
@property(nonatomic) int nweek; // @synthesize nweek;
- (void)dealloc;
- (id)init;

@end

